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

  var prop : MonEnumeration { get { return MonEnumeration.premier } } // Abstract method

  func rawValue () -> Int { return MonEnumeration.premier.rawValue }  // Abstract method

  func count () -> Int { return 3 }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMStoredProperty_MonEnumeration                                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_MonEnumeration : PMReadOnlyProperty_MonEnumeration, PMEnumPropertyProtocol {
  weak var undoManager : NSUndoManager?

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
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSNumber) {
    if let v = MonEnumeration (rawValue:oldValue.integerValue) {
      mValue = v
    }
  }

  override var prop :  MonEnumeration { get { return mValue } }

  func setProp (inValue : MonEnumeration) { mValue = inValue }

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
  private var mValueCache : MonEnumeration? = nil

  var computeFunction : Optional<() -> MonEnumeration>
  
  override init () {
    super.init ()
  }

  override var prop : MonEnumeration {
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

  override func postEvent () {
    if mValueCache != nil {
      mValueCache = nil
      super.postEvent ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
