import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ReadOnlyArrayOf_MyRootEntity                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ReadOnlyArrayOf_MyRootEntity : PMAbstractProperty {

  var prop : PMProperty <Array<MyRootEntity> > { get { return .noSelection } }

  //···················································································································*

  var mObserversOf_docString = Set<PMEvent> ()

  func addObserverOf_docString (inObserver : PMEvent, postEvent inTrigger:Bool) {
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

  func removeObserverOf_docString (inObserver : PMEvent, postEvent inTrigger:Bool) {
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

@objc(MyRootEntity_docString) protocol MyRootEntity_docString {
  var docString : PMStoredProperty_String { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_docString {

  //···················································································································*
  //    Properties                                                                                                     *
  //···················································································································*

  var docString = PMStoredProperty_String ("doc string")
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

  //···················································································································*
  //    Transient properties                                                                                           *
  //···················································································································*

  var transientConcatString = PMTransientProperty_String ()
  var otherTransientConcatString = PMTransientProperty_String ()

  //···················································································································*
  //    Relationships                                                                                                  *
  //···················································································································*


  //···················································································································*
  //    init                                                                                                           *
  //···················································································································*

  override init (managedObjectContext : PMManagedObjectContext) {
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
  }

  //···················································································································*
  //    populateExplorerWindowWithRect                                                                                 *
  //···················································································································*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    docString.explorer = createEntryForAttributeNamed ("docString", ioRect:&ioRect, view:view)
  }

  //···················································································································*
  //    clearObjectExplorer                                                                                            *
  //···················································································································*

  override func clearObjectExplorer () {
    docString.explorer = nil
    super.clearObjectExplorer ()
  }

  //···················································································································*
  //    saveIntoDictionary                                                                                             *
  //···················································································································*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    docString.storeInDictionary (ioDictionary, forKey: "docString")
  }

  //···················································································································*
  //    setUpWithDictionary                                                                                            *
  //···················································································································*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    docString.readFromDictionary (inDictionary, forKey:"docString")
  }

  //···················································································································*
  //   accessibleObjects                                                                                               *
  //···················································································································*

  override func accessibleObjects (inout objects : Array<PMManagedObject>) {
    super.accessibleObjects (&objects)
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

