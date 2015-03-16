import Cocoa


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Array of MyRootEntity                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayOf_MyRootEntity : PMEvent {
  var computeFunction : Optional<() -> [MyRootEntity]?>

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in return self?.mSet.count }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count = PMTransientProperty_Int ()

  override func postEvent () {
    if (prop_cache != nil) {
      prop_cache = nil
      count.postEvent ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private var mSet = Set<MyRootEntity> ()

  var prop_cache : Optional <Array<MyRootEntity> >

  var prop : Array<MyRootEntity> {
    get {
      if prop_cache == nil {
        if let unwrappedComputeFunction = computeFunction {
          prop_cache = unwrappedComputeFunction ()
        }
        if prop_cache == nil {
          prop_cache = Array<MyRootEntity> ()
        }
        let newObjectSet = Set<MyRootEntity> (prop_cache!)
        if mSet != newObjectSet {
        //--- Removed object set
          var removedObjectSet = mSet
          removedObjectSet.subtractInPlace (newObjectSet)
        //--- Added object set
          var addedObjectSet = newObjectSet
          addedObjectSet.subtractInPlace (mSet)
       //--- Update object set
          mSet = newObjectSet
        }
      }
      return prop_cache!
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    To many relationship: mNames                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ToManyRelationship_MyRootEntity_mNames : PMAbstractProperty {
  weak var owner : MyRootEntity?

  var explorer : NSPopUpButton? {
    didSet {
      if let unwrappedExplorer = explorer, unwrappedOwner = owner {
        unwrappedOwner.updateManagedObjectToManyRelationshipDisplay (prop, popUpButton:unwrappedExplorer)
      }
    }
  }

 //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in return self?.prop.count }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func prepareForDeletion () {
    prop = Array<NameEntity> ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count = PMTransientProperty_Int ()

  //-------------------------------------------------------------------------------------------------------------------*

  var mSet = Set<NameEntity> ()
  var prop : Array<NameEntity> = Array<NameEntity> () {
    didSet {
      if oldValue != prop {
        mSet = Set (prop)
      //--- Register old value in undo manager
        owner?.mUndoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
      //--- Update explorer
        if explorer != nil {
          owner?.updateManagedObjectToManyRelationshipDisplay (prop, popUpButton:explorer!)
        }
      //--- Removed object set
        var removedObjectSet : Set<NameEntity> = Set (oldValue)
        removedObjectSet.subtractInPlace (prop)
        for managedObject : NameEntity in removedObjectSet {
          for observer in mObserversOf_aValue {
            managedObject.aValue.removeObserver (observer, postEvent:true)
          }
          for observer in mObserversOf_name {
            managedObject.name.removeObserver (observer, postEvent:true)
          }
          managedObject.mRoot.owner = nil ;
        }
      //--- Added object set
        var addedObjectSet : Set<NameEntity> = Set (prop)
        addedObjectSet.subtractInPlace (oldValue)
        for managedObject : NameEntity in addedObjectSet {
          for observer in mObserversOf_aValue {
            managedObject.aValue.addObserver (observer, postEvent:true)
          }
          for observer in mObserversOf_name {
            managedObject.name.addObserver (observer, postEvent:true)
          }
          managedObject.mRoot.prop = owner
        }
      //--- Notify observers object count did change
        postEvent ()
        if oldValue.count != prop.count {
          count.postEvent ()
        }
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func performUndo (oldValue : Array<NameEntity>) {
    prop = oldValue
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func remove (object : NameEntity) {
    if mSet.contains (object) {
      var array = prop
      let idx = find (array, object)
      array.removeAtIndex (idx!)
      prop = array
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func add (object : NameEntity) {
    if !mSet.contains (object) {
      var array = prop
      array.append (object)
      prop = array
    }
  }
  
 

  var mObserversOf_aValue = Set<PMEvent> ()

  func addObserverOf_aValue (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_aValue.insert (inObserver)
    for managedObject in prop {
      managedObject.aValue.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_aValue (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_aValue.remove (inObserver)
    for managedObject in prop {
      managedObject.aValue.removeObserver (inObserver, postEvent:inTrigger)
    }
  }


  var mObserversOf_mRoot = Set<PMEvent> ()

  func addObserverOf_mRoot (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_mRoot.insert (inObserver)
    for managedObject in prop {
      managedObject.mRoot.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_mRoot (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_mRoot.remove (inObserver)
    for managedObject in prop {
      managedObject.mRoot.removeObserver (inObserver, postEvent:inTrigger)
    }
  }


  var mObserversOf_name = Set<PMEvent> ()

  func addObserverOf_name (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_name.insert (inObserver)
    for managedObject in prop {
      managedObject.name.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_name (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_name.remove (inObserver)
    for managedObject in prop {
      managedObject.name.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  var mNames = ToManyRelationship_MyRootEntity_mNames ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
  //--- Install owner for relationships
    mNames.owner = self
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Remove transients observers
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
  //--- Reset relationships
    mNames.prepareForDeletion ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    mNames.explorer = createEntryForToManyRelationshipNamed ("mNames", ioRect: &ioRect, view: view)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    mNames.explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    storeEntityArrayInDictionary (mNames.prop, inRelationshipName:"mNames", ioDictionary:ioDictionary) ;
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    mNames.prop = readEntityArrayFromDictionary (
        "mNames",
        inDictionary:inDictionary,
        managedObjectArray:managedObjectArray
      ) as! Array<NameEntity>
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
    for managedObject : PMManagedObject in mNames.prop {
      objects.addObject (managedObject)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

