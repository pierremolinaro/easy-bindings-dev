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
//    PMReadOnlyProperty_MonEnumeration                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_MonEnumeration : PMAbstractProperty, PMReadOnlyEnumPropertyProtocol {

  var prop : PMProperty <MonEnumeration> { get { return .noSelection } } // Abstract method

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

  override var prop : PMProperty <MonEnumeration> { get { return .singleSelection (mValue) } }

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
  private var mValueCache : PMProperty <MonEnumeration>?

  var computeFunction : Optional<() -> PMProperty <MonEnumeration> >
  
  override init () {
    super.init ()
  }

  override var prop : PMProperty <MonEnumeration> {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
