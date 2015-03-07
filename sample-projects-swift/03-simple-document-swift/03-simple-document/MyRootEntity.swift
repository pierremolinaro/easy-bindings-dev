import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myColor {
  var myColor : PMEntityProperty <NSColor> { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myEnumeration {
  var myEnumeration : PMEntityProperty <MonEnumeration> { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myString {
  var myString : PMEntityProperty <String> { get }
}


//---------------------------------------------------------------------------------------------------------------------*
//    Entity: MyRootEntity                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_myColor, MyRootEntity_myEnumeration, MyRootEntity_myString {
  override func userClassName () -> String { return "MyRootEntity" }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var myColor = PMEntityProperty <NSColor> (NSColor.yellowColor ())
  var myColor_keyCodingValue : NSColor { get { return myColor.value } }
  func undoFor_myColor (oldValue : NSColor) {
    myColor.setValue (oldValue)
  }

  var myEnumeration = PMEntityProperty <MonEnumeration> (MonEnumeration.deuxieme)
  var myEnumeration_keyCodingValue : MonEnumeration { get { return myEnumeration.value } }
  func undoFor_myEnumeration (oldValue : NSNumber) {
    myEnumeration.setValue (MonEnumeration (rawValue:oldValue.integerValue)!)
  }

  var myString = PMEntityProperty <String> ("Hello")
  var myString_keyCodingValue : String { get { return myString.value } }
  func undoFor_myString (oldValue : String) {
    myString.setValue (oldValue)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var myStringConcat = PMTransientProperty <String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringConcat, defaultValue:"")
  var myStringMaj = PMTransientProperty <String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMaj, defaultValue:"")
  var myStringMin = PMTransientProperty <String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMin, defaultValue:"")

  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
    myStringConcat.computeFunction = {return compute_MyRootEntity_myStringConcat (self.myStringMaj.value, self.myStringMin.value)}
    myStringMaj.computeFunction = {return compute_MyRootEntity_myStringMaj (self.myString.value)}
    myStringMin.computeFunction = {return compute_MyRootEntity_myStringMin (self.myString.value)}
  //--- Install property observers for transients
    myStringMaj.addObserver (myStringConcat.event, inTrigger:true)
    myStringMin.addObserver (myStringConcat.event, inTrigger:true)
    myString.addObserver (myStringMaj.event, inTrigger:true)
    myString.addObserver (myStringMin.event, inTrigger:true)
  //--- Install undoers for properties
    myColor.undoRegisterFonction = {(oldValue : NSObject) in
      self.mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myColor:", object:oldValue)
    }
    myEnumeration.undoRegisterFonction = {(oldValue : NSObject) in
      self.mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myEnumeration:", object:oldValue)
    }
    myString.undoRegisterFonction = {(oldValue : NSObject) in
      self.mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myString:", object:oldValue)
    }
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
    myColor.undoRegisterFonction = nil
    myEnumeration.undoRegisterFonction = nil
    myString.undoRegisterFonction = nil
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
    if let explorer = myColor.explorer {
      explorer.stringValue = myColor.value.descriptionForExplorer ()
    }
    myEnumeration.explorer = createEntryForAttributeNamed ("myEnumeration", ioRect:&ioRect, view:view)
    if let explorer = myEnumeration.explorer {
      explorer.stringValue = myEnumeration.value.descriptionForExplorer ()
    }
    myString.explorer = createEntryForAttributeNamed ("myString", ioRect:&ioRect, view:view)
    if let explorer = myString.explorer {
      explorer.stringValue = myString.value.descriptionForExplorer ()
    }
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
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (myColor.value), forKey: "myColor")
    ioDictionary.setValue (NSNumber (integer:myEnumeration.value.rawValue), forKey: "myEnumeration")
    ioDictionary.setValue (myString.value, forKey: "myString")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    myColor.setValue (inDictionary.readNSColor ("myColor"))
    myEnumeration.setValue (inDictionary.readMonEnumeration ("myEnumeration"))
    myString.setValue (inDictionary.readString ("myString"))
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

