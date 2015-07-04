import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ReadOnlyArrayOf_MyRootEntity                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ReadOnlyArrayOf_MyRootEntity : EBAbstractProperty {

  var prop : EBProperty <Array<MyRootEntity> > { get { return .noSelection } }

  //···················································································································*

  var mObserversOf_docBool = Set<EBEvent> ()

  final func addObserverOf_docBool (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_docBool.insert (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.docBool.addObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  final func removeObserverOf_docBool (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_docBool.remove (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.docBool.removeObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TransientArrayOf_MyRootEntity                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class TransientArrayOf_MyRootEntity : ReadOnlyArrayOf_MyRootEntity {

  var computeFunction : Optional<() -> EBProperty <Array<MyRootEntity> > >
  
  var count = EBTransientProperty_Int ()

  private var prop_cache : EBProperty <Array<MyRootEntity> >? 

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

  override var prop : EBProperty <Array<MyRootEntity> > {
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

@objc(MyRootEntity_docBool) protocol MyRootEntity_docBool {
  var docBool : EBStoredProperty_Bool { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : EBManagedObject, MyRootEntity_docBool {

  //···················································································································*
  //    Properties                                                                                                     *
  //···················································································································*

  var docBool = EBStoredProperty_Bool (true)
  var docBool_keyCodingValue : Bool {
    get {
      switch docBool.prop {
      case .noSelection, .multipleSelection :
        return false
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


  //···················································································································*
  //    init                                                                                                           *
  //···················································································································*

  override init (managedObjectContext : EBManagedObjectContext) {
    super.init (managedObjectContext:managedObjectContext)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
    docBool.undoManager = undoManager ()
  //--- Install owner for relationships
  }

  //···················································································································*
  //    populateExplorerWindowWithRect                                                                                 *
  //···················································································································*

  override func populateExplorerWindowWithRect (inout y : CGFloat, view : NSView) {
    super.populateExplorerWindowWithRect (&y, view:view)
    createEntryForPropertyNamed (
      "docBool",
      idx:docBool.mExplorerObjectIndex,
      y:&y,
      view:view,
      observerExplorer:&docBool.mObserverExplorer,
      valueExplorer:&docBool.mValueExplorer
    )
  }

  //···················································································································*
  //    clearObjectExplorer                                                                                            *
  //···················································································································*

  override func clearObjectExplorer () {
    docBool.mObserverExplorer = nil
    docBool.mValueExplorer = nil
    super.clearObjectExplorer ()
  }

  //···················································································································*
  //    saveIntoDictionary                                                                                             *
  //···················································································································*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    docBool.storeInDictionary (ioDictionary, forKey: "docBool")
  }

  //···················································································································*
  //    setUpWithDictionary                                                                                            *
  //···················································································································*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<EBManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    docBool.readFromDictionary (inDictionary, forKey:"docBool")
  }

  //···················································································································*
  //   accessibleObjects                                                                                               *
  //···················································································································*

  override func accessibleObjects (inout objects : Array<EBManagedObject>) {
    super.accessibleObjects (&objects)
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

