import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

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

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    EBReadOnlyProperty_MonEnumeration
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class EBReadOnlyProperty_MonEnumeration : EBAbstractProperty, EBReadOnlyEnumPropertyProtocol {

  var prop : EBProperty <MonEnumeration> { get { return .noSelection } } // Abstract method

  func rawValue () -> Int { return MonEnumeration.premier.rawValue }  // Abstract method

  func count () -> Int { return 3 }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    EBStoredProperty_MonEnumeration
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class EBStoredProperty_MonEnumeration : EBReadOnlyProperty_MonEnumeration, EBEnumPropertyProtocol {
  weak var undoManager : NSUndoManager?

  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue.descriptionForExplorer ()
    }
  }

  init (_ inValue : MonEnumeration) {
    mValue = inValue
    super.init ()
  }

  private var mValue : MonEnumeration {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue.descriptionForExplorer ()
        undoManager?.registerUndoWithTarget (self, selector:Selector ("performUndo:"), object:NSNumber (integer:oldValue.rawValue))
        postEvent ()
        clearSignatureCache ()
      }
    }
  }

  func performUndo (oldValue : NSNumber) {
    if let v = MonEnumeration (rawValue:oldValue.integerValue) {
      mValue = v
    }
  }

  override var prop : EBProperty <MonEnumeration> { get { return .singleSelection (mValue) } }

  func setProp (inValue : MonEnumeration) { mValue = inValue }

  override func rawValue () -> Int {
    return mValue.rawValue
  }

  func setFromRawValue (rawValue : Int) {
    if let v = MonEnumeration (rawValue:rawValue) {
      mValue = v
    }
  }

  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setFromRawValue ((unwValue as! NSNumber).integerValue)
    }
  }
  
  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSNumber (integer:mValue.rawValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSNumber (integer:mValue.rawValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setFromRawValue ((unwValue as! NSNumber).integerValue)
    }
  }

  //····················································································································
 
  var validationFunction : (MonEnumeration) -> EBValidationResult = defaultValidationFunction
  
  func validate (proposedValue : MonEnumeration) -> EBValidationResult {
    return validationFunction (proposedValue)
  }

  //····················································································································
  //    SIGNATURE
  //····················································································································

  final private weak var mSignatureObserver : EBSignatureObserverProtocol? = nil
  final private var mSignatureCache : UInt32? = nil

  //····················································································································

  final func setSignatureObserver (observer : EBSignatureObserverProtocol) {
    mSignatureObserver = observer
  }

  //····················································································································

  final private func clearSignatureCache () {
    if mSignatureCache != nil {
      mSignatureCache = nil
      mSignatureObserver?.clearSignatureCache ()
    }
  }

  //····················································································································

  final func signature () -> UInt32 {
    let computedSignature : UInt32
    if let s = mSignatureCache {
      computedSignature = s
    }else{
      computedSignature = mValue.rawValue.ebHashValue ()
      mSignatureCache = computedSignature
    }
    return computedSignature
  }
  
  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    EBTransientProperty_MonEnumeration
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class EBTransientProperty_MonEnumeration : EBReadOnlyProperty_MonEnumeration {
  private var mValueCache : EBProperty <MonEnumeration>?

  var computeFunction : Optional<() -> EBProperty <MonEnumeration> >
  
  override init () {
    super.init ()
  }

  override var prop : EBProperty <MonEnumeration> {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = .noSelection
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

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
