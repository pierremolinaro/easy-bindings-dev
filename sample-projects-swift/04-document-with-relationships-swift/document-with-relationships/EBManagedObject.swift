import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

var gExplorerObjectIndex = 0
var gAllocatedEntityCount = 0

//---------------------------------------------------------------------------------------------------------------------*
//  EBManagedObject                                                                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class EBManagedObject : EBObject {
  private weak var mManagedObjectContext : EBManagedObjectContext?
  var savingIndex = 0

  let mExplorerObjectIndex : Int
  var mExplorerWindow : NSWindow?

  //-------------------------------------------------------------------------------------------------------------------*
  //  init                                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  init (managedObjectContext : EBManagedObjectContext) {
    mManagedObjectContext = managedObjectContext
    gAllocatedEntityCount += 1
    mExplorerObjectIndex = gExplorerObjectIndex
    gExplorerObjectIndex += 1
    super.init ()
    mManagedObjectContext?.insertManagedObject (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  setup and save                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

  func setUpWithDictionary (inDictionary : NSDictionary,
                            managedObjectArray : Array<EBManagedObject>) {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  Getters                                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  func undoManager () -> EBUndoManager? {
    return mManagedObjectContext?.undoManager ()
  }

  func managedObjectContext () -> EBManagedObjectContext? {
    return mManagedObjectContext
  }

  func explorerObjectIndex () -> Int {
    return mExplorerObjectIndex
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   showExplorerWindow                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  func showExplorerWindow () {
    if mExplorerWindow == nil {
      createAndPopulateObjectExplorerWindow ()
    }
    mExplorerWindow?.makeKeyAndOrderFront (nil)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   resetToManyRelationships                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  func resetToManyRelationships () {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   resetToOneRelationships                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func resetToOneRelationships () {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  func accessibleObjects (inout objects : Array<EBManagedObject>) {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindow                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    createEntryForToOneRelationshipNamed                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  func createEntryForToOneRelationshipNamed (relationshipName : String,
                                             inout ioRect : NSRect,
                                             view : NSView) -> NSButton {
    let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    let tf = NSTextField (frame:ioRect)
    tf.enabled = false
    tf.stringValue = relationshipName
    tf.font = font
    view.addSubview (tf)
    let bt = NSButton (frame:secondColumn (ioRect))
    bt.font = font
    view.addSubview (bt)
    ioRect.origin.y += ioRect.size.height
    return bt
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    createEntryForToManyRelationshipNamed                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  func createEntryForToManyRelationshipNamed (relationshipName : String,
                                              inout ioRect : NSRect,
                                              view : NSView) -> NSPopUpButton {
    let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    let tf = NSTextField (frame:ioRect)
    tf.enabled = false
    tf.stringValue = relationshipName
    tf.font = font
    view.addSubview (tf)
    let bt = NSPopUpButton (frame:secondColumn (ioRect), pullsDown:true)
    bt.font = font
    view.addSubview (bt)
    ioRect.origin.y += ioRect.size.height ;
    return bt
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   createAndPopulateObjectExplorerWindow                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  func createAndPopulateObjectExplorerWindow () {
  //-------------------------------------------------- Create Window
    let r = NSRect (x:20.0, y:20.0, width:10.0, height:10.0)
    mExplorerWindow = NSWindow (
      contentRect:r,
      styleMask:NSTitledWindowMask | NSClosableWindowMask,
      backing:NSBackingStoreType.Buffered,
      `defer`:true,
      screen:nil
    )
  //-------------------------------------------------- Adding properties
    var nameRect = NSRect (x:0.0, y:0.0, width:300.0, height:22.0)
 //   let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    let view = NSView (frame:nameRect)
    populateExplorerWindowWithRect (&nameRect, view:view)
  //-------------------------------------------------- Finish Window construction
  //--- Resize View
    let rr = secondColumn (nameRect)
    view.frame = NSRect (x:0.0, y:0.0, width:NSMaxX (rr), height:NSMaxY (rr))
  //--- Set content size
    mExplorerWindow?.setContentSize (NSSize (width:NSMaxX (nameRect) * 2.0 + 4.0 + 16.0, height:fmin (600.0, NSMaxY (nameRect))))
  //--- Set close button as 'remove window' button
    let closeButton : NSButton? = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = self
    closeButton!.action = "deleteWindowAction:"
  //--- Set window title
    let windowTitle = String (format:"#%ld (%@) at %p", mExplorerObjectIndex, className, self)
    mExplorerWindow!.title = windowTitle
  //--- Add Scroll view
    let frame = NSRect (x:0.0, y:0.0, width:NSMaxX (nameRect) * 2.0 + 4.0, height:NSMaxY (nameRect))
    let sw = NSScrollView (frame:frame)
    sw.hasVerticalScroller = true
    sw.documentView = view
    mExplorerWindow!.contentView = sw
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   updateManagedObjectToManyRelationshipDisplay                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  func updateManagedObjectToManyRelationshipDisplay (inObjectArray : [EBManagedObject], popUpButton : NSPopUpButton?) {
    var title = "No Object" ;
    if inObjectArray.count == 1 {
      title = "1 Object" ;
    }else if inObjectArray.count > 1 {
      title = String (format:"%lu objects", inObjectArray.count)
    }
    popUpButton?.removeAllItems ()
    popUpButton?.addItemWithTitle (title)
    popUpButton?.enabled = inObjectArray.count > 0
    for object : EBManagedObject in inObjectArray {
      let objectIndex = object.explorerObjectIndex ()
      let stringValue = String (format:"#%d (%@) %p", objectIndex, object.className, object)
      popUpButton?.addItemWithTitle (stringValue)
      let item = popUpButton?.lastItem
      item?.target = object
      item?.action = "showObjectWindowFromExplorerButton:"
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   updateManagedObjectToOneRelationshipDisplay                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  func updateManagedObjectToOneRelationshipDisplay (inObject : EBManagedObject?, button : NSButton?) {
    var stringValue = "nil"
    if let unwrappedObject = inObject {
      let objectIndex = unwrappedObject.explorerObjectIndex ()
      stringValue = String (format:"#%d (%@) %p", objectIndex, unwrappedObject.className, unwrappedObject)
    }
    button?.enabled = inObject != nil
    button?.title = stringValue
    button?.toolTip = stringValue
    button?.target = inObject
    button?.action = "showObjectWindowFromExplorerButton:"
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   showObjectWindowFromExplorerButton                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  func showObjectWindowFromExplorerButton (AnyObject) {
    showExplorerWindow ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //   deleteWindowAction                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  func deleteWindowAction (AnyObject) {
    clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   clearObjectExplorer                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  func clearObjectExplorer () {
    let closeButton = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = nil
    mExplorerWindow?.orderOut (nil)
    mExplorerWindow = nil
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   storeEntityArrayInDictionary                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  func storeEntityArrayInDictionary (inEntityArray : NSArray,
                                     inRelationshipName: String,
                                     ioDictionary : NSMutableDictionary) {

    if inEntityArray.count > 0 {
      let indexArray = NSMutableArray ()
      for object : AnyObject in inEntityArray {
        let managedObject = object as! EBManagedObject
        indexArray.addObject (NSNumber (unsignedInteger:managedObject.savingIndex))
      }
      ioDictionary.setObject (indexArray, forKey:inRelationshipName)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   storeEntityInDictionary                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func storeEntityInDictionary (inObject : EBManagedObject?,
                                inRelationshipName: String,
                                ioDictionary : NSMutableDictionary) {
    if nil != inObject {
      ioDictionary.setObject (NSNumber (unsignedInteger:inObject!.savingIndex), forKey:inRelationshipName)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   readEntityFromDictionary                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  func readEntityFromDictionary (inRelationshipName: String,
                                 inDictionary : NSDictionary,
                                 managedObjectArray : Array<EBManagedObject>) -> EBManagedObject? {
    let opValue : Int? = inDictionary.valueForKey (inRelationshipName) as? Int
    var result : EBManagedObject? = nil
    if let value = opValue {
      result = managedObjectArray [value]
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   readEntityArrayFromDictionary                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

  func readEntityArrayFromDictionary (inRelationshipName: String,
                                     inDictionary : NSDictionary,
                                     managedObjectArray : Array<EBManagedObject>) -> Array<EBManagedObject> {
    let opIndexArray : Array<Int>? = inDictionary.valueForKey (inRelationshipName) as? Array<Int>
    var result = Array<EBManagedObject> ()
    if let indexArray = opIndexArray {
      for number : Int in indexArray {
        let managedObject = managedObjectArray [number]
        result.append (managedObject)
      }
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
