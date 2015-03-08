import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum MonEnumeration : Int {
  case premier = 0
  case deuxieme = 1
  case troisieme = 2


  func descriptionForExplorer () -> String {
    switch self {
      case premier : return "premier" // 0
      case deuxieme : return "deuxieme" // 1
      case troisieme : return "troisieme" // 2
    }
  }

  func enumfromRawValue (rawValue : Int) -> MonEnumeration {
    var result = self
    let v : MonEnumeration? = MonEnumeration (rawValue:rawValue) ;
    if let unwrappedV = v {
      result = unwrappedV
    }
    return result
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSDictionary {
  func readMonEnumeration  (inKey : String) -> MonEnumeration {
    let v : Int? = objectForKey (inKey)?.integerValue
    var result = MonEnumeration.premier
    if v != nil {
      let e : MonEnumeration? = MonEnumeration (rawValue:v!)
      if e != nil {
        result = e!
      }
    }
    return result
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMReadOnlyProperty_MonEnumeration                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_MonEnumeration : PMAbstractProperty, PMReadOnlyEnumPropertyProtocol {

  override func userClassName () -> String { return "PMReadOnlyProperty_String" }

  var value : MonEnumeration { get { return MonEnumeration.premier } } // Abstract method

  func rawValue () -> Int { return MonEnumeration.premier.rawValue }  // Abstract method

  func count () -> Int { return 3 }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMStoredProperty_MonEnumeration                                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_MonEnumeration : PMReadOnlyProperty_MonEnumeration, PMEnumPropertyProtocol {
  override func userClassName () -> String { return "PMStoredProperty_MonEnumeration"}

  var undoManager : NSUndoManager?
  var explorer : NSTextField? {
    didSet {
      explorer?.stringValue = mValue.descriptionForExplorer ()
    }
  }

  init (_ inValue : MonEnumeration) {
    mValue = inValue
    super.init ()
  }

  private var mValue : MonEnumeration {
    didSet {
      if mValue != oldValue {
        explorer?.stringValue = mValue.descriptionForExplorer ()
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:NSNumber (integer:oldValue.rawValue))
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }

  func performUndo (oldValue : NSNumber) {
    if let v = MonEnumeration (rawValue:oldValue.integerValue) {
      mValue = v
    }
  }

  override var value :  MonEnumeration { get { return mValue } }

  func setValue (inValue : MonEnumeration) { mValue = inValue }

  override func rawValue () -> Int {
    return mValue.rawValue
  }

  func setFromRawValue (rawValue : Int) {
    if let v = MonEnumeration (rawValue:rawValue) {
      mValue = v
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (MonEnumeration) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : MonEnumeration) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTransientProperty_MonEnumeration                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_MonEnumeration : PMReadOnlyProperty_MonEnumeration {
  override func userClassName () -> String { return "PMTransientProperty_MonEnumeration"}

  private var mValueCache : MonEnumeration? = nil
  private let mTransientIndex : PMTransientIndex
  var computeFunction : Optional<() -> MonEnumeration>
  
  init (_ inTransientIndex : PMTransientIndex) {
    mTransientIndex = inTransientIndex
    super.init ()
  }

  override var value : MonEnumeration {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = MonEnumeration.premier
        }
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent_MonEnumeration (self)
      }
      return mEvent!
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTransientPropertyEvent_MonEnumeration                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientPropertyEvent_MonEnumeration : PMTransientEvent {
  override func userClassName () -> String { return "PMTransientPropertyEvent_MonEnumeration" }

  weak private var mObserver : PMTransientProperty_MonEnumeration? = nil
  private let mTransientIndex : PMTransientIndex

  override func transientEventIndex () -> PMTransientIndex { return mTransientIndex }
  
  init (_ inObject : PMTransientProperty_MonEnumeration) {
    mObserver = inObject
    mTransientIndex = inObject.mTransientIndex
  }

  override func noteModelDidChange () {
    mObserver?.mValueCache = nil
  }

  override func trigger () {
    if let observer = mObserver {
      for (key, object) in observer.mObservers {
        postTransientEvent (object)
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
