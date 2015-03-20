import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ReadOnlyArrayOf_MyRootEntity                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ReadOnlyArrayOf_MyRootEntity : PMAbstractProperty {

  var prop : (Array<MyRootEntity>, PMSelectionKind) { get { return (Array<MyRootEntity> (), .noSelection) } }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mObserversOf_myString = Set<PMEvent> ()

  func addObserverOf_myString (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myString.insert (inObserver)
    for managedObject in prop.0 {
      managedObject.myString.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_myString (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myString.remove (inObserver)
    for managedObject in prop.0 {
      managedObject.myString.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mObserversOf_myEnumeration = Set<PMEvent> ()

  func addObserverOf_myEnumeration (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myEnumeration.insert (inObserver)
    for managedObject in prop.0 {
      managedObject.myEnumeration.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_myEnumeration (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myEnumeration.remove (inObserver)
    for managedObject in prop.0 {
      managedObject.myEnumeration.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mObserversOf_myColor = Set<PMEvent> ()

  func addObserverOf_myColor (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myColor.insert (inObserver)
    for managedObject in prop.0 {
      managedObject.myColor.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_myColor (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_myColor.remove (inObserver)
    for managedObject in prop.0 {
      managedObject.myColor.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TransientArrayOf_MyRootEntity                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class TransientArrayOf_MyRootEntity : ReadOnlyArrayOf_MyRootEntity {

  var computeFunction : Optional<() -> (Array<MyRootEntity>, PMSelectionKind) >
  
  var count = PMTransientProperty_Int ()

  private var prop_cache : (Array<MyRootEntity>, PMSelectionKind)? 

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in
      if let unwSelf = self {
        return (unwSelf.prop.0.count, unwSelf.prop.1)
      }else{
        return (0, .noSelection)
      }
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override var prop : (Array<MyRootEntity>, PMSelectionKind) {
    get {
      if let unwrappedComputeFunction = computeFunction where prop_cache == nil {
        prop_cache = unwrappedComputeFunction ()
      }
      if prop_cache == nil {
        prop_cache = (Array<MyRootEntity> (), .noSelection)
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
  var myString_keyCodingValue : String { get {return myString.prop.0 } }

  var myEnumeration = PMStoredProperty_MonEnumeration (MonEnumeration.deuxieme)
  var myEnumeration_keyCodingValue : MonEnumeration { get {return myEnumeration.prop.0 } }

  var myColor = PMStoredProperty_NSColor (NSColor.yellowColor ())
  var myColor_keyCodingValue : NSColor { get {return myColor.prop.0 } }

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
    myStringMaj.computeFunction = {
      let selectionKind = self.myString.prop.1
      if selectionKind == .singleSelection {
        return (compute_MyRootEntity_myStringMaj (self.myString.prop.0), .singleSelection)
      }else{
        return ("", selectionKind)
      }
    }
    myStringMin.computeFunction = {
      let selectionKind = self.myString.prop.1
      if selectionKind == .singleSelection {
        return (compute_MyRootEntity_myStringMin (self.myString.prop.0), .singleSelection)
      }else{
        return ("", selectionKind)
      }
    }
    myStringConcat.computeFunction = {
      let selectionKind = self.myStringMaj.prop.1 & self.myStringMin.prop.1
      if selectionKind == .singleSelection {
        return (compute_MyRootEntity_myStringConcat (self.myStringMaj.prop.0, self.myStringMin.prop.0), .singleSelection)
      }else{
        return ("", selectionKind)
      }
    }
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
    ioDictionary.setValue (myString.prop.0, forKey: "myString")
    ioDictionary.setValue (NSNumber (integer:myEnumeration.prop.rawValue), forKey: "myEnumeration")
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (myColor.prop.0), forKey: "myColor")
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

