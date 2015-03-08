import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//    To many relationship: mNames                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class ToManyRelationship_MyRootEntity_mNames : PMAbstractProperty {
  var owner : MyRootEntity?

  var explorer : NSPopUpButton? {
    didSet {
      if let unwrappedExplorer = explorer, unwrappedOwner = owner {
        unwrappedOwner.updateManagedObjectToManyRelationshipDisplay (props, popUpButton:unwrappedExplorer)
      }
    }
  }

  var mSet = Set<NameEntity> ()
  var props = Array<NameEntity> () {
    didSet {
      if oldValue != props {
        mSet = Set (props)
      //--- Register old value in undo manager
        owner?.mUndoManager?.registerUndoWithTarget (owner!, selector:"performUndo:", object:oldValue)
      //--- Update explorer
        if explorer != nil {
          owner?.updateManagedObjectToManyRelationshipDisplay (props, popUpButton:explorer!)
        }
      //--- Removed object set
        var removedObjectSet : Set<NameEntity> = Set (oldValue)
        removedObjectSet.subtractInPlace (props)
        for managedObject : NameEntity in removedObjectSet {
          for observer in mObserversOf_aValue {
            managedObject.aValue.removeObserver (observer, inTrigger:true)
          }
          for observer in mObserversOf_name {
            managedObject.name.removeObserver (observer, inTrigger:true)
          }
          managedObject.mRoot.owner = nil ;
        }
      //--- Added object set
        var addedObjectSet : Set<NameEntity> = Set (props)
        addedObjectSet.subtractInPlace (oldValue)
        for managedObject : NameEntity in addedObjectSet {
          for observer in mObserversOf_aValue {
            managedObject.aValue.addObserver (observer, inTrigger:true)
          }
          for observer in mObserversOf_name {
            managedObject.name.addObserver (observer, inTrigger:true)
          }
          managedObject.mRoot.prop = owner
        }
      //--- Notify observers object count did change
        postEvents ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func performUndo (oldValue : Array<NameEntity>) {
    props = oldValue
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count : Int { get { return props.count } }


  var mObserversOf_aValue = Set<PMEvent> ()

  func addObserverOf_aValue (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_aValue.insert (inObserver)
    for managedObject in props {
      managedObject.aValue.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_aValue (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_aValue.remove (inObserver)
    for managedObject in props {
      managedObject.aValue.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }


  var mObserversOf_name = Set<PMEvent> ()

  func addObserverOf_name (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_name.insert (inObserver)
    for managedObject in props {
      managedObject.name.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_name (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_name.remove (inObserver)
    for managedObject in props {
      managedObject.name.removeObserver (inObserver, inTrigger:inTrigger)
    }
  }

  
}

//---------------------------------------------------------------------------------------------------------------------*
//    Entity: MyRootEntity                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

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
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
    mNames.props = Array<NameEntity> ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
  //--- Unregister trigger objects
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
    storeEntityArrayInDictionary (mNames.props, inRelationshipName:"mNames", ioDictionary:ioDictionary) ;
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    mNames.props = readEntityArrayFromDictionary (
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
    for managedObject : PMManagedObject in mNames.props {
      objects.addObject (managedObject)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

