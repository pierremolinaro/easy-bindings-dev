import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol MyRootEntity_docBool {
  var docBool : PMStoredProperty_Bool { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Array of MyRootEntity                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayOf_MyRootEntity : PMObject, PMTransientPropertyProtocol {
  var computeFunction : Optional<() -> [MyRootEntity]?>

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in return self?.mSet.count }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count = PMTransientProperty_Int ()

  func noteModelDidChange () {
    if (props_cache != nil) {
      props_cache = nil
      count.postEvents ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private var mSet = Set<MyRootEntity> ()

  var props_cache : Optional <Array<MyRootEntity> >

  var props : Array<MyRootEntity> {
    get {
      if props_cache == nil {
        if let unwrappedComputeFunction = computeFunction {
          props_cache = unwrappedComputeFunction ()
        }
        if props_cache == nil {
          props_cache = Array<MyRootEntity> ()
        }
        let newObjectSet = Set<MyRootEntity> (props_cache!)
        if mSet != newObjectSet {
        //--- Removed object set
          var removedObjectSet = mSet
          removedObjectSet.subtractInPlace (newObjectSet)
          for managedObject : MyRootEntity in removedObjectSet {
            for observer in mObserversOf_docBool {
              managedObject.docBool.removeObserver (observer, inTrigger:true)
            }
          }
        //--- Added object set
          var addedObjectSet = newObjectSet
          addedObjectSet.subtractInPlace (mSet)
          for managedObject : MyRootEntity in addedObjectSet {
            for observer in mObserversOf_docBool {
              managedObject.docBool.addObserver (observer, inTrigger:true)
            }
          }
        //--- Update object set
          mSet = newObjectSet
        }
      }
      return props_cache!
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_docBool = Set<PMEvent> ()

  func addObserverOf_docBool (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_docBool.insert (inObserver)
    for managedObject in props {
      managedObject.docBool.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_docBool (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_docBool.remove (inObserver)
    for managedObject in props {
      managedObject.docBool.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }

}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_docBool {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var docBool = PMStoredProperty_Bool (true)
  var docBool_keyCodingValue : Bool { get {return docBool.prop } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
    docBool.undoManager = undoManager
  //--- Install owner for relationships
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Remove transients observers
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
    docBool.undoManager = nil
  //--- Reset relationships
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    docBool.explorer = createEntryForAttributeNamed ("docBool", ioRect:&ioRect, view:view)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    docBool.explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (NSNumber (bool:docBool.prop), forKey: "docBool")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    docBool.setProp (inDictionary.readBool ("docBool"))
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

