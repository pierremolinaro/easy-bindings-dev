import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity_name) protocol NameEntity_name {
  var name : PMStoredProperty_String { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity_aValue) protocol NameEntity_aValue {
  var aValue : PMStoredProperty_Int { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Array of NameEntity                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayOf_NameEntity : PMObject, PMTransientPropertyProtocol {
  var computeFunction : Optional<() -> [NameEntity]?>

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in return self?.mSet.count }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count = PMTransientProperty_Int ()

  func noteModelDidChange () {
    if (prop_cache != nil) {
      prop_cache = nil
      count.postEvents ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private var mSet = Set<NameEntity> ()

  var prop_cache : Optional <Array<NameEntity> >

  var prop : Array<NameEntity> {
    get {
      if prop_cache == nil {
        if let unwrappedComputeFunction = computeFunction {
          prop_cache = unwrappedComputeFunction ()
        }
        if prop_cache == nil {
          prop_cache = Array<NameEntity> ()
        }
        let newObjectSet = Set<NameEntity> (prop_cache!)
        if mSet != newObjectSet {
        //--- Removed object set
          var removedObjectSet = mSet
          removedObjectSet.subtractInPlace (newObjectSet)
          for managedObject : NameEntity in removedObjectSet {
            for observer in mObserversOf_name {
              managedObject.name.removeObserver (observer, inTrigger:true)
            }
          }
          for managedObject : NameEntity in removedObjectSet {
            for observer in mObserversOf_aValue {
              managedObject.aValue.removeObserver (observer, inTrigger:true)
            }
          }
        //--- Added object set
          var addedObjectSet = newObjectSet
          addedObjectSet.subtractInPlace (mSet)
          for managedObject : NameEntity in addedObjectSet {
            for observer in mObserversOf_name {
              managedObject.name.addObserver (observer, inTrigger:true)
            }
          }
           for managedObject : NameEntity in addedObjectSet {
            for observer in mObserversOf_aValue {
              managedObject.aValue.addObserver (observer, inTrigger:true)
            }
          }
        //--- Update object set
          mSet = newObjectSet
        }
      }
      return prop_cache!
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_name = Set<PMEvent> ()

  func addObserverOf_name (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_name.insert (inObserver)
    for managedObject in prop {
      managedObject.name.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_name (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_name.remove (inObserver)
    for managedObject in prop {
      managedObject.name.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_aValue = Set<PMEvent> ()

  func addObserverOf_aValue (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_aValue.insert (inObserver)
    for managedObject in prop {
      managedObject.aValue.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_aValue (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_aValue.remove (inObserver)
    for managedObject in prop {
      managedObject.aValue.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    To one relationship: mRoot                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ToOneRelationship_NameEntity_mRoot : PMAbstractProperty {
  var explorer : NSButton?
  weak var owner : NameEntity? {
    didSet {
      if let unwrappedExplorer = explorer, unwrappedOwner = owner {
        unwrappedOwner.updateManagedObjectToOneRelationshipDisplay (prop, button : unwrappedExplorer)
      }
    }
  }
 
  var prop : MyRootEntity? = nil {
    didSet {
      if let unwrappedOwner = owner where oldValue !== prop {
      //--- Register old value in undo manager
        unwrappedOwner.mUndoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
      //--- Update explorer
        if let unwrappedExplorer = explorer {
          unwrappedOwner.updateManagedObjectToOneRelationshipDisplay (prop, button : unwrappedExplorer)
        }
      //--- Reset old opposite relation ship
        if let unwrappedOldValue = oldValue {
          if unwrappedOldValue.mNames.mSet.contains (unwrappedOwner) {
            var array = unwrappedOldValue.mNames.prop
            let idx = find (array, unwrappedOwner)
            array.removeAtIndex (idx!)
            unwrappedOldValue.mNames.prop = array
          }
        }
      //--- Set new opposite relation ship
        if let unwrappedValue = prop {
          if !unwrappedValue.mNames.mSet.contains (unwrappedOwner) {
            unwrappedValue.mNames.prop.append (unwrappedOwner)
          }
        }
      //--- Notify observers
        postEvents ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func performUndo (oldValue : MyRootEntity?) {
    prop = oldValue
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func prepareForDeletion () {
    prop = nil
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func remove (object : MyRootEntity) {
    if prop === object {
      prop = nil
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func add (object : MyRootEntity) {
    prop = object
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: NameEntity                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity) class NameEntity : PMManagedObject, NameEntity_name, NameEntity_aValue {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var name = PMStoredProperty_String ("Name")
  var name_keyCodingValue : String { get {return name.prop } }

  var aValue = PMStoredProperty_Int (100)
  var aValue_keyCodingValue : Int { get {return aValue.prop } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  var mRoot = ToOneRelationship_NameEntity_mRoot ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
    name.undoManager = undoManager
    aValue.undoManager = undoManager
  //--- Install owner for relationships
    mRoot.owner = self
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Remove transients observers
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
    name.undoManager = nil
    aValue.undoManager = nil
  //--- Reset relationships
    mRoot.prepareForDeletion ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    name.explorer = createEntryForAttributeNamed ("name", ioRect:&ioRect, view:view)
    aValue.explorer = createEntryForAttributeNamed ("aValue", ioRect:&ioRect, view:view)
    mRoot.explorer = createEntryForToOneRelationshipNamed ("mRoot", ioRect: &ioRect, view: view)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    name.explorer = nil
    aValue.explorer = nil
    mRoot.explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (name.prop, forKey: "name")
    ioDictionary.setValue (NSNumber (integer:aValue.prop), forKey: "aValue")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    name.setProp (inDictionary.readString ("name"))
    aValue.setProp (inDictionary.readInt ("aValue"))
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
    if let object = mRoot.prop {
      objects.addObject (object)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

