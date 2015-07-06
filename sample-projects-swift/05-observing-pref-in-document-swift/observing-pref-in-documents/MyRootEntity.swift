import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    ReadOnlyArrayOf_MyRootEntity
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(ReadOnlyArrayOf_MyRootEntity)
class ReadOnlyArrayOf_MyRootEntity : EBObject {

  var prop : EBProperty <Array<MyRootEntity> > { get { return .noSelection } }

  //····················································································································

  var mObserversOf_docString = Set<EBEvent> ()

  final func addObserverOf_docString (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_docString.insert (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.docString.addObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  final func removeObserverOf_docString (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_docString.remove (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.docString.removeObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    TransientArrayOf_MyRootEntity
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(TransientArrayOf_MyRootEntity)
class TransientArrayOf_MyRootEntity : ReadOnlyArrayOf_MyRootEntity {

  var computeFunction : Optional<() -> EBProperty <Array<MyRootEntity> > >
  
  var count = EBTransientProperty_Int ()

  private var prop_cache : EBProperty <Array<MyRootEntity> >? 

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

  private var mSet = Set <MyRootEntity> ()

  override var prop : EBProperty <Array<MyRootEntity> > {
    get {
      if let unwrappedComputeFunction = computeFunction where prop_cache == nil {
        prop_cache = unwrappedComputeFunction ()
        let newSet : Set <MyRootEntity>
        switch prop_cache! {
        case .multipleSelection, .noSelection :
          newSet = Set <MyRootEntity> ()
        case .singleSelection (let array) :
          newSet = Set (array)
        }
     //--- Removed object set
        for managedObject : MyRootEntity in mSet.subtract (newSet) {
          for observer in mObserversOf_docString {
            managedObject.docString.removeObserver (observer, postEvent:true)
          }
        }
      //--- Added object set
        for managedObject : MyRootEntity in newSet.subtract (mSet) {
          for observer in mObserversOf_docString {
            managedObject.docString.addObserver (observer, postEvent:true)
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
    if prop_cache != nil {
      prop_cache = nil
      for observer in mObserversOf_docString {
        observer.postEvent ()
      }
      count.postEvent ()
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(MyRootEntity_docString) protocol MyRootEntity_docString {
  var docString : EBStoredProperty_String { get }
}


//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    Entity: MyRootEntity
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(MyRootEntity) class MyRootEntity : EBManagedObject, MyRootEntity_docString {

  //····················································································································
  //    Properties
  //····················································································································

  var docString = EBStoredProperty_String ("doc string")
  var docString_keyCodingValue : String {
    get {
      switch docString.prop {
      case .noSelection, .multipleSelection :
        return ""
      case .singleSelection (let v) :
        return v
      }
    }
  }

  //····················································································································
  //    Transient properties
  //····················································································································

  var transientConcatString = EBTransientProperty_String ()
  var otherTransientConcatString = EBTransientProperty_String ()

  //····················································································································
  //    Relationships
  //····················································································································


  //····················································································································
  //    init
  //····················································································································

  override init (managedObjectContext : EBManagedObjectContext) {
    super.init (managedObjectContext:managedObjectContext)
  //--- Install compute functions for transients
    transientConcatString.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.docString.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          switch g_Preferences!.myPrefString.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection, .singleSelection :
            switch g_Preferences!.prefTransientString.prop {
            case .noSelection :
              return .noSelection
            case .multipleSelection, .singleSelection :
              return .multipleSelection
            }
          }
        case .singleSelection (let v1) :
          switch g_Preferences!.myPrefString.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection :
            return .multipleSelection
          case .singleSelection (let v2) :
            switch g_Preferences!.prefTransientString.prop {
            case .noSelection :
              return .noSelection
            case .multipleSelection :
              return .multipleSelection
            case .singleSelection (let v3) :
              return .singleSelection (compute_MyRootEntity_transientConcatString (v1, v2, v3))
            }
          }
        }
      }else{
        return .noSelection
      }
    }
    otherTransientConcatString.computeFunction = {
        switch g_Preferences!.myPrefString.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_MyRootEntity_otherTransientConcatString (v1))
        }
    }
  //--- Install property observers for transients
    docString.addObserver (transientConcatString, postEvent:true)
    g_Preferences?.myPrefString.addObserver (transientConcatString, postEvent:true)
    g_Preferences?.prefTransientString.addObserver (transientConcatString, postEvent:true)
    g_Preferences?.myPrefString.addObserver (otherTransientConcatString, postEvent:true)
  //--- Install undoers for properties
    docString.undoManager = undoManager ()
  //--- Install owner for relationships
  //--- register properties for handling signature
  }

  //····················································································································
  //    populateExplorerWindow
  //····················································································································

  override func populateExplorerWindow (inout y : CGFloat, view : NSView) {
    super.populateExplorerWindow (&y, view:view)
    createEntryForPropertyNamed (
      "docString",
      idx:docString.mExplorerObjectIndex,
      y:&y,
      view:view,
      observerExplorer:&docString.mObserverExplorer,
      valueExplorer:&docString.mValueExplorer
    )
  }

  //····················································································································
  //    clearObjectExplorer
  //····················································································································

  override func clearObjectExplorer () {
    docString.mObserverExplorer = nil
    docString.mValueExplorer = nil
    super.clearObjectExplorer ()
  }

  //····················································································································
  //    saveIntoDictionary
  //····················································································································

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    docString.storeInDictionary (ioDictionary, forKey: "docString")
  }

  //····················································································································
  //    setUpWithDictionary
  //····················································································································

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<EBManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    docString.readFromDictionary (inDictionary, forKey:"docString")
  }

  //····················································································································
  //   accessibleObjects
  //····················································································································

  override func accessibleObjects (inout objects : Array<EBManagedObject>) {
    super.accessibleObjects (&objects)
  }

  //····················································································································
  //   computeSignature
  //····················································································································

  override func computeSignature () -> UInt32 {
    var crc = super.computeSignature ()
    return crc
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

