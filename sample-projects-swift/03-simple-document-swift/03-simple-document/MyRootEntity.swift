import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity_myString) protocol MyRootEntity_myString {
  var myString : PMStoredProperty_String { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity_myEnumeration) protocol MyRootEntity_myEnumeration {
  var myEnumeration : PMStoredProperty_MonEnumeration { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity_myColor) protocol MyRootEntity_myColor {
  var myColor : PMStoredProperty_NSColor { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_myString, MyRootEntity_myEnumeration, MyRootEntity_myColor {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var myString = PMStoredProperty_String ("Hello")
  var myString_keyCodingValue : String { get {return myString.prop } }

  var myEnumeration = PMStoredProperty_MonEnumeration (MonEnumeration.deuxieme)
  var myEnumeration_keyCodingValue : MonEnumeration { get {return myEnumeration.prop } }

  var myColor = PMStoredProperty_NSColor (NSColor.yellowColor ())
  var myColor_keyCodingValue : NSColor { get {return myColor.prop } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var myStringMaj = PMTransientProperty_String ()
  var myStringMin = PMTransientProperty_String ()
  var myStringConcat = PMTransientProperty_String ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
    myStringMaj.computeFunction = {return compute_MyRootEntity_myStringMaj (self.myString.prop)}
    myStringMin.computeFunction = {return compute_MyRootEntity_myStringMin (self.myString.prop)}
    myStringConcat.computeFunction = {return compute_MyRootEntity_myStringConcat (self.myStringMaj.prop, self.myStringMin.prop)}
  //--- Install property observers for transients
    myString.addObserver (myStringMaj, postEvent:true)
    myString.addObserver (myStringMin, postEvent:true)
    myStringMaj.addObserver (myStringConcat, postEvent:true)
    myStringMin.addObserver (myStringConcat, postEvent:true)
  //--- Install undoers for properties
    myString.undoManager = undoManager
    myEnumeration.undoManager = undoManager
    myColor.undoManager = undoManager
  //--- Install owner for relationships
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Remove transients observers
    myString.removeObserver (myStringMaj, postEvent:false)
    myString.removeObserver (myStringMin, postEvent:false)
    myStringMaj.removeObserver (myStringConcat, postEvent:false)
    myStringMin.removeObserver (myStringConcat, postEvent:false)
  //--- Uninstall compute functions for transients
    myStringMaj.computeFunction = nil
    myStringMin.computeFunction = nil
    myStringConcat.computeFunction = nil
  //--- Uninstall undoers for properties
    myString.undoManager = nil
    myEnumeration.undoManager = nil
    myColor.undoManager = nil
  //--- Reset relationships
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    myString.explorer = createEntryForAttributeNamed ("myString", ioRect:&ioRect, view:view)
    myEnumeration.explorer = createEntryForAttributeNamed ("myEnumeration", ioRect:&ioRect, view:view)
    myColor.explorer = createEntryForAttributeNamed ("myColor", ioRect:&ioRect, view:view)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    myString.explorer = nil
    myEnumeration.explorer = nil
    myColor.explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (myString.prop, forKey: "myString")
    ioDictionary.setValue (NSNumber (integer:myEnumeration.prop.rawValue), forKey: "myEnumeration")
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (myColor.prop), forKey: "myColor")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    myString.setProp (inDictionary.readString ("myString"))
    myEnumeration.setProp (inDictionary.readMonEnumeration ("myEnumeration"))
    myColor.setProp (inDictionary.readNSColor ("myColor"))
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

