import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ReadOnlyArrayOf_MyRootEntity                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ReadOnlyArrayOf_MyRootEntity : PMAbstractProperty {

  var prop : Array<MyRootEntity> { get { return Array<MyRootEntity> () } }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mObserversOf_myString = Set<PMEvent> ()

  func addObserverOf_myString (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myString.insert (inObserver)
    for managedObject in prop {
      managedObject.myString.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_myString (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myString.remove (inObserver)
    for managedObject in prop {
      managedObject.myString.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mObserversOf_myEnumeration = Set<PMEvent> ()

  func addObserverOf_myEnumeration (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myEnumeration.insert (inObserver)
    for managedObject in prop {
      managedObject.myEnumeration.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_myEnumeration (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myEnumeration.remove (inObserver)
    for managedObject in prop {
      managedObject.myEnumeration.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mObserversOf_myColor = Set<PMEvent> ()

  func addObserverOf_myColor (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myColor.insert (inObserver)
    for managedObject in prop {
      managedObject.myColor.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_myColor (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myColor.remove (inObserver)
    for managedObject in prop {
      managedObject.myColor.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TransientArrayOf_MyRootEntity                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class TransientArrayOf_MyRootEntity : ReadOnlyArrayOf_MyRootEntity {

  var computeFunction : Optional<() -> Array<MyRootEntity>?>
  
  var count = PMTransientProperty_Int ()

  private var prop_cache : Array<MyRootEntity>?

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in self?.prop.count }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override var prop : Array<MyRootEntity> {
    get {
      if let unwrappedComputeFunction = computeFunction where prop_cache == nil {
        prop_cache = unwrappedComputeFunction ()
      }
      if prop_cache == nil {
        prop_cache = Array<MyRootEntity> ()
      }
      return prop_cache!
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func postEvent () {
    if prop_cache != nil {
      prop_cache = nil
      count.postEvent ()
      super.postEvent ()
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

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

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var myString = PMStoredProperty_String ("Hello")
  var myString_keyCodingValue : String { get {return myString.prop } }

  var myEnumeration = PMStoredProperty_MonEnumeration (MonEnumeration.deuxieme)
  var myEnumeration_keyCodingValue : MonEnumeration { get {return myEnumeration.prop } }

  var myColor = PMStoredProperty_NSColor (NSColor.yellowColor ())
  var myColor_keyCodingValue : NSColor { get {return myColor.prop } }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var myStringMaj = PMTransientProperty_String ()
  var myStringMin = PMTransientProperty_String ()
  var myStringConcat = PMTransientProperty_String ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Relationships                                                                                                  *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    init                                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

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

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  prepareForDeletion                                                                                               *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

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
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    populateExplorerWindowWithRect                                                                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    myString.explorer = createEntryForAttributeNamed ("myString", ioRect:&ioRect, view:view)
    myEnumeration.explorer = createEntryForAttributeNamed ("myEnumeration", ioRect:&ioRect, view:view)
    myColor.explorer = createEntryForAttributeNamed ("myColor", ioRect:&ioRect, view:view)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    clearObjectExplorer                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func clearObjectExplorer () {
    myString.explorer = nil
    myEnumeration.explorer = nil
    myColor.explorer = nil
    super.clearObjectExplorer ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    saveIntoDictionary                                                                                             *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (myString.prop, forKey: "myString")
    ioDictionary.setValue (NSNumber (integer:myEnumeration.prop.rawValue), forKey: "myEnumeration")
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (myColor.prop), forKey: "myColor")
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    setUpWithDictionary                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    myString.setProp (inDictionary.readString ("myString"))
    myEnumeration.setProp (inDictionary.readMonEnumeration ("myEnumeration"))
    myColor.setProp (inDictionary.readNSColor ("myColor"))
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //   accessibleObjects                                                                                               *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

