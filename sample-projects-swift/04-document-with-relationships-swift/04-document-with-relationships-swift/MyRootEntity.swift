import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject {
  override func userClassName () -> String { return "MyRootEntity" }


  //-------------------------------------------------------------------------------------------------------------------*
  //    To many relationship: mNames                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mNames_aValue_observers : [Int : PMTransientEventProtocol] = [:]

  func addObserverOf_mNames_aValue (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mNames_aValue_observers [inObserver.uniqueIndex] = inObserver
    for object : AnyObject in mNames {
      let managedObject = object as! NameEntity
      managedObject.addObserverOf_aValue (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_mNames_aValue (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mNames_aValue_observers [inObserver.uniqueIndex] = nil
    for object : AnyObject in mNames {
      let managedObject = object as! NameEntity
      managedObject.removeObserverOf_aValue (inObserver, inTrigger:inTrigger)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mNames_name_observers : [Int : PMTransientEventProtocol] = [:]

  func addObserverOf_mNames_name (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mNames_name_observers [inObserver.uniqueIndex] = inObserver
    for object : AnyObject in mNames {
      let managedObject = object as! NameEntity
      managedObject.addObserverOf_name (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_mNames_name (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mNames_name_observers [inObserver.uniqueIndex] = nil
    for object : AnyObject in mNames {
      let managedObject = object as! NameEntity
      managedObject.removeObserverOf_name (inObserver, inTrigger:inTrigger)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mNames_observers : [Int : PMTransientEventProtocol] = [:]
  private var mNames_explorer : NSPopUpButton?
  var mNames_set = Set<NameEntity> ()
  var mNames : Array<NameEntity> = Array () {
    didSet {
      if oldValue != mNames {
        mNames_set = Set (mNames)
      //--- Register old value in undo manager
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_mNames:", object:oldValue)
      //--- Update explorer
        if mNames_explorer != nil {
          updateManagedObjectToManyRelationshipDisplay (mNames, popUpButton:mNames_explorer)
        }
      //--- Removed object set
        var removedObjectSet : Set<NameEntity> = Set (oldValue)
        removedObjectSet.subtractInPlace (mNames)
        for managedObject : NameEntity in removedObjectSet {
          for (key, observer) in mNames_aValue_observers {
            managedObject.removeObserverOf_aValue (observer, inTrigger:true)
          }
          for (key, observer) in mNames_name_observers {
            managedObject.removeObserverOf_name (observer, inTrigger:true)
          }
          managedObject.mRoot = nil ;
        }
      //--- Added object set
        var addedObjectSet : Set<NameEntity> = Set (mNames)
        addedObjectSet.subtractInPlace (oldValue)
        for managedObject : NameEntity in addedObjectSet {
          for (key, observer) in mNames_aValue_observers {
            managedObject.addObserverOf_aValue (observer, inTrigger:true)
          }
          for (key, observer) in mNames_name_observers {
            managedObject.addObserverOf_name (observer, inTrigger:true)
          }
          managedObject.mRoot = self
        }
      //--- Notify observers object count did change
        for (key, observer) in mNames_observers {
          postTransientEvent (observer)
        }
      }
    }
  }

  func undoFor_mNames (object:NSArray) {
    mNames = object as! Array<NameEntity>
  }

  func addObserverOf_mNames (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mNames_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func removeObserverOf_mNames (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mNames_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
  
  var mNames_count : Int { get { return mNames.count } }

  func addObserverOf_mNames_count (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    addObserverOf_mNames (inObserver, inTrigger:inTrigger)
  }

  func removeObserverOf_mNames_count (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    removeObserverOf_mNames (inObserver, inTrigger:inTrigger)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
    mNames = Array<NameEntity> ()
  }
  

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    mNames_explorer = createEntryForToManyRelationshipNamed ("mNames", ioRect: &ioRect, view: view)
    updateManagedObjectToManyRelationshipDisplay (mNames, popUpButton:mNames_explorer!)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    mNames_explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    storeEntityArrayInDictionary (mNames, inRelationshipName:"mNames", ioDictionary:ioDictionary) ;
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    mNames = readEntityArrayFromDictionary (
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
    for object : AnyObject in mNames {
      let managedObject = object as! PMManagedObject
      objects.addObject (managedObject)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

