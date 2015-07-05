import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    ReadOnlyArrayOf_NameEntity
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(ReadOnlyArrayOf_NameEntity)
class ReadOnlyArrayOf_NameEntity : EBObject {

  var prop : EBProperty <Array<NameEntity> > { get { return .noSelection } }

  //····················································································································

  var mObserversOf_name = Set<EBEvent> ()

  final func addObserverOf_name (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_name.insert (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.name.addObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  final func removeObserverOf_name (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_name.remove (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.name.removeObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  //····················································································································

  var mObserversOf_aValue = Set<EBEvent> ()

  final func addObserverOf_aValue (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_aValue.insert (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.aValue.addObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  final func removeObserverOf_aValue (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_aValue.remove (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.aValue.removeObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    TransientArrayOf_NameEntity
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(TransientArrayOf_NameEntity)
class TransientArrayOf_NameEntity : ReadOnlyArrayOf_NameEntity {

  var computeFunction : Optional<() -> EBProperty <Array<NameEntity> > >
  
  var count = EBTransientProperty_Int ()

  private var prop_cache : EBProperty <Array<NameEntity> >? 

  //····················································································································

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v) :
          return .singleSelection (v.count)
        }
      }else{
        return .noSelection
      }
    }
  }

  //····················································································································

  private var mSet = Set <NameEntity> ()

  override var prop : EBProperty <Array<NameEntity> > {
    get {
      if let unwrappedComputeFunction = computeFunction where prop_cache == nil {
        prop_cache = unwrappedComputeFunction ()
        let newSet : Set <NameEntity>
        switch prop_cache! {
        case .multipleSelection, .noSelection :
          newSet = Set <NameEntity> ()
        case .singleSelection (let array) :
          newSet = Set (array)
        }
     //--- Removed object set
        for managedObject : NameEntity in mSet.subtract (newSet) {
          for observer in mObserversOf_name {
            managedObject.name.removeObserver (observer, postEvent:true)
          }
          for observer in mObserversOf_aValue {
            managedObject.aValue.removeObserver (observer, postEvent:true)
          }
        }
      //--- Added object set
        for managedObject : NameEntity in newSet.subtract (mSet) {
          for observer in mObserversOf_name {
            managedObject.name.addObserver (observer, postEvent:true)
          }
          for observer in mObserversOf_aValue {
            managedObject.aValue.addObserver (observer, postEvent:true)
          }
        }
        mSet = newSet
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  //····················································································································

  func postEvent () {
    if let unwPropCache = prop_cache {
      prop_cache = nil
      switch unwPropCache {
      case .noSelection, .multipleSelection :
        break
      case .singleSelection (let array) :
        for managedObject : NameEntity in array {
          managedObject.name.postEvent ()
          managedObject.aValue.postEvent ()
        }
      }
      count.postEvent ()
//      super.postEvent ()
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(NameEntity_name) protocol NameEntity_name {
  var name : EBStoredProperty_String { get }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(NameEntity_aValue) protocol NameEntity_aValue {
  var aValue : EBStoredProperty_Int { get }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    To one relationship: mRoot
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(ToOneRelationship_NameEntity_mRoot)
final class ToOneRelationship_NameEntity_mRoot : EBAbstractProperty {
  var mValueExplorer : NSButton? {
    didSet {
      if let unwrappedExplorer = mValueExplorer {
        switch prop {
        case .noSelection, .multipleSelection :
          break ;
        case .singleSelection (let v) :
          updateManagedObjectToOneRelationshipDisplay (v, button:unwrappedExplorer)
        }
      }
    }
  }

  weak var owner : NameEntity? {
    didSet {
      if let unwrappedExplorer = mValueExplorer {
        updateManagedObjectToOneRelationshipDisplay (propval, button:unwrappedExplorer)
      }
    }
  }
 
  weak private var mValue : MyRootEntity? {
    didSet {
      if let unwrappedOwner = owner where oldValue !== mValue {
      //--- Register old value in undo manager
        unwrappedOwner.undoManager()?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
      //--- Update explorer
        if let unwrappedExplorer = mValueExplorer {
          updateManagedObjectToOneRelationshipDisplay (mValue, button:unwrappedExplorer)
        }
      //--- Reset old opposite relation ship
        if let unwrappedOldValue = oldValue {
          unwrappedOldValue.mNames.remove (unwrappedOwner)
        }
      //--- Set new opposite relation ship
        if let unwrappedValue = mValue {
          unwrappedValue.mNames.add (unwrappedOwner)
        }
      //--- Notify observers
        postEvent ()
      }
    }
  }

  var propval : MyRootEntity? { get { return mValue } }

  var prop : EBProperty <MyRootEntity?> { get { return .singleSelection (mValue) } }

  func setProp (value : MyRootEntity?) { mValue = value }

  //····················································································································

  func performUndo (oldValue : MyRootEntity?) {
    mValue = oldValue
  }

  //····················································································································

  func remove (object : MyRootEntity) {
    if mValue === object {
      mValue = nil
    }
  }
  
  //····················································································································

  func add (object : MyRootEntity) {
    mValue = object
  }

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    Entity: NameEntity
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(NameEntity) class NameEntity : EBManagedObject, NameEntity_name, NameEntity_aValue {

  //····················································································································
  //    Properties
  //····················································································································

  var name = EBStoredProperty_String ("Name")
  var name_keyCodingValue : String {
    get {
      switch name.prop {
      case .noSelection, .multipleSelection :
        return ""
      case .singleSelection (let v) :
        return v
      }
    }
  }

  var aValue = EBStoredProperty_Int (100)
  var aValue_keyCodingValue : Int {
    get {
      switch aValue.prop {
      case .noSelection, .multipleSelection :
        return 0
      case .singleSelection (let v) :
        return v
      }
    }
  }

  //····················································································································
  //    Transient properties
  //····················································································································


  //····················································································································
  //    Relationships
  //····················································································································

  var mRoot = ToOneRelationship_NameEntity_mRoot ()

  //····················································································································
  //    init
  //····················································································································

  override init (managedObjectContext : EBManagedObjectContext) {
    super.init (managedObjectContext:managedObjectContext)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
    name.undoManager = undoManager ()
    aValue.undoManager = undoManager ()
  //--- Install owner for relationships
    mRoot.owner = self
  }

  //····················································································································
  //    populateExplorerWindow
  //····················································································································

  override func populateExplorerWindow (inout y : CGFloat, view : NSView) {
    super.populateExplorerWindow (&y, view:view)
    createEntryForPropertyNamed (
      "name",
      idx:name.mExplorerObjectIndex,
      y:&y,
      view:view,
      observerExplorer:&name.mObserverExplorer,
      valueExplorer:&name.mValueExplorer
    )
    createEntryForPropertyNamed (
      "aValue",
      idx:aValue.mExplorerObjectIndex,
      y:&y,
      view:view,
      observerExplorer:&aValue.mObserverExplorer,
      valueExplorer:&aValue.mValueExplorer
    )
    createEntryForToOneRelationshipNamed (
      "mRoot",
      idx:mRoot.mExplorerObjectIndex,
      y: &y,
      view: view,
      valueExplorer:&mRoot.mValueExplorer
    )
  }

  //····················································································································
  //    clearObjectExplorer
  //····················································································································

  override func clearObjectExplorer () {
    name.mObserverExplorer = nil
    name.mValueExplorer = nil
    aValue.mObserverExplorer = nil
    aValue.mValueExplorer = nil
    mRoot.mObserverExplorer = nil
    mRoot.mValueExplorer = nil
    super.clearObjectExplorer ()
  }

  //····················································································································
  //    saveIntoDictionary
  //····················································································································

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    name.storeInDictionary (ioDictionary, forKey: "name")
    aValue.storeInDictionary (ioDictionary, forKey: "aValue")
  }

  //····················································································································
  //    setUpWithDictionary
  //····················································································································

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<EBManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    name.readFromDictionary (inDictionary, forKey:"name")
    aValue.readFromDictionary (inDictionary, forKey:"aValue")
  }

  //····················································································································
  //   resetToOneRelationships
  //····················································································································

  override func resetToOneRelationships () {
    super.resetToOneRelationships ()
    mRoot.setProp (nil)
  }

  //····················································································································
  //   accessibleObjects
  //····················································································································

  override func accessibleObjects (inout objects : Array<EBManagedObject>) {
    super.accessibleObjects (&objects)
    if let object = mRoot.propval {
      objects.append (object)
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

