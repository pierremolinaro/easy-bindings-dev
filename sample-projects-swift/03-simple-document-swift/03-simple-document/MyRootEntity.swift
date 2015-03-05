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

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_myColor, MyRootEntity_myEnumeration, MyRootEntity_myString {
  override func userClassName () -> String { return "MyRootEntity" }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var myColor = PMEntityProperty <NSColor> (NSColor.yellowColor ())
  var myEnumeration = PMEntityProperty <MonEnumeration> (MonEnumeration.deuxieme)
  var myString = PMEntityProperty <String> ("Hello")


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var myStringConcat = PMTransientProperty <String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringConcat)
  var myStringMaj = PMTransientProperty <String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMaj)
  var myStringMin = PMTransientProperty <String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMin)

  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myColor                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var myColor_explorer : NSTextField? = nil
  private var myColor_observers : [Int : PMTransientEventProtocol] = [:]
  var myColor : NSColor = NSColor.yellowColor () {
    didSet {
      if myColor != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myColor:", object:oldValue)
        myColor_explorer?.stringValue = myColor.value.description
        for (key, observer) in myColor_observers {
          postTransientEvent (observer)
        }
      }
    }
  }

  func undoFor_myColor (value : NSColor) {
    myColor = value
  }

  func addObserverOf_myColor (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myColor_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_myColor (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myColor_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  } */

 // func validate_myColor (proposedValue : NSColor) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myEnumeration                                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var myEnumeration_explorer : NSTextField? = nil
  private var myEnumeration_observers : [Int : PMTransientEventProtocol] = [:]
  var myEnumeration : MonEnumeration = MonEnumeration.deuxieme {
    didSet {
      if myEnumeration != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myEnumeration:", object:NSNumber (integer:oldValue.rawValue))
        myEnumeration_explorer?.stringValue = myEnumeration.value.string ()
        for (key, observer) in myEnumeration_observers {
          postTransientEvent (observer)
        }
      }
    }
  }

  func undoFor_myEnumeration (value : NSNumber) {
    myEnumeration = MonEnumeration (rawValue:value.integerValue)!
  }

  func addObserverOf_myEnumeration (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myEnumeration_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_myEnumeration (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myEnumeration_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  } */

 // func validate_myEnumeration (proposedValue : MonEnumeration) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myString                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var myString_explorer : NSTextField? = nil
  private var myString_observers : [Int : PMTransientEventProtocol] = [:]
  var myString : String = "Hello" {
    didSet {
      if myString != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myString:", object:oldValue)
        myString_explorer?.stringValue = myString.value
        for (key, observer) in myString_observers {
          postTransientEvent (observer)
        }
      }
    }
  }

  func undoFor_myString (value : String) {
    myString = value
  }

  func addObserverOf_myString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_myString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  } */

 // func validate_myString (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
    myStringConcat.setComputeFunction ({return compute_MyRootEntity_myStringConcat (self.myStringMaj.value, self.myStringMin.value)})
    myStringMaj.setComputeFunction ({return compute_MyRootEntity_myStringMaj (self.myString.value)})
    myStringMin.setComputeFunction ({return compute_MyRootEntity_myStringMin (self.myString.value)})
  //--- Install property observers for transients
    myStringMaj.addObserver (myStringConcat.event, inTrigger:true)
    myStringMin.addObserver (myStringConcat.event, inTrigger:true)
    myString.addObserver (myStringMaj.event, inTrigger:true)
    myString.addObserver (myStringMin.event, inTrigger:true)
  //--- Install undoers for properties
    myColor.registerUndo = {(oldValue : NSColor) in mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myColor:", object:oldValue) }
 //   myEnumeration.registerUndo = {(oldValue : MonEnumeration) in mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myEnumeration:", object:oldValue) }
    myString.registerUndo = {(oldValue : String) in mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myString:", object:oldValue) }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  Undo methods for properties                                                                                      *
  //-------------------------------------------------------------------------------------------------------------------*

  func undoFor_myColor (value : NSColor) {
    myColor.value = value
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func undoFor_myEnumeration (value : NSNumber) {
    myEnumeration.value = MonEnumeration (rawValue:value.integerValue)!
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func undoFor_myString (value : String) {
    myString.value = value
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Uninstall compute functions for transients
    myStringConcat.setComputeFunction (nil)
    myStringMaj.setComputeFunction (nil)
    myStringMin.setComputeFunction (nil)
  //--- Uninstall undoers for properties
    myColor.registerUndo = nil
    myEnumeration.registerUndo = nil
    myString.registerUndo = nil
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
    myColor.value = inDictionary.readNSColor ("myColor")
    myEnumeration.value = inDictionary.readMonEnumeration ("myEnumeration")
    myString.value = inDictionary.readString ("myString")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: myStringConcat                                                                                      *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var myStringConcat_observers : [Int : PMTransientEventProtocol] = [:]
  private var myStringConcat_cache : String?
  var myStringConcat : String {
    get {
      if myStringConcat_cache == nil {
        myStringConcat_cache = compute_MyRootEntity_myStringConcat (myStringMaj, myStringMin)
      }
      return myStringConcat_cache!
    }
    set {
    }
  }

  func entity_2E_MyRootEntity_2E_myStringConcat_noteDidChange () {
    myStringConcat_cache = nil
  }

  func entity_2E_MyRootEntity_2E_myStringConcat_trigger () {
    for (key, observer) in myStringConcat_observers {
      postTransientEvent (observer)
    }
  }

   func addObserverOf_myStringConcat (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myStringConcat_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_myStringConcat (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myStringConcat_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  var event_entity_2E_MyRootEntity_2E_myStringConcat_cache : PMEvent_entity_2E_MyRootEntity_2E_myStringConcat? = nil
  var event_entity_2E_MyRootEntity_2E_myStringConcat : PMEvent_entity_2E_MyRootEntity_2E_myStringConcat {
    if nil == event_entity_2E_MyRootEntity_2E_myStringConcat_cache {
      event_entity_2E_MyRootEntity_2E_myStringConcat_cache = PMEvent_entity_2E_MyRootEntity_2E_myStringConcat (object:self)
    }
    return event_entity_2E_MyRootEntity_2E_myStringConcat_cache!
  } */
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: myStringMaj                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var myStringMaj_observers : [Int : PMTransientEventProtocol] = [:]
  private var myStringMaj_cache : String?
  var myStringMaj : String {
    get {
      if myStringMaj_cache == nil {
        myStringMaj_cache = compute_MyRootEntity_myStringMaj (myString)
      }
      return myStringMaj_cache!
    }
    set {
    }
  }

  func entity_2E_MyRootEntity_2E_myStringMaj_noteDidChange () {
    myStringMaj_cache = nil
  }

  func entity_2E_MyRootEntity_2E_myStringMaj_trigger () {
    for (key, observer) in myStringMaj_observers {
      postTransientEvent (observer)
    }
  }

   func addObserverOf_myStringMaj (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myStringMaj_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_myStringMaj (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myStringMaj_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  var event_entity_2E_MyRootEntity_2E_myStringMaj_cache : PMEvent_entity_2E_MyRootEntity_2E_myStringMaj? = nil
  var event_entity_2E_MyRootEntity_2E_myStringMaj : PMEvent_entity_2E_MyRootEntity_2E_myStringMaj {
    if nil == event_entity_2E_MyRootEntity_2E_myStringMaj_cache {
      event_entity_2E_MyRootEntity_2E_myStringMaj_cache = PMEvent_entity_2E_MyRootEntity_2E_myStringMaj (object:self)
    }
    return event_entity_2E_MyRootEntity_2E_myStringMaj_cache!
  } */
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: myStringMin                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var myStringMin_observers : [Int : PMTransientEventProtocol] = [:]
  private var myStringMin_cache : String?
  var myStringMin : String {
    get {
      if myStringMin_cache == nil {
        myStringMin_cache = compute_MyRootEntity_myStringMin (myString)
      }
      return myStringMin_cache!
    }
    set {
    }
  }

  func entity_2E_MyRootEntity_2E_myStringMin_noteDidChange () {
    myStringMin_cache = nil
  }

  func entity_2E_MyRootEntity_2E_myStringMin_trigger () {
    for (key, observer) in myStringMin_observers {
      postTransientEvent (observer)
    }
  }

   func addObserverOf_myStringMin (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myStringMin_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_myStringMin (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    myStringMin_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  var event_entity_2E_MyRootEntity_2E_myStringMin_cache : PMEvent_entity_2E_MyRootEntity_2E_myStringMin? = nil
  var event_entity_2E_MyRootEntity_2E_myStringMin : PMEvent_entity_2E_MyRootEntity_2E_myStringMin {
    if nil == event_entity_2E_MyRootEntity_2E_myStringMin_cache {
      event_entity_2E_MyRootEntity_2E_myStringMin_cache = PMEvent_entity_2E_MyRootEntity_2E_myStringMin (object:self)
    }
    return event_entity_2E_MyRootEntity_2E_myStringMin_cache!
  } */
 
  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

