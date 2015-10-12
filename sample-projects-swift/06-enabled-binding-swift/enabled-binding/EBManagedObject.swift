import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  EBManagedObject
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBManagedObject) class EBManagedObject : EBObject, EBSignatureObserverProtocol {
  private weak var mManagedObjectContext : EBManagedObjectContext?
  var savingIndex = 0

  var mExplorerWindow : NSWindow?

  //····················································································································
  //  init
  //····················································································································

  init (managedObjectContext : EBManagedObjectContext) {
    mManagedObjectContext = managedObjectContext
    super.init ()
    mManagedObjectContext?.insertManagedObject (self)
  }

  //····················································································································

  override init () { // Used for legacy obsolete object
    super.init ()
  }

  //····················································································································
  //  setup and save
  //····················································································································

  func setUpWithDictionary (inDictionary : NSDictionary,
                            inout managedObjectArray : [EBManagedObject]) {
  }

  //····················································································································

  func additionalSetUp (inDictionary : NSDictionary,
                        inout managedObjectArray : [EBManagedObject],
                        inout legacyObjectArray : [NSMutableDictionary]) {
  }

  //····················································································································

  func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
  }

  //····················································································································
  //  Getters
  //····················································································································

  final func undoManager () -> EBUndoManager? {
    return mManagedObjectContext?.undoManager ()
  }

  final func managedObjectContext () -> EBManagedObjectContext? {
    return mManagedObjectContext
  }

  //····················································································································
  //   showExplorerWindow
  //····················································································································

  final func showExplorerWindow () {
    if mExplorerWindow == nil {
      createAndPopulateObjectExplorerWindow ()
    }
    mExplorerWindow?.makeKeyAndOrderFront (nil)
  }

  //····················································································································
  //   resetToManyRelationships
  //····················································································································

  func resetToManyRelationships () {
  }

  //····················································································································
  //   resetToOneRelationships
  //····················································································································

  func resetToOneRelationships () {
  }

  //····················································································································
  //   accessibleObjects
  //····················································································································

  func accessibleObjects (inout objects : Array<EBManagedObject>) {
  }

  //····················································································································
  //    populateExplorerWindow
  //····················································································································

  func populateExplorerWindow (inout y : CGFloat, view : NSView) {
  }

  //····················································································································
  //   createAndPopulateObjectExplorerWindow
  //····················································································································

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
  //  var nameRect = NSRect (x:0.0, y:0.0, width:300.0, height:22.0)
 //   let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    let view = NSView (frame:r)
    var y : CGFloat = 0.0
    populateExplorerWindow (&y, view:view)
  //-------------------------------------------------- Finish Window construction
  //--- Resize View
   // let rr = secondColumn (nameRect)
    let viewFrame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)
    view.frame = viewFrame
   // NSRect (x:0.0, y:0.0, width:NSMaxX (rr), height:NSMaxY (rr))
  //--- Set content size
    mExplorerWindow?.setContentSize (NSSize (width:EXPLORER_ROW_WIDTH + 16.0, height:fmin (600.0, y)))
  //--- Set close button as 'remove window' button
    let closeButton : NSButton? = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = self
    closeButton!.action = "deleteWindowAction:"
  //--- Set window title
    let windowTitle = explorerIndexString (mExplorerObjectIndex) + className
    mExplorerWindow!.title = windowTitle
  //--- Add Scroll view
    let frame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)
    let sw = NSScrollView (frame:frame)
    sw.hasVerticalScroller = true
    sw.documentView = view
    mExplorerWindow!.contentView = sw
  }

  //····················································································································
  //   showObjectWindowFromExplorerButton
  //····················································································································

  func showObjectWindowFromExplorerButton (_: AnyObject) {
    showExplorerWindow ()
  }
  
  //····················································································································
  //   deleteWindowAction
  //····················································································································

  func deleteWindowAction (_: AnyObject) {
    clearObjectExplorer ()
  }

  //····················································································································
  //   clearObjectExplorer
  //····················································································································

  func clearObjectExplorer () {
    let closeButton = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = nil
    mExplorerWindow?.orderOut (nil)
    mExplorerWindow = nil
  }

  //····················································································································
  //   storeEntityArrayInDictionary
  //····················································································································

  final func storeEntityArrayInDictionary (inEntityArray : NSArray,
                                           inRelationshipName: String,
                                           ioDictionary : NSMutableDictionary) {

    if inEntityArray.count > 0 {
      let indexArray = NSMutableArray ()
      for object : AnyObject in inEntityArray {
        let managedObject = object as! EBManagedObject
        indexArray.addObject (NSNumber (integer:managedObject.savingIndex))
      }
      ioDictionary.setObject (indexArray, forKey:inRelationshipName)
    }
  }

  //····················································································································
  //   storeEntityInDictionary
  //····················································································································

  final func storeEntityInDictionary (inObject : EBManagedObject?,
                                      inRelationshipName: String,
                                      ioDictionary : NSMutableDictionary) {
    if nil != inObject {
      ioDictionary.setObject (NSNumber (integer:inObject!.savingIndex), forKey:inRelationshipName)
    }
  }

  //····················································································································
  //   readEntityFromDictionary
  //····················································································································

  final func readEntityFromDictionary (inRelationshipName: String,
                                       inDictionary : NSDictionary,
                                       inout  managedObjectArray : Array<EBManagedObject>) -> EBManagedObject? {
    let opValue : Int? = inDictionary.valueForKey (inRelationshipName) as? Int
    var result : EBManagedObject? = nil
    if let value = opValue {
      result = managedObjectArray [value]
    }
    return result
  }

  //····················································································································
  //   readEntityArrayFromDictionary                                                                                   *
  //····················································································································

  final func readEntityArrayFromDictionary (inRelationshipName: String,
                                            inDictionary : NSDictionary,
                                            inout managedObjectArray : Array<EBManagedObject>) -> Array<EBManagedObject> {
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

  //····················································································································
  //   setSignatureObserver
  //····················································································································

  private weak var mSignatureObserver : EBSignatureObserverProtocol?

  //····················································································································

  final func setSignatureObserver (observer : EBSignatureObserverProtocol?) {
    mSignatureObserver = observer
  }

  //····················································································································
  //   clearSignatureCache
  //····················································································································

  final func clearSignatureCache () {
    if mSignature != nil {
      mSignature = nil
      mSignatureObserver?.clearSignatureCache ()
    }
  }

  //····················································································································
  //   signature
  //····················································································································

  private final var mSignature : UInt32?
  
  //····················································································································

  final func signature () -> UInt32 {
    if mSignature == nil {
      mSignature = computeSignature ()
    }
    return mSignature!
  }

  //····················································································································

  func computeSignature () -> UInt32 {
    return 0
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   updateManagedObjectToOneRelationshipDisplay
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func updateManagedObjectToOneRelationshipDisplay (inObject : EBManagedObject?, button : NSButton?) {
  var stringValue = "nil"
  if let unwrappedObject = inObject {
    stringValue = explorerIndexString (unwrappedObject.mExplorerObjectIndex) + unwrappedObject.className
  }
  button?.enabled = inObject != nil
  button?.title = stringValue
  button?.toolTip = stringValue
  button?.target = inObject
  button?.action = "showObjectWindowFromExplorerButton:"
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   updateManagedObjectToManyRelationshipDisplay
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

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
    let stringValue = explorerIndexString (object.mExplorerObjectIndex) + object.className
    popUpButton?.addItemWithTitle (stringValue)
    let item = popUpButton?.lastItem
    item?.target = object
    item?.action = "showObjectWindowFromExplorerButton:"
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
