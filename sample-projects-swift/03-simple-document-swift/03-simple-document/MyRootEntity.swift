import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol MyRootEntity_myColor {
  var myColor : PMStoredProperty_NSColor { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol MyRootEntity_myEnumeration {
  var myEnumeration : PMStoredProperty_MonEnumeration { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol MyRootEntity_myString {
  var myString : PMStoredProperty_String { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Array of MyRootEntity                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayOf_MyRootEntity : PMObject, PMTransientPropertyProtocol {
  var computeFunction : Optional<() -> [MyRootEntity]?>

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in return self?.mSet.count }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count = PMTransientProperty_Int ()

  func noteModelDidChange () {
    if (props_cache != nil) {
      props_cache = nil
      count.postEvents ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private var mSet = Set<MyRootEntity> ()

  var props_cache : Optional <Array<MyRootEntity> >

  var props : Array<MyRootEntity> {
    get {
      if props_cache == nil {
        if let unwrappedComputeFunction = computeFunction {
          props_cache = unwrappedComputeFunction ()
        }
        if props_cache == nil {
          props_cache = Array<MyRootEntity> ()
        }
        let newObjectSet = Set<MyRootEntity> (props_cache!)
        if mSet != newObjectSet {
        //--- Removed object set
          var removedObjectSet = mSet
          removedObjectSet.subtractInPlace (newObjectSet)
          for managedObject : MyRootEntity in removedObjectSet {
            for observer in mObserversOf_myColor {
              managedObject.myColor.removeObserver (observer, inTrigger:true)
            }
          }
          for managedObject : MyRootEntity in removedObjectSet {
            for observer in mObserversOf_myEnumeration {
              managedObject.myEnumeration.removeObserver (observer, inTrigger:true)
            }
          }
          for managedObject : MyRootEntity in removedObjectSet {
            for observer in mObserversOf_myString {
              managedObject.myString.removeObserver (observer, inTrigger:true)
            }
          }
        //--- Added object set
          var addedObjectSet = newObjectSet
          addedObjectSet.subtractInPlace (mSet)
          for managedObject : MyRootEntity in addedObjectSet {
            for observer in mObserversOf_myColor {
              managedObject.myColor.addObserver (observer, inTrigger:true)
            }
          }
           for managedObject : MyRootEntity in addedObjectSet {
            for observer in mObserversOf_myEnumeration {
              managedObject.myEnumeration.addObserver (observer, inTrigger:true)
            }
          }
           for managedObject : MyRootEntity in addedObjectSet {
            for observer in mObserversOf_myString {
              managedObject.myString.addObserver (observer, inTrigger:true)
            }
          }
        //--- Update object set
          mSet = newObjectSet
        }
      }
      return props_cache!
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_myColor = Set<PMEvent> ()

  func addObserverOf_myColor (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_myColor.insert (inObserver)
    for managedObject in props {
      managedObject.myColor.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_myColor (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_myColor.remove (inObserver)
    for managedObject in props {
      managedObject.myColor.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_myEnumeration = Set<PMEvent> ()

  func addObserverOf_myEnumeration (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_myEnumeration.insert (inObserver)
    for managedObject in props {
      managedObject.myEnumeration.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_myEnumeration (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_myEnumeration.remove (inObserver)
    for managedObject in props {
      managedObject.myEnumeration.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_myString = Set<PMEvent> ()

  func addObserverOf_myString (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_myString.insert (inObserver)
    for managedObject in props {
      managedObject.myString.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_myString (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_myString.remove (inObserver)
    for managedObject in props {
      managedObject.myString.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }

}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_myColor, MyRootEntity_myEnumeration, MyRootEntity_myString {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var myColor = PMStoredProperty_NSColor (NSColor.yellowColor ())
  var myColor_keyCodingValue : NSColor { get {return myColor.prop } }

  var myEnumeration = PMStoredProperty_MonEnumeration (MonEnumeration.deuxieme)
  var myEnumeration_keyCodingValue : MonEnumeration { get {return myEnumeration.prop } }

  var myString = PMStoredProperty_String ("Hello")
  var myString_keyCodingValue : String { get {return myString.prop } }

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
  //--- Install owner for relationships
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Remove transients observers
    myStringMaj.removeObserver (myStringConcat.event, inTrigger:false)
    myStringMin.removeObserver (myStringConcat.event, inTrigger:false)
    myString.removeObserver (myStringMaj.event, inTrigger:false)
    myString.removeObserver (myStringMin.event, inTrigger:false)
  //--- Uninstall compute functions for transients
    myStringConcat.computeFunction = nil
    myStringMaj.computeFunction = nil
    myStringMin.computeFunction = nil
  //--- Uninstall undoers for properties
    myColor.undoManager = nil
    myEnumeration.undoManager = nil
    myString.undoManager = nil
  //--- Reset relationships
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

