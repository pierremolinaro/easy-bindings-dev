import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadOnlyProperty_Int                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadOnlyProperty_Int : EBAbstractProperty {
  var prop : EBProperty <Int> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadWriteProperty_Int                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadWriteProperty_Int : EBReadOnlyProperty_Int {
  func setProp (inValue : Int) { } // Abstract method
  func validateAndSetProp (candidateValue : Int, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBPropertyProxy_Int                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBPropertyProxy_Int : EBReadWriteProperty_Int {
  var readModelFunction : Optional < () -> EBProperty <Int> >
  var writeModelFunction : Optional < (Int) -> Void >
  var validateAndWriteModelFunction : Optional < (Int, NSWindow?) -> Bool >
  
  private var prop_cache : EBProperty <Int>?
  
  override init () {
    super.init ()
  }
  
  override func postEvent () {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent ()
    }
  }

  override var prop : EBProperty <Int> {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  
  override func setProp (inValue : Int) {
    if let unWriteModelFunction = writeModelFunction {
      unWriteModelFunction (inValue)
    }
  }

  override func validateAndSetProp (candidateValue : Int,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = false
    if let unwValidateAndWriteModelFunction = validateAndWriteModelFunction {
      result = unwValidateAndWriteModelFunction (candidateValue, inWindow)
    }
    return result
  }
  
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBStoredProperty_Int                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBStoredProperty_Int : EBReadWriteProperty_Int {
  weak var undoManager : NSUndoManager?

  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : Int) {
    mValue = inValue
    super.init ()
  }

  private var mValue : Int {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:NSNumber (integer:oldValue))
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSNumber) {
    mValue = oldValue.integerValue
  }

  override var prop : EBProperty<Int> { get { return .singleSelection (mValue) } }

  var propval : Int { get { return mValue } }

  override func setProp (inValue : Int) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (Int) -> EBValidationResult = defaultValidationFunction
  
  override func validateAndSetProp (candidateValue : Int,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = true
    let validationResult = validationFunction (candidateValue)
    switch validationResult {
    case EBValidationResult.ok :
      setProp (candidateValue)
    case EBValidationResult.rejectWithBeep :
      result = false
      NSBeep ()
    case EBValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = "The value " + String (candidateValue) + " is invalid."
      alert.informativeText = informativeText
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      if let window = inWindow {
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.postEvent ()
          }
        })
      }else{
        alert.runModal ()
      }
    }
    return result
  }

  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).integerValue)
    }
  }

  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSNumber (integer:mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSNumber (integer:mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).integerValue)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTransientProperty_Int                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBTransientProperty_Int : EBReadOnlyProperty_Int {
  private var mValueCache : EBProperty <Int>? = nil
  var computeFunction : Optional<() -> EBProperty <Int> >
  
  override init () {
    super.init ()
  }

  override var prop : EBProperty <Int> {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = .noSelection
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
//   EBReadOnlyProperty_Bool                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadOnlyProperty_Bool : EBAbstractProperty {
  var prop : EBProperty <Bool> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadWriteProperty_Bool                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadWriteProperty_Bool : EBReadOnlyProperty_Bool {
  func setProp (inValue : Bool) { } // Abstract method
  func validateAndSetProp (candidateValue : Bool, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBPropertyProxy_Bool                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBPropertyProxy_Bool : EBReadWriteProperty_Bool {
  var readModelFunction : Optional < () -> EBProperty <Bool> >
  var writeModelFunction : Optional < (Bool) -> Void >
  var validateAndWriteModelFunction : Optional < (Bool, NSWindow?) -> Bool >
  
  private var prop_cache : EBProperty <Bool>?
  
  override init () {
    super.init ()
  }
  
  override func postEvent () {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent ()
    }
  }

  override var prop : EBProperty <Bool> {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  
  override func setProp (inValue : Bool) {
    if let unWriteModelFunction = writeModelFunction {
      unWriteModelFunction (inValue)
    }
  }

  override func validateAndSetProp (candidateValue : Bool,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = false
    if let unwValidateAndWriteModelFunction = validateAndWriteModelFunction {
      result = unwValidateAndWriteModelFunction (candidateValue, inWindow)
    }
    return result
  }
  
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBStoredProperty_Bool                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBStoredProperty_Bool : EBReadWriteProperty_Bool {
  weak var undoManager : NSUndoManager?

  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : Bool) {
    mValue = inValue
    super.init ()
  }

  private var mValue : Bool {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:NSNumber (bool:oldValue))
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSNumber) {
    mValue = oldValue.boolValue
  }

  override var prop : EBProperty<Bool> { get { return .singleSelection (mValue) } }

  var propval : Bool { get { return mValue } }

  override func setProp (inValue : Bool) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (Bool) -> EBValidationResult = defaultValidationFunction
  
  override func validateAndSetProp (candidateValue : Bool,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = true
    let validationResult = validationFunction (candidateValue)
    switch validationResult {
    case EBValidationResult.ok :
      setProp (candidateValue)
    case EBValidationResult.rejectWithBeep :
      result = false
      NSBeep ()
    case EBValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = "The value " + String (candidateValue) + " is invalid."
      alert.informativeText = informativeText
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      if let window = inWindow {
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.postEvent ()
          }
        })
      }else{
        alert.runModal ()
      }
    }
    return result
  }

  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).boolValue)
    }
  }

  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSNumber (bool:mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSNumber (bool:mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).boolValue)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTransientProperty_Bool                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBTransientProperty_Bool : EBReadOnlyProperty_Bool {
  private var mValueCache : EBProperty <Bool>? = nil
  var computeFunction : Optional<() -> EBProperty <Bool> >
  
  override init () {
    super.init ()
  }

  override var prop : EBProperty <Bool> {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = .noSelection
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
//   EBReadOnlyProperty_Double                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadOnlyProperty_Double : EBAbstractProperty {
  var prop : EBProperty <Double> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadWriteProperty_Double                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadWriteProperty_Double : EBReadOnlyProperty_Double {
  func setProp (inValue : Double) { } // Abstract method
  func validateAndSetProp (candidateValue : Double, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBPropertyProxy_Double                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBPropertyProxy_Double : EBReadWriteProperty_Double {
  var readModelFunction : Optional < () -> EBProperty <Double> >
  var writeModelFunction : Optional < (Double) -> Void >
  var validateAndWriteModelFunction : Optional < (Double, NSWindow?) -> Bool >
  
  private var prop_cache : EBProperty <Double>?
  
  override init () {
    super.init ()
  }
  
  override func postEvent () {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent ()
    }
  }

  override var prop : EBProperty <Double> {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  
  override func setProp (inValue : Double) {
    if let unWriteModelFunction = writeModelFunction {
      unWriteModelFunction (inValue)
    }
  }

  override func validateAndSetProp (candidateValue : Double,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = false
    if let unwValidateAndWriteModelFunction = validateAndWriteModelFunction {
      result = unwValidateAndWriteModelFunction (candidateValue, inWindow)
    }
    return result
  }
  
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBStoredProperty_Double                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBStoredProperty_Double : EBReadWriteProperty_Double {
  weak var undoManager : NSUndoManager?

  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : Double) {
    mValue = inValue
    super.init ()
  }

  private var mValue : Double {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:NSNumber (double:oldValue))
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSNumber) {
    mValue = oldValue.doubleValue
  }

  override var prop : EBProperty<Double> { get { return .singleSelection (mValue) } }

  var propval : Double { get { return mValue } }

  override func setProp (inValue : Double) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (Double) -> EBValidationResult = defaultValidationFunction
  
  override func validateAndSetProp (candidateValue : Double,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = true
    let validationResult = validationFunction (candidateValue)
    switch validationResult {
    case EBValidationResult.ok :
      setProp (candidateValue)
    case EBValidationResult.rejectWithBeep :
      result = false
      NSBeep ()
    case EBValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = "The value " + String (candidateValue) + " is invalid."
      alert.informativeText = informativeText
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      if let window = inWindow {
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.postEvent ()
          }
        })
      }else{
        alert.runModal ()
      }
    }
    return result
  }

  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).doubleValue)
    }
  }

  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSNumber (double:mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSNumber (double:mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).doubleValue)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTransientProperty_Double                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBTransientProperty_Double : EBReadOnlyProperty_Double {
  private var mValueCache : EBProperty <Double>? = nil
  var computeFunction : Optional<() -> EBProperty <Double> >
  
  override init () {
    super.init ()
  }

  override var prop : EBProperty <Double> {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = .noSelection
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
//   EBReadOnlyProperty_String                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadOnlyProperty_String : EBAbstractProperty {
  var prop : EBProperty <String> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadWriteProperty_String                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadWriteProperty_String : EBReadOnlyProperty_String {
  func setProp (inValue : String) { } // Abstract method
  func validateAndSetProp (candidateValue : String, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBPropertyProxy_String                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBPropertyProxy_String : EBReadWriteProperty_String {
  var readModelFunction : Optional < () -> EBProperty <String> >
  var writeModelFunction : Optional < (String) -> Void >
  var validateAndWriteModelFunction : Optional < (String, NSWindow?) -> Bool >
  
  private var prop_cache : EBProperty <String>?

  override init () {
    super.init ()
  }

  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : EBProperty <String> {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  
  override func setProp (inValue : String) {
    if let unWriteModelFunction = writeModelFunction {
      unWriteModelFunction (inValue)
    }
  }

  override func validateAndSetProp (candidateValue : String,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = false
    if let unwValidateAndWriteModelFunction = validateAndWriteModelFunction {
      result = unwValidateAndWriteModelFunction (candidateValue, inWindow)
    }
    return result
  }
  
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBStoredProperty_String                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBStoredProperty_String : EBReadWriteProperty_String {
  weak var undoManager : NSUndoManager?
  
  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue
    }
  }

  init (_ inValue : String) {
    mValue = inValue
    super.init ()
  }

  private var mValue : String {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object: oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : String) {
    mValue = oldValue
  }
  
  override var prop : EBProperty <String> { get { return .singleSelection (mValue) } }

  var propval : String { get { return mValue } }

  override func setProp (inValue : String) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (String) -> EBValidationResult = defaultValidationFunction

  override func validateAndSetProp (candidateValue : String,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    let validationResult = validationFunction (candidateValue)
    var result = true
    switch validationResult {
    case EBValidationResult.ok :
      setProp (candidateValue)
    case EBValidationResult.rejectWithBeep :
      NSBeep ()
    case EBValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = String (format:"The value “%@” is invalid.", candidateValue)
      alert.informativeText = informativeText
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      if let window = inWindow {
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.postEvent ()
          }
        })
      }else{
        alert.runModal ()
      }
    }
    return result
  }
  
  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is String {
      setProp (unwValue as! String)
    }
  }

  
  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (mValue, forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (mValue, forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is String {
      setProp (unwValue as! String)
    }
  }


}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTransientProperty_String                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBTransientProperty_String : EBReadOnlyProperty_String {
  private var mValueCache : EBProperty <String>? = nil
  var computeFunction : Optional<() -> EBProperty <String>>

  override init () {
    super.init ()
  }

  override var prop : EBProperty <String> {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = .noSelection
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
//   EBReadOnlyProperty_NSColor                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadOnlyProperty_NSColor : EBAbstractProperty {
  var prop : EBProperty <NSColor> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadWriteProperty_NSColor                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadWriteProperty_NSColor : EBReadOnlyProperty_NSColor {
  func setProp (inValue : NSColor) { } // Abstract method
  func validateAndSetProp (candidateValue : NSColor, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBPropertyProxy_NSColor                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBPropertyProxy_NSColor : EBReadWriteProperty_NSColor {
  var readModelFunction : Optional < () -> EBProperty <NSColor> >
  var writeModelFunction : Optional < (NSColor) -> Void >
  var validateAndWriteModelFunction : Optional < (NSColor, NSWindow?) -> Bool >
  
  private var prop_cache : EBProperty <NSColor>?

  override init () {
    super.init ()
  }

  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : EBProperty <NSColor> {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  
  override func setProp (inValue : NSColor) {
    if let unWriteModelFunction = writeModelFunction {
      unWriteModelFunction (inValue)
    }
  }

  override func validateAndSetProp (candidateValue : NSColor,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = false
    if let unwValidateAndWriteModelFunction = validateAndWriteModelFunction {
      result = unwValidateAndWriteModelFunction (candidateValue, inWindow)
    }
    return result
  }
  
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBStoredProperty_NSColor                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBStoredProperty_NSColor : EBReadWriteProperty_NSColor {
  weak var undoManager : NSUndoManager?
  
  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : NSColor) {
    mValue = inValue
    super.init ()
  }

  private var mValue : NSColor {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object: oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSColor) {
    mValue = oldValue
  }
  
  override var prop : EBProperty <NSColor> { get { return .singleSelection (mValue) } }

  var propval : NSColor { get { return mValue } }

  override func setProp (inValue : NSColor) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (NSColor) -> EBValidationResult = defaultValidationFunction

  override func validateAndSetProp (candidateValue : NSColor,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    let validationResult = validationFunction (candidateValue)
    var result = true
    switch validationResult {
    case EBValidationResult.ok :
      setProp (candidateValue)
    case EBValidationResult.rejectWithBeep :
      NSBeep ()
    case EBValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = String (format:"The value “%@” is invalid.", candidateValue)
      alert.informativeText = informativeText
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      if let window = inWindow {
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.postEvent ()
          }
        })
      }else{
        alert.runModal ()
      }
    }
    return result
  }
  
  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSData {
      let possibleObject : AnyObject? = NSUnarchiver.unarchiveObjectWithData (unwValue as! NSData)
      if let unwPossibleObject : AnyObject = possibleObject where unwPossibleObject is NSColor {
        setProp (unwPossibleObject as! NSColor)
      }
    }
  }

  
  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSArchiver.archivedDataWithRootObject (mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSData {
      let possibleObject : AnyObject? = NSUnarchiver.unarchiveObjectWithData (unwValue as! NSData)
      if let unwPossibleObject : AnyObject = possibleObject where unwPossibleObject is NSColor {
        setProp (unwPossibleObject as! NSColor)
      }
    }
  }


}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTransientProperty_NSColor                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBTransientProperty_NSColor : EBReadOnlyProperty_NSColor {
  private var mValueCache : EBProperty <NSColor>? = nil
  var computeFunction : Optional<() -> EBProperty <NSColor>>

  override init () {
    super.init ()
  }

  override var prop : EBProperty <NSColor> {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = .noSelection
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
//   EBReadOnlyProperty_NSDate                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadOnlyProperty_NSDate : EBAbstractProperty {
  var prop : EBProperty <NSDate> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadWriteProperty_NSDate                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadWriteProperty_NSDate : EBReadOnlyProperty_NSDate {
  func setProp (inValue : NSDate) { } // Abstract method
  func validateAndSetProp (candidateValue : NSDate, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBPropertyProxy_NSDate                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBPropertyProxy_NSDate : EBReadWriteProperty_NSDate {
  var readModelFunction : Optional < () -> EBProperty <NSDate> >
  var writeModelFunction : Optional < (NSDate) -> Void >
  var validateAndWriteModelFunction : Optional < (NSDate, NSWindow?) -> Bool >
  
  private var prop_cache : EBProperty <NSDate>?

  override init () {
    super.init ()
  }

  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : EBProperty <NSDate> {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  
  override func setProp (inValue : NSDate) {
    if let unWriteModelFunction = writeModelFunction {
      unWriteModelFunction (inValue)
    }
  }

  override func validateAndSetProp (candidateValue : NSDate,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = false
    if let unwValidateAndWriteModelFunction = validateAndWriteModelFunction {
      result = unwValidateAndWriteModelFunction (candidateValue, inWindow)
    }
    return result
  }
  
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBStoredProperty_NSDate                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBStoredProperty_NSDate : EBReadWriteProperty_NSDate {
  weak var undoManager : NSUndoManager?
  
  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : NSDate) {
    mValue = inValue
    super.init ()
  }

  private var mValue : NSDate {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object: oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSDate) {
    mValue = oldValue
  }
  
  override var prop : EBProperty <NSDate> { get { return .singleSelection (mValue) } }

  var propval : NSDate { get { return mValue } }

  override func setProp (inValue : NSDate) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (NSDate) -> EBValidationResult = defaultValidationFunction

  override func validateAndSetProp (candidateValue : NSDate,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    let validationResult = validationFunction (candidateValue)
    var result = true
    switch validationResult {
    case EBValidationResult.ok :
      setProp (candidateValue)
    case EBValidationResult.rejectWithBeep :
      NSBeep ()
    case EBValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = String (format:"The value “%@” is invalid.", candidateValue)
      alert.informativeText = informativeText
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      if let window = inWindow {
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.postEvent ()
          }
        })
      }else{
        alert.runModal ()
      }
    }
    return result
  }
  
  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSDate {
      setProp (unwValue as! NSDate)
    }
  }

  
  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (mValue, forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (mValue, forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSDate {
      setProp (unwValue as! NSDate)
    }
  }


}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTransientProperty_NSDate                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBTransientProperty_NSDate : EBReadOnlyProperty_NSDate {
  private var mValueCache : EBProperty <NSDate>? = nil
  var computeFunction : Optional<() -> EBProperty <NSDate>>

  override init () {
    super.init ()
  }

  override var prop : EBProperty <NSDate> {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = .noSelection
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
//   EBReadOnlyProperty_NSFont                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadOnlyProperty_NSFont : EBAbstractProperty {
  var prop : EBProperty <NSFont> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBReadWriteProperty_NSFont                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBReadWriteProperty_NSFont : EBReadOnlyProperty_NSFont {
  func setProp (inValue : NSFont) { } // Abstract method
  func validateAndSetProp (candidateValue : NSFont, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBPropertyProxy_NSFont                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBPropertyProxy_NSFont : EBReadWriteProperty_NSFont {
  var readModelFunction : Optional < () -> EBProperty <NSFont> >
  var writeModelFunction : Optional < (NSFont) -> Void >
  var validateAndWriteModelFunction : Optional < (NSFont, NSWindow?) -> Bool >
  
  private var prop_cache : EBProperty <NSFont>?

  override init () {
    super.init ()
  }

  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : EBProperty <NSFont> {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = .noSelection
      }
      return prop_cache!
    }
  }

  
  override func setProp (inValue : NSFont) {
    if let unWriteModelFunction = writeModelFunction {
      unWriteModelFunction (inValue)
    }
  }

  override func validateAndSetProp (candidateValue : NSFont,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = false
    if let unwValidateAndWriteModelFunction = validateAndWriteModelFunction {
      result = unwValidateAndWriteModelFunction (candidateValue, inWindow)
    }
    return result
  }
  
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBStoredProperty_NSFont                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBStoredProperty_NSFont : EBReadWriteProperty_NSFont {
  weak var undoManager : NSUndoManager?
  
  var mValueExplorer : NSTextField? {
    didSet {
      mValueExplorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : NSFont) {
    mValue = inValue
    super.init ()
  }

  private var mValue : NSFont {
    didSet {
      if mValue != oldValue {
        mValueExplorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object: oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSFont) {
    mValue = oldValue
  }
  
  override var prop : EBProperty <NSFont> { get { return .singleSelection (mValue) } }

  var propval : NSFont { get { return mValue } }

  override func setProp (inValue : NSFont) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (NSFont) -> EBValidationResult = defaultValidationFunction

  override func validateAndSetProp (candidateValue : NSFont,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    let validationResult = validationFunction (candidateValue)
    var result = true
    switch validationResult {
    case EBValidationResult.ok :
      setProp (candidateValue)
    case EBValidationResult.rejectWithBeep :
      NSBeep ()
    case EBValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = String (format:"The value “%@” is invalid.", candidateValue)
      alert.informativeText = informativeText
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      if let window = inWindow {
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.postEvent ()
          }
        })
      }else{
        alert.runModal ()
      }
    }
    return result
  }
  
  func readInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    let value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSData {
      let possibleObject : AnyObject? = NSUnarchiver.unarchiveObjectWithData (unwValue as! NSData)
      if let unwPossibleObject : AnyObject = possibleObject where unwPossibleObject is NSFont {
        setProp (unwPossibleObject as! NSFont)
      }
    }
  }

  
  func storeInPreferencesWithKey (inKey : String) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSArchiver.archivedDataWithRootObject (mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    let value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSData {
      let possibleObject : AnyObject? = NSUnarchiver.unarchiveObjectWithData (unwValue as! NSData)
      if let unwPossibleObject : AnyObject = possibleObject where unwPossibleObject is NSFont {
        setProp (unwPossibleObject as! NSFont)
      }
    }
  }


}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTransientProperty_NSFont                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBTransientProperty_NSFont : EBReadOnlyProperty_NSFont {
  private var mValueCache : EBProperty <NSFont>? = nil
  var computeFunction : Optional<() -> EBProperty <NSFont>>

  override init () {
    super.init ()
  }

  override var prop : EBProperty <NSFont> {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = .noSelection
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

