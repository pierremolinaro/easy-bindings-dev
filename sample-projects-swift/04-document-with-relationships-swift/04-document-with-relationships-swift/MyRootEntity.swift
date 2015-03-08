import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//    To many relationship: mNames                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

struct ToManyRelationship_MyRootEntity_mNames {
 
  var explorer : NSPopUpButton?
  var owner : MyRootEntity?
  var mSet = Set<NameEntity> ()
  var values : Array<NameEntity> = Array () {
    didSet {
      if oldValue != values {
        mSet = Set (values)
      //--- Register old value in undo manager
        owner?.mUndoManager?.registerUndoWithTarget (owner!, selector:"undoFor_mNames:", object:oldValue)
      //--- Update explorer
        if explorer != nil {
          owner?.updateManagedObjectToManyRelationshipDisplay (values, popUpButton:explorer!)
        }
      //--- Removed object set
        var removedObjectSet : Set<NameEntity> = Set (oldValue)
        removedObjectSet.subtractInPlace (values)
        for managedObject : NameEntity in removedObjectSet {
          for (key, observer) in mObserversOf_aValue {
            managedObject.aValue.removeObserver (observer, inTrigger:true)
          }
          for (key, observer) in mObserversOf_name {
            managedObject.name.removeObserver (observer, inTrigger:true)
          }
          managedObject.mRoot.owner = nil ;
        }
      //--- Added object set
        var addedObjectSet : Set<NameEntity> = Set (values)
        addedObjectSet.subtractInPlace (oldValue)
        for managedObject : NameEntity in addedObjectSet {
          for (key, observer) in mObserversOf_aValue {
            managedObject.aValue.addObserver (observer, inTrigger:true)
          }
          for (key, observer) in mObserversOf_name {
            managedObject.name.addObserver (observer, inTrigger:true)
          }
          managedObject.mRoot.value = owner
        }
      //--- Notify observers object count did change
        for (key, observer) in mObservers {
          postTransientEvent (observer)
        }
      }
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  private var mObserversOf_aValue : [Int : PMTransientEvent] = [:]

  mutating func addObserverOf_aValue (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObserversOf_aValue [inObserver.uniqueIndex] = inObserver
    for managedObject in values {
      managedObject.aValue.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  mutating func removeObserverOf_aValue (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObserversOf_aValue [inObserver.uniqueIndex] = nil
    for managedObject in values {
      managedObject.aValue.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  private var mObserversOf_name : [Int : PMTransientEvent] = [:]

  mutating func addObserverOf_name (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObserversOf_name [inObserver.uniqueIndex] = inObserver
    for managedObject in values {
      managedObject.name.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  mutating func removeObserverOf_name (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObserversOf_name [inObserver.uniqueIndex] = nil
    for managedObject in values {
      managedObject.name.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mObservers : [Int : PMTransientEvent] = [:]

  mutating func addObserver (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  mutating func removeObserver (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
  
  var count : Int { get { return values.count } }
}

//---------------------------------------------------------------------------------------------------------------------*
//    Entity: MyRootEntity                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject {
  override func userClassName () -> String { return "MyRootEntity" }

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
  func undoFor_mNames (object:NSArray) {
    mNames.values = object as! Array<NameEntity>
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
    mNames.values = Array<NameEntity> ()
  }
  

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    mNames.explorer = createEntryForToManyRelationshipNamed ("mNames", ioRect: &ioRect, view: view)
    updateManagedObjectToManyRelationshipDisplay (mNames.values, popUpButton:mNames.explorer!)
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
    storeEntityArrayInDictionary (mNames.values, inRelationshipName:"mNames", ioDictionary:ioDictionary) ;
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    mNames.values = readEntityArrayFromDictionary (
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
    for managedObject : PMManagedObject in mNames.values {
      objects.addObject (managedObject)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

