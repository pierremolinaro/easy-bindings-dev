import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myColor {
  var myColor : PMProperty<NSColor> { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myEnumeration {
  var myEnumeration : PMProperty<MonEnumeration> { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_myString {
  var myString : PMProperty<String> { get }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_myColor, MyRootEntity_myEnumeration, MyRootEntity_myString {
  override func userClassName () -> String { return "MyRootEntity" }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transients                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var myStringConcat = PMTransientProperty<String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringConcat)
  var myStringMaj = PMTransientProperty<String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMaj)
  var myStringMin = PMTransientProperty<String> (PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMin)

  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myColor                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  var myColor = PMProperty<NSColor> (NSColor.yellowColor ())
  private var myColor_explorer : NSTextField? = nil

  func myColor_didChange (oldValue : NSColor) {
    mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myColor:", object:oldValue)
    myColor_explorer?.stringValue = myColor.value.description
  }

  func undoFor_myColor (value : NSColor) {
    myColor.value = value
  }

 /*  private var myColor_explorer : NSTextField? = nil
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
  }

  func validate_myColor (proposedValue : NSColor) -> PMValidationResult { return PMValidationResult.ok }

 */ 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myEnumeration                                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

  var myEnumeration = PMProperty<MonEnumeration> (MonEnumeration.deuxieme)
  private var myEnumeration_explorer : NSTextField? = nil

  func myEnumeration_didChange (oldValue : MonEnumeration) {
    mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myEnumeration:", object:NSNumber (integer:oldValue.rawValue))
    myEnumeration_explorer?.stringValue = myEnumeration.value.string ()
  }

  func undoFor_myEnumeration (value : NSNumber) {
    myEnumeration.value = MonEnumeration (rawValue:value.integerValue)!
  }

 /*  private var myEnumeration_explorer : NSTextField? = nil
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
  }

  func validate_myEnumeration (proposedValue : MonEnumeration) -> PMValidationResult { return PMValidationResult.ok }

 */ 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myString                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  var myString = PMProperty<String> ("Hello")
  private var myString_explorer : NSTextField? = nil

  func myString_didChange (oldValue : String) {
    mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_myString:", object:oldValue)
    myString_explorer?.stringValue = myString.value
  }

  func undoFor_myString (value : String) {
    myString.value = value
  }

 /*  private var myString_explorer : NSTextField? = nil
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
  }

  func validate_myString (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }

 */ 
  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Transient compute functions
    myStringConcat.setComputeFunction ({return compute_MyRootEntity_myStringConcat (self.myStringMaj.value, self.myStringMin.value)})
    myStringMaj.setComputeFunction ({return compute_MyRootEntity_myStringMaj (self.myString.value)})
    myStringMin.setComputeFunction ({return compute_MyRootEntity_myStringMin (self.myString.value)})
  //--- Register trigger objects
    myStringMaj.addObserver (myStringConcat.event, inTrigger:true)
    myStringMin.addObserver (myStringConcat.event, inTrigger:true)
    myString.addObserver (myStringMaj.event, inTrigger:true)
    myString.addObserver (myStringMin.event, inTrigger:true)
  //--- Register property 'didChangeFunction' functions
    myColor.didChangeFunction = self.myColor_didChange
    myEnumeration.didChangeFunction = self.myEnumeration_didChange
    myString.didChangeFunction = self.myString_didChange
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Reset property 'didChange' functions
    myColor.didChangeFunction = nil
    myEnumeration.didChangeFunction = nil
    myString.didChangeFunction = nil
 //--- Remove observers for transients
    myStringMaj.removeObserver (myStringConcat.event, inTrigger:false)
    myStringMin.removeObserver (myStringConcat.event, inTrigger:false)
    myString.removeObserver (myStringMaj.event, inTrigger:false)
    myString.removeObserver (myStringMin.event, inTrigger:false)
 //--- Reset transient computation functions
    myStringConcat.resetComputationFunction ()
    myStringMaj.resetComputationFunction ()
    myStringMin.resetComputationFunction ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
  //--- Unregister trigger objects
 //   myStringMaj.removeObserver (myStringConcat.event, inTrigger:false)
 //   myStringMin.removeObserver (myStringConcat.event, inTrigger:false)
 //   myString.removeObserver (myStringMaj.event, inTrigger:false)
 //   myString.removeObserver (myStringMin.event, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    myColor_explorer = createEntryForAttributeNamed ("myColor", ioRect:&ioRect, view:view)
    if let explorer = myColor_explorer {
      explorer.stringValue = myColor.value.description
    }
    myEnumeration_explorer = createEntryForAttributeNamed ("myEnumeration", ioRect:&ioRect, view:view)
    if let explorer = myEnumeration_explorer {
      explorer.stringValue = myEnumeration.value.string ()
    }
    myString_explorer = createEntryForAttributeNamed ("myString", ioRect:&ioRect, view:view)
    if let explorer = myString_explorer {
      explorer.stringValue = myString.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    myColor_explorer = nil
    myEnumeration_explorer = nil
    myString_explorer = nil
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
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

