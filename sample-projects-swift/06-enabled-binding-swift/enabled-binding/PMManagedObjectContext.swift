import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  PMManagedObjectContext                                                                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMManagedObjectContext : PMObject {
  private var mUndoManager : PMUndoManager?
  private var mManagedObjectSet = Set <PMManagedObject> ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //···················································································································*
  
  init (undoManager : PMUndoManager) {
    mUndoManager = undoManager
    super.init ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    undoManager                                                                                                    *
  //···················································································································*
  
  func undoManager () -> PMUndoManager? {
    return mUndoManager
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    insertManagedObject                                                                                            *
  //···················································································································*
  
  func insertManagedObject (object : PMManagedObject) {
    if !mManagedObjectSet.contains(object) {
      mManagedObjectSet.insert (object)
      mUndoManager?.registerUndoWithTarget(self, selector: "removeManagedObject:", object: object)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    removeManagedObject                                                                                            *
  //···················································································································*
  
  func removeManagedObject (object : PMManagedObject) {
    if mManagedObjectSet.contains(object) {
      object.resetToManyRelationships ()
      object.resetToOneRelationships ()
      mManagedObjectSet.remove (object)
      mUndoManager?.registerUndoWithTarget(self, selector: "insertManagedObject:", object: object)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    reset                                                                                                          *
  //···················································································································*
  
  func reset () {
    mUndoManager?.removeAllActions ()
    mUndoManager = nil
    for object in mManagedObjectSet {
      object.resetToManyRelationships ()
    }
    for object in mManagedObjectSet {
      object.resetToOneRelationships ()
    }
    mManagedObjectSet = Set ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  checkEntityReachability                                                                                          *
  //···················································································································*

  func checkEntityReachabilityFromObject (rootObject : PMManagedObject, windowForSheet : NSWindow) {
  //--- Build and show Panel
    let panelRect = NSRect (
      x:0.0,
      y:0.0,
      width:295.0,
      height:107.0
    )
    let panel = NSPanel (contentRect:panelRect,
      styleMask:NSTitledWindowMask,
      backing:NSBackingStoreType.Buffered,
      defer:false
    )
    let textRect = NSRect (
     x:17.0,
     y:45.0,
     width:261.0,
     height:17.0
    )
    var tf = NSTextField (frame:textRect)
    tf.stringValue = "Checking Document Relationships..."
    tf.bezeled = false
    tf.bordered = false
    tf.drawsBackground = false
    tf.editable = false
    tf.font = NSFont.boldSystemFontOfSize (0.0)
    panel.contentView.addSubview (tf)
  //--- Sheet during search
    windowForSheet.beginSheet(panel, completionHandler:nil)
    let reachableObjects : Array<PMManagedObject> = reachableObjectsFromRootObject (rootObject)
    windowForSheet.endSheet(panel)
  //--- 
    let unreachableObjectSet = mManagedObjectSet.subtract (reachableObjects)
    let unregisteredObjectSet = Set <PMManagedObject> (reachableObjects).subtract (mManagedObjectSet)
  //---
    if (unreachableObjectSet.count + unregisteredObjectSet.count) == 0 { // Ok
      var alert = NSAlert ()
      alert.messageText = "Object Graph is consistent"
      alert.informativeText = String (format:"%lu managed object%@.",
        mManagedObjectSet.count, (mManagedObjectSet.count > 1) ? "s" : ""
      )
      alert.beginSheetModalForWindow (windowForSheet,
        completionHandler:nil
      )
    }else{ // Error
      var alert = NSAlert ()
      alert.messageText = "Object Graph Error"
      alert.informativeText = String (format:"%lu managed object%@, %lu unreachable object%@, %lu unregistered object%@.",
        mManagedObjectSet.count,
        (mManagedObjectSet.count > 1) ? "s" : "",
        unreachableObjectSet.count,
        (unreachableObjectSet.count > 1) ? "s" : "",
        unregisteredObjectSet.count,
        (unregisteredObjectSet.count > 1) ? "s" : ""
      )
      alert.addButtonWithTitle ("Ignore Error")
      alert.addButtonWithTitle ("Perform Correction")
      alert.beginSheetModalForWindow (windowForSheet,
        completionHandler: {(response : Int) in
          if response == 1001 { // Perform correction
            self.mManagedObjectSet.subtractInPlace (unreachableObjectSet)
            self.mManagedObjectSet.unionInPlace (unregisteredObjectSet)
          }
        }
      )
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T                                                      *
  //···················································································································*

  func reachableObjectsFromRootObject (rootObject : PMManagedObject) -> Array<PMManagedObject> {
    var reachableObjectArray = Array<PMManagedObject> ()
    var reachableObjectSet = Set <PMManagedObject> ()
    reachableObjectSet.insert (rootObject)
    var objectsToExploreArray = Array<PMManagedObject> ()
    objectsToExploreArray.append (rootObject)
    rootObject.savingIndex = reachableObjectArray.count
    reachableObjectArray.append (rootObject)
    // let start = NSDate()
    //   NSLog ("start")
    while (objectsToExploreArray.count > 0) {
      let objectToExplore : PMManagedObject = objectsToExploreArray.last!
      objectsToExploreArray.removeLast ()
      var accessible = Array<PMManagedObject> ()
      objectToExplore.accessibleObjects (&accessible)
      for object : AnyObject in accessible {
        let managedObject = object as! PMManagedObject
        if !reachableObjectSet.contains (managedObject) {
          reachableObjectSet.insert (managedObject)
          managedObject.savingIndex = reachableObjectArray.count
          reachableObjectArray.append (managedObject)
          objectsToExploreArray.append (managedObject)
        }
      }
    // let timeTaken = NSDate().timeIntervalSinceDate(start) * 1000
    // NSLog ("%f ms", timeTaken)
    }
    return reachableObjectArray ;
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  newInstanceOfEntityNamed                                                                                         *
  //···················································································································*

  func newInstanceOfEntityNamed (inEntityTypeName : String) -> PMManagedObject? {
    var result : PMManagedObject?
    if inEntityTypeName == "MyRootEntity" {
      result = MyRootEntity (managedObjectContext:self)
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
