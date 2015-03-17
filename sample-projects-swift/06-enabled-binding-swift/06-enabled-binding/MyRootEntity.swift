import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity_docBool) protocol MyRootEntity_docBool {
  var docBool : PMStoredProperty_Bool { get }
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

