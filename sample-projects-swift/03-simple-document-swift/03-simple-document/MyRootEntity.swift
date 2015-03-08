import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myColor {
  var myColor : PMStoredProperty_NSColor { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myEnumeration {
  var myEnumeration : PMStoredProperty_MonEnumeration { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myString {
  var myString : PMStoredProperty_String { get }
}


//---------------------------------------------------------------------------------------------------------------------*
//    Entity: MyRootEntity                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_myColor, MyRootEntity_myEnumeration, MyRootEntity_myString {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var myColor = PMStoredProperty_NSColor (NSColor.yellowColor ())
  var myEnumeration = PMStoredProperty_MonEnumeration (MonEnumeration.deuxieme)
  var myString = PMStoredProperty_String ("Hello")

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var myStringConcat = PMTransientProperty_String ()
  var myStringMaj = PMTransientProperty_String ()
  var myStringMin = PMTransientProperty_String ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
    myStringConcat.computeFunction = {return compute_MyRootEntity_myStringConcat (self.myStringMaj.prop, self.myStringMin.prop)}
    myStringMaj.computeFunction = {return compute_MyRootEntity_myStringMaj (self.myString.prop)}
    myStringMin.computeFunction = {return compute_MyRootEntity_myStringMin (self.myString.prop)}
  //--- Install property observers for transients
    myStringMaj.addObserver (myStringConcat.event, inTrigger:true)
    myStringMin.addObserver (myStringConcat.event, inTrigger:true)
    myString.addObserver (myStringMaj.event, inTrigger:true)
    myString.addObserver (myStringMin.event, inTrigger:true)
  //--- Install undoers for properties
    myColor.undoManager = undoManager
    myEnumeration.undoManager = undoManager
    myString.undoManager = undoManager
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Uninstall compute functions for transients
    myStringConcat.computeFunction = nil
    myStringMaj.computeFunction = nil
    myStringMin.computeFunction = nil
  //--- Uninstall undoers for properties
    myColor.undoManager = nil
    myEnumeration.undoManager = nil
    myString.undoManager = nil
  }
  

  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
  //--- Unregister trigger objects
    myStringMaj.removeObserver (myStringConcat.event, inTrigger:false)
    myStringMin.removeObserver (myStringConcat.event, inTrigger:false)
    myString.removeObserver (myStringMaj.event, inTrigger:false)
    myString.removeObserver (myStringMin.event, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    myColor.explorer = createEntryForAttributeNamed ("myColor", ioRect:&ioRect, view:view)
    myEnumeration.explorer = createEntryForAttributeNamed ("myEnumeration", ioRect:&ioRect, view:view)
    myString.explorer = createEntryForAttributeNamed ("myString", ioRect:&ioRect, view:view)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    myColor.explorer = nil
    myEnumeration.explorer = nil
    myString.explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (myColor.prop), forKey: "myColor")
    ioDictionary.setValue (NSNumber (integer:myEnumeration.prop.rawValue), forKey: "myEnumeration")
    ioDictionary.setValue (myString.prop, forKey: "myString")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    myColor.setProp (inDictionary.readNSColor ("myColor"))
    myEnumeration.setProp (inDictionary.readMonEnumeration ("myEnumeration"))
    myString.setProp (inDictionary.readString ("myString"))
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

