import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ReadOnlyArrayOf_NameEntity                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ReadOnlyArrayOf_NameEntity : PMAbstractProperty {

  var prop : PMProperty <Array<NameEntity> > { get { return .noSelection } }

  //···················································································································*

  var mObserversOf_name = Set<PMEvent> ()

  func addObserverOf_name (inObserver : PMEvent, postEvent inTrigger:Bool) {
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

  func removeObserverOf_name (inObserver : PMEvent, postEvent inTrigger:Bool) {
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

  //···················································································································*

  var mObserversOf_aValue = Set<PMEvent> ()

  func addObserverOf_aValue (inObserver : PMEvent, postEvent inTrigger:Bool) {
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

  func removeObserverOf_aValue (inObserver : PMEvent, postEvent inTrigger:Bool) {
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

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TransientArrayOf_NameEntity                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class TransientArrayOf_NameEntity : ReadOnlyArrayOf_NameEntity {

  var computeFunction : Optional<() -> PMProperty <Array<NameEntity> > >
  
  var count = PMTransientProperty_Int ()

  private var prop_cache : PMProperty <Array<NameEntity> >? 

  //···················································································································*

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

  //···················································································································*

  override var prop : PMProperty <Array<NameEntity> > {
    get {
      if let unwrappedComputeFunction = computeFunction where prop_cache == nil {
        prop_cache = unwrappedComputeFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  //···················································································································*

  override func postEvent () {
    if prop_cache != nil {
      prop_cache = nil
      count.postEvent ()
      super.postEvent ()
    }
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity_name) protocol NameEntity_name {
  var name : PMStoredProperty_String { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity_aValue) protocol NameEntity_aValue {
  var aValue : PMStoredProperty_Int { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    To one relationship: mRoot                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ToOneRelationship_NameEntity_mRoot : PMAbstractProperty {
  var explorer : NSButton?
  weak var owner : NameEntity? {
    didSet {
      if let unwrappedExplorer = explorer, unwrappedOwner = owner {
        unwrappedOwner.updateManagedObjectToOneRelationshipDisplay (propval, button : unwrappedExplorer)
      }
    }
  }
 
  weak private var mValue : MyRootEntity? {
    didSet {
      if let unwrappedOwner = owner where oldValue !== mValue {
      //--- Register old value in undo manager
        unwrappedOwner.undoManager()?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
      //--- Update explorer
        if let unwrappedExplorer = explorer {
          unwrappedOwner.updateManagedObjectToOneRelationshipDisplay (mValue, button : unwrappedExplorer)
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

  var prop : PMProperty <MyRootEntity?> { get { return .singleSelection (mValue) } }

  func setProp (value : MyRootEntity?) { mValue = value }

  //···················································································································*

  func performUndo (oldValue : MyRootEntity?) {
    mValue = oldValue
  }

  //···················································································································*

  func remove (object : MyRootEntity) {
    if mValue === object {
      mValue = nil
    }
  }
  
  //···················································································································*

  func add (object : MyRootEntity) {
    mValue = object
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: NameEntity                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity) class NameEntity : PMManagedObject, NameEntity_name, NameEntity_aValue {

  //···················································································································*
  //    Properties                                                                                                     *
  //···················································································································*

  var name = PMStoredProperty_String ("Name")
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

  var aValue = PMStoredProperty_Int (100)
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

  //···················································································································*
  //    Transient properties                                                                                           *
  //···················································································································*


  //···················································································································*
  //    Relationships                                                                                                  *
  //···················································································································*

  var mRoot = ToOneRelationship_NameEntity_mRoot ()

  //···················································································································*
  //    init                                                                                                           *
  //···················································································································*

  override init (managedObjectContext : PMManagedObjectContext) {
    super.init (managedObjectContext:managedObjectContext)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
    name.undoManager = undoManager ()
    aValue.undoManager = undoManager ()
  //--- Install owner for relationships
    mRoot.owner = self
  }

  //···················································································································*
  //    populateExplorerWindowWithRect                                                                                 *
  //···················································································································*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    name.explorer = createEntryForAttributeNamed ("name", ioRect:&ioRect, view:view)
    aValue.explorer = createEntryForAttributeNamed ("aValue", ioRect:&ioRect, view:view)
    mRoot.explorer = createEntryForToOneRelationshipNamed ("mRoot", ioRect: &ioRect, view: view)
  }

  //···················································································································*
  //    clearObjectExplorer                                                                                            *
  //···················································································································*

  override func clearObjectExplorer () {
    name.explorer = nil
    aValue.explorer = nil
    mRoot.explorer = nil
    super.clearObjectExplorer ()
  }

  //···················································································································*
  //    saveIntoDictionary                                                                                             *
  //···················································································································*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    name.storeInDictionary (ioDictionary, forKey: "name")
    aValue.storeInDictionary (ioDictionary, forKey: "aValue")
  }

  //···················································································································*
  //    setUpWithDictionary                                                                                            *
  //···················································································································*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    name.readFromDictionary (inDictionary, forKey:"name")
    aValue.readFromDictionary (inDictionary, forKey:"aValue")
  }

  //···················································································································*
  //   resetToOneRelationships                                                                                         *
  //···················································································································*

  override func resetToOneRelationships () {
    super.resetToOneRelationships ()
    mRoot.setProp (nil)
  }

  //···················································································································*
  //   accessibleObjects                                                                                               *
  //···················································································································*

  override func accessibleObjects (inout objects : Array<PMManagedObject>) {
    super.accessibleObjects (&objects)
    if let object = mRoot.propval {
      objects.append (object)
    }
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

