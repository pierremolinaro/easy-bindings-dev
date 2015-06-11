import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ReadOnlyArrayOf_MyRootEntity                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ReadOnlyArrayOf_MyRootEntity : PMAbstractProperty {

  var prop : PMProperty <Array<MyRootEntity> > { get { return .noSelection } }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TransientArrayOf_MyRootEntity                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class TransientArrayOf_MyRootEntity : ReadOnlyArrayOf_MyRootEntity {

  var computeFunction : Optional<() -> PMProperty <Array<MyRootEntity> > >
  
  var count = PMTransientProperty_Int ()

  private var prop_cache : PMProperty <Array<MyRootEntity> >? 

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

  override var prop : PMProperty <Array<MyRootEntity> > {
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
//    To many relationship: mNames                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ToManyRelationship_MyRootEntity_mNames : ReadOnlyArrayOf_NameEntity {
  weak var owner : MyRootEntity?

  var explorer : NSPopUpButton? {
    didSet {
      if let unwrappedExplorer = explorer, unwrappedOwner = owner {
        switch prop {
        case .noSelection, .multipleSelection :
          break ;
        case .singleSelection (let v) :
          unwrappedOwner.updateManagedObjectToManyRelationshipDisplay (v, popUpButton:unwrappedExplorer)
        }
      }
    }
  }

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

  var count = PMTransientProperty_Int ()

  //···················································································································*

  private var mSet = Set<NameEntity> ()
  private var mValue = Array<NameEntity> () {
    didSet {
      if oldValue != mValue {
        mSet = Set (mValue)
      //--- Register old value in undo manager
        owner?.undoManager()?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
      //--- Update explorer
        if explorer != nil {
          owner?.updateManagedObjectToManyRelationshipDisplay (mValue, popUpButton:explorer!)
        }
      //--- Removed object set
        var removedObjectSet : Set<NameEntity> = Set (oldValue)
        removedObjectSet.subtractInPlace (mValue)
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
        var addedObjectSet : Set<NameEntity> = Set (mValue)
        addedObjectSet.subtractInPlace (oldValue)
        for managedObject : NameEntity in addedObjectSet {
          for observer in mObserversOf_aValue {
            managedObject.aValue.addObserver (observer, postEvent:true)
          }
          for observer in mObserversOf_name {
            managedObject.name.addObserver (observer, postEvent:true)
          }
          managedObject.mRoot.setProp (owner)
        }
      //--- Notify observers object count did change
        postEvent ()
        if oldValue.count != mValue.count {
          count.postEvent ()
        }
      }
    }
  }

  override var prop : PMProperty <Array<NameEntity> > {
    get {
      return .singleSelection (mValue ?? Array<NameEntity> ())
    }
  }

  func setProp (inValue :  Array<NameEntity>) { mValue = inValue }

  var propval : Array<NameEntity> { get { return mValue ?? Array<NameEntity> () } }

  //···················································································································*

  func performUndo (oldValue : Array<NameEntity>) {
    mValue = oldValue
  }

  //···················································································································*

  func remove (object : NameEntity) {
    if mSet.contains (object) {
      var array = mValue
      let idx = array.indexOf (object)
      array.removeAtIndex (idx!)
      mValue = array
    }
  }
  
  //···················································································································*

  func add (object : NameEntity) {
    if !mSet.contains (object) {
      var array = mValue
      array.append (object)
      mValue = array
    }
  }
  
  //···················································································································*
 
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject {

  //···················································································································*
  //    Properties                                                                                                     *
  //···················································································································*

  //···················································································································*
  //    Transient properties                                                                                           *
  //···················································································································*


  //···················································································································*
  //    Relationships                                                                                                  *
  //···················································································································*

  var mNames = ToManyRelationship_MyRootEntity_mNames ()

  //···················································································································*
  //    init                                                                                                           *
  //···················································································································*

  override init (managedObjectContext : PMManagedObjectContext) {
    super.init (managedObjectContext:managedObjectContext)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
  //--- Install owner for relationships
    mNames.owner = self
  }

  //···················································································································*
  //    populateExplorerWindowWithRect                                                                                 *
  //···················································································································*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    mNames.explorer = createEntryForToManyRelationshipNamed ("mNames", ioRect: &ioRect, view: view)
  }

  //···················································································································*
  //    clearObjectExplorer                                                                                            *
  //···················································································································*

  override func clearObjectExplorer () {
    mNames.explorer = nil
    super.clearObjectExplorer ()
  }

  //···················································································································*
  //    saveIntoDictionary                                                                                             *
  //···················································································································*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    storeEntityArrayInDictionary (mNames.propval, inRelationshipName:"mNames", ioDictionary:ioDictionary) ;
  }

  //···················································································································*
  //    setUpWithDictionary                                                                                            *
  //···················································································································*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    mNames.setProp (readEntityArrayFromDictionary (
      "mNames",
      inDictionary:inDictionary,
      managedObjectArray:managedObjectArray
    ) as! Array<NameEntity>)
  }

  //···················································································································*
  //   resetToManyRelationships                                                                                        *
  //···················································································································*

  override func resetToManyRelationships () {
    super.resetToManyRelationships ()
    mNames.setProp (Array ())
  }

  //···················································································································*
  //   accessibleObjects                                                                                               *
  //···················································································································*

  override func accessibleObjects (inout objects : Array<PMManagedObject>) {
    super.accessibleObjects (&objects)
    for managedObject : PMManagedObject in mNames.propval {
      objects.append (managedObject)
    }
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

