import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ReadOnlyArrayOf_MyRootEntity                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ReadOnlyArrayOf_MyRootEntity : EBAbstractProperty {

  var prop : EBProperty <Array<MyRootEntity> > { get { return .noSelection } }

  //···················································································································*

  var mObserversOf_myString = Set<EBEvent> ()

  final func addObserverOf_myString (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_myString.insert (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.myString.addObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  final func removeObserverOf_myString (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_myString.remove (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.myString.removeObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  //···················································································································*

  var mObserversOf_myColor = Set<EBEvent> ()

  final func addObserverOf_myColor (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_myColor.insert (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.myColor.addObserver (inObserver, postEvent:inTrigger)
      }
    }
  }

  final func removeObserverOf_myColor (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObserversOf_myColor.remove (inObserver)
    switch prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      for managedObject in v {
        managedObject.myColor.removeObserver (inObserver, postEvent:inTrigger)
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
        for managedObject : MyRootEntity in newSet.subtract (mSet) {
          for observer in mObserversOf_myString {
            managedObject.myString.removeObserver (observer, postEvent:true)
          }
          for observer in mObserversOf_myColor {
            managedObject.myColor.removeObserver (observer, postEvent:true)
          }
        }
      //--- Added object set
        for managedObject : MyRootEntity in newSet.subtract (mSet) {
          for observer in mObserversOf_myString {
            managedObject.myString.addObserver (observer, postEvent:true)
          }
          for observer in mObserversOf_myColor {
            managedObject.myColor.addObserver (observer, postEvent:true)
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

@objc(MyRootEntity_myString) protocol MyRootEntity_myString {
  var myString : EBStoredProperty_String { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity_myColor) protocol MyRootEntity_myColor {
  var myColor : EBStoredProperty_NSColor { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : EBManagedObject, MyRootEntity_myString, MyRootEntity_myColor {

  //···················································································································*
  //    Properties                                                                                                     *
  //···················································································································*

  var myString = EBStoredProperty_String ("Hello")
  var myString_keyCodingValue : String {
    get {
      switch myString.prop {
      case .noSelection, .multipleSelection :
        return ""
      case .singleSelection (let v) :
        return v
      }
    }
  }

  var myColor = EBStoredProperty_NSColor (NSColor.yellowColor ())
  var myColor_keyCodingValue : NSColor {
    get {
      switch myColor.prop {
      case .noSelection, .multipleSelection :
        return NSColor.blackColor ()
      case .singleSelection (let v) :
        return v
      }
    }
  }

  //···················································································································*
  //    Transient properties                                                                                           *
  //···················································································································*

  var myStringMaj = EBTransientProperty_String ()
  var myStringMin = EBTransientProperty_String ()
  var myStringConcat = EBTransientProperty_String ()

  //···················································································································*
  //    Relationships                                                                                                  *
  //···················································································································*


  //···················································································································*
  //    init                                                                                                           *
  //···················································································································*

  override init (managedObjectContext : EBManagedObjectContext) {
    super.init (managedObjectContext:managedObjectContext)
  //--- Install compute functions for transients
    myStringMaj.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.myString.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_MyRootEntity_myStringMaj (v1))
        }
      }else{
        return .noSelection
      }
    }
    myStringMin.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.myString.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_MyRootEntity_myStringMin (v1))
        }
      }else{
        return .noSelection
      }
    }
    myStringConcat.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.myStringMaj.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          switch unwSelf.myStringMin.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection, .singleSelection :
            return .multipleSelection
          }
        case .singleSelection (let v1) :
          switch unwSelf.myStringMin.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection :
            return .multipleSelection
          case .singleSelection (let v2) :
            return .singleSelection (compute_MyRootEntity_myStringConcat (v1, v2))
          }
        }
      }else{
        return .noSelection
      }
    }
  //--- Install property observers for transients
    myString.addObserver (myStringMaj, postEvent:true)
    myString.addObserver (myStringMin, postEvent:true)
    myStringMaj.addObserver (myStringConcat, postEvent:true)
    myStringMin.addObserver (myStringConcat, postEvent:true)
  //--- Install undoers for properties
    myString.undoManager = undoManager ()
    myColor.undoManager = undoManager ()
  //--- Install owner for relationships
  }

  //···················································································································*
  //    populateExplorerWindow
  //···················································································································*

  override func populateExplorerWindow (inout y : CGFloat, view : NSView) {
    super.populateExplorerWindow (&y, view:view)
    createEntryForPropertyNamed (
      "myString",
      idx:myString.mExplorerObjectIndex,
      y:&y,
      view:view,
      observerExplorer:&myString.mObserverExplorer,
      valueExplorer:&myString.mValueExplorer
    )
    createEntryForPropertyNamed (
      "myColor",
      idx:myColor.mExplorerObjectIndex,
      y:&y,
      view:view,
      observerExplorer:&myColor.mObserverExplorer,
      valueExplorer:&myColor.mValueExplorer
    )
  }

  //···················································································································*
  //    clearObjectExplorer                                                                                            *
  //···················································································································*

  override func clearObjectExplorer () {
    myString.mObserverExplorer = nil
    myString.mValueExplorer = nil
    myColor.mObserverExplorer = nil
    myColor.mValueExplorer = nil
    super.clearObjectExplorer ()
  }

  //···················································································································*
  //    saveIntoDictionary                                                                                             *
  //···················································································································*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    myString.storeInDictionary (ioDictionary, forKey: "myString")
    myColor.storeInDictionary (ioDictionary, forKey: "myColor")
  }

  //···················································································································*
  //    setUpWithDictionary                                                                                            *
  //···················································································································*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<EBManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    myString.readFromDictionary (inDictionary, forKey:"myString")
    myColor.readFromDictionary (inDictionary, forKey:"myColor")
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

