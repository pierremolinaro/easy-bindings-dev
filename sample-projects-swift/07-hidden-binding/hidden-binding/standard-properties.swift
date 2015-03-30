import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMProperty                                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum PMProperty<T> {
  case noSelection
  case singleSelection (T)
  case multipleSelection
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

internal func compareIntProperties (left:PMProperty<Int>,
                                    right:PMProperty<Int>,
                                    function : (Int, Int) -> Bool) -> PMProperty<Bool> {
  switch left {
  case .noSelection :
    return .noSelection
  case .multipleSelection :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection, .singleSelection :
      return .multipleSelection
    }
  case .singleSelection (let vg) :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection :
      return .multipleSelection
    case .singleSelection (let vd) :
      return .singleSelection (function (vg, vd))
    }
  }
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func > (left:PMProperty<Int>, right:PMProperty<Int>) -> PMProperty<Bool> {
  return compareIntProperties (left, right, {$0 > $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func >= (left:PMProperty<Int>, right:PMProperty<Int>) -> PMProperty<Bool> {
  return compareIntProperties (left, right, {$0 >= $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func < (left:PMProperty<Int>, right:PMProperty<Int>) -> PMProperty<Bool> {
  return compareIntProperties (left, right, {$0 < $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func <= (left:PMProperty<Int>, right:PMProperty<Int>) -> PMProperty<Bool> {
  return compareIntProperties (left, right, {$0 <= $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func == (left:PMProperty<Int>, right:PMProperty<Int>) -> PMProperty<Bool> {
  return compareIntProperties (left, right, {$0 == $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func != (left:PMProperty<Int>, right:PMProperty<Int>) -> PMProperty<Bool> {
  return compareIntProperties (left, right, {$0 != $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func && (left:PMProperty<Bool>, right:PMProperty<Bool>) -> PMProperty<Bool> {
  switch left {
  case .noSelection :
    return .noSelection
  case .multipleSelection :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection, .singleSelection :
      return .multipleSelection
    }
  case .singleSelection (let vg) :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection :
      return .multipleSelection
    case .singleSelection (let vd) :
      return .singleSelection (vg && vd)
    }
  }
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func || (left:PMProperty<Bool>, right:PMProperty<Bool>) -> PMProperty<Bool> {
  switch left {
  case .noSelection :
    return .noSelection
  case .multipleSelection :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection, .singleSelection :
      return .multipleSelection
    }
  case .singleSelection (let vg) :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection :
      return .multipleSelection
    case .singleSelection (let vd) :
      return .singleSelection (vg || vd)
    }
  }
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

prefix func ! (operand:PMProperty<Bool>) -> PMProperty<Bool> {
  switch operand {
  case .noSelection :
    return .noSelection
  case .multipleSelection :
    return .multipleSelection
  case .singleSelection (let v) :
    return .singleSelection (!v)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyEnumPropertyProtocol                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMReadOnlyEnumPropertyProtocol) protocol PMReadOnlyEnumPropertyProtocol {

  func addObserver (inObserver : PMEvent, postEvent inTrigger:Bool)

  func removeObserver (inObserver : PMEvent, postEvent inTrigger:Bool)

  func count () -> Int

  func rawValue () -> Int
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMEnumPropertyProtocol                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMEnumPropertyProtocol) protocol PMEnumPropertyProtocol : PMReadOnlyEnumPropertyProtocol {
  func setFromRawValue (rawValue : Int)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMAbstractProperty                                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMAbstractProperty) class PMAbstractProperty : PMEvent {

  private var mObservers = Set <PMEvent> ()
  
  func addObserver (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObservers.insert (inObserver)
    if inTrigger {
      inObserver.postEvent ()
    }
  }
 
  func removeObserver (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObservers.remove (inObserver)
    if inTrigger {
      inObserver.postEvent ()
    }
  }

  override func postEvent () {
    for object in mObservers {
      object.postEvent ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty_String                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_String : PMAbstractProperty {
  var prop : PMProperty <String> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadWriteProperty_String                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadWriteProperty_String : PMReadOnlyProperty_String {
  func setProp (inValue : String) { } // Abstract method
  func validateAndSetProp (candidateValue : String, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMPropertyProxy_String                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMPropertyProxy_String : PMReadWriteProperty_String {
  var readModelFunction : Optional < () -> PMProperty <String> >
  var writeModelFunction : Optional < (String) -> Void >
  var validateAndWriteModelFunction : Optional < (String, NSWindow?) -> Bool >
  
  private var prop_cache : PMProperty <String>?
  
  override init () {
    super.init ()
  }
  
  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : PMProperty <String> {
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
//   PMStoredProperty_String                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_String : PMReadWriteProperty_String {
  weak var undoManager : NSUndoManager?
  
  var explorer : NSTextField? {
    didSet {
      explorer?.stringValue = mValue
    }
  }

  init (_ inValue : String) {
    mValue = inValue
    super.init ()
  }

  private var mValue : String {
    didSet {
      if mValue != oldValue {
        explorer?.stringValue = mValue
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object: oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : String) {
    mValue = oldValue
  }
  
  override var prop : PMProperty <String> { get { return .singleSelection (mValue) } }

  var propval : String { get { return mValue } }

  override func setProp (inValue : String) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (String) -> PMValidationResult = defaultValidationFunction

  override func validateAndSetProp (candidateValue : String,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    let validationResult = validationFunction (candidateValue)
    var result = true
    switch validationResult {
    case PMValidationResult.ok :
      setProp (candidateValue)
    case PMValidationResult.rejectWithBeep :
      NSBeep ()
    case PMValidationResult.rejectWithAlert (let informativeText) :
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
    var ud = NSUserDefaults.standardUserDefaults ()
    var value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is String {
      setProp (unwValue as! String)
    }
  }
  
  func storeInPreferencesWithKey (inKey : String) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (mValue, forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (mValue, forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    var value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is String {
      setProp (unwValue as! String)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_String                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_String : PMReadOnlyProperty_String {
  private var mValueCache : PMProperty <String>? = nil
  var computeFunction : Optional<() -> PMProperty <String>>

  override init () {
    super.init ()
  }

  override var prop : PMProperty <String> {
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
//   PMReadOnlyProperty_NSColor                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_NSColor : PMAbstractProperty {
  var prop : PMProperty<NSColor> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadWriteProperty_NSColor                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadWriteProperty_NSColor : PMReadOnlyProperty_NSColor {
  func setProp (inValue : NSColor) { } // Abstract method
  func validateAndSetProp (candidateValue : NSColor, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_NSColor                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_NSColor : PMReadWriteProperty_NSColor {
  weak var undoManager : NSUndoManager?

  var explorer : NSTextField? {
    didSet {
      explorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : NSColor) {
    mValue = inValue
    super.init ()
  }

  private var mValue : NSColor {
    didSet {
      if mValue != oldValue {
        explorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSColor) {
    mValue = oldValue
  }

  override var prop :  PMProperty <NSColor> { get { return .singleSelection (mValue) } }

  var propval : NSColor { get { return mValue } }

  override func setProp (inValue : NSColor) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (NSColor) -> PMValidationResult = defaultValidationFunction
  
  override func validateAndSetProp (candidateValue : NSColor,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    let validationResult = validationFunction (candidateValue)
    var result = true
    switch validationResult {
    case PMValidationResult.ok :
      setProp (candidateValue)
    case PMValidationResult.rejectWithBeep :
      NSBeep ()
    case PMValidationResult.rejectWithAlert (let informativeText) :
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
    var ud = NSUserDefaults.standardUserDefaults ()
    var value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSData {
      var possibleColor : AnyObject? = NSUnarchiver.unarchiveObjectWithData (unwValue as! NSData)
      if let unwPossibleColor : AnyObject = possibleColor where unwPossibleColor is NSColor {
        setProp (unwPossibleColor as! NSColor)
      }
    }
  }

  func storeInPreferencesWithKey (inKey : String) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSArchiver.archivedDataWithRootObject (mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    var value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSData {
      var possibleColor : AnyObject? = NSUnarchiver.unarchiveObjectWithData (unwValue as! NSData)
      if let unwPossibleColor : AnyObject = possibleColor where unwPossibleColor is NSColor {
        setProp (unwPossibleColor as! NSColor)
      }
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSColor                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSColor : PMReadOnlyProperty_NSColor {
  private var mValueCache : PMProperty <NSColor>? = nil
  var computeFunction : Optional<() -> PMProperty <NSColor> >
  
  override init () {
    super.init ()
  }

  override var prop : PMProperty <NSColor> {
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
//   PMReadOnlyProperty_NSDate                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_NSDate : PMAbstractProperty {
  var prop : PMProperty <NSDate> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_NSDate                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_NSDate : PMReadOnlyProperty_NSDate {
  weak var undoManager : NSUndoManager?

  var explorer : NSTextField? {
    didSet {
      explorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : NSDate) {
    mValue = inValue
    super.init ()
  }

  private var mValue : NSDate {
    didSet {
      if mValue != oldValue {
        explorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSDate) {
    mValue = oldValue
  }

  override var prop : PMProperty <NSDate> { get { return .singleSelection (mValue) } }

  var propval : NSDate { get { return mValue } }

  func setProp (inValue : NSDate) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (NSDate) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : NSDate) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

  func readInPreferencesWithKey (inKey : String) {
    var ud = NSUserDefaults.standardUserDefaults ()
    var value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSDate {
      setProp (unwValue as! NSDate)
    }
  }

  func storeInPreferencesWithKey (inKey : String) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (mValue, forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (mValue, forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    var value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSDate {
      setProp (unwValue as! NSDate)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSDate                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSDate : PMReadOnlyProperty_NSDate {
  private var mValueCache : PMProperty <NSDate>? = nil
  var computeFunction : Optional<() -> PMProperty <NSDate> >
  
  override init () {
    super.init ()
  }

  override var prop : PMProperty <NSDate> {
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
//   PMReadOnlyProperty_Int                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_Int : PMAbstractProperty {
  var prop : PMProperty <Int> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadWriteProperty_Int                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadWriteProperty_Int : PMReadOnlyProperty_Int {
  func setProp (inValue : Int) { } // Abstract method
  func validateAndSetProp (candidateValue : Int, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMPropertyProxy_Int                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMPropertyProxy_Int : PMReadWriteProperty_Int {
  var readModelFunction : Optional < () -> PMProperty <Int> >
  var writeModelFunction : Optional < (Int) -> Void >
  var validateAndWriteModelFunction : Optional < (Int, NSWindow?) -> Bool >
  
  private var prop_cache : PMProperty <Int>?
  
  override init () {
    super.init ()
  }
  
  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : PMProperty <Int> {
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
//   PMStoredProperty_Int                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_Int : PMReadWriteProperty_Int {
  weak var undoManager : NSUndoManager?

  var explorer : NSTextField? {
    didSet {
      explorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : Int) {
    mValue = inValue
    super.init ()
  }

  private var mValue : Int {
    didSet {
      if mValue != oldValue {
        explorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:NSNumber (integer:oldValue))
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : NSNumber) {
    mValue = oldValue.integerValue
  }

  override var prop : PMProperty<Int> { get { return .singleSelection (mValue) } }

  var propval : Int { get { return mValue } }

  override func setProp (inValue : Int) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (Int) -> PMValidationResult = defaultValidationFunction
  
  override func validateAndSetProp (candidateValue : Int,
                                    windowForSheet inWindow:NSWindow?) -> Bool {
    var result = true
    let validationResult = validationFunction (candidateValue)
    switch validationResult {
    case PMValidationResult.ok :
      setProp (candidateValue)
    case PMValidationResult.rejectWithBeep :
      result = false
      NSBeep ()
    case PMValidationResult.rejectWithAlert (let informativeText) :
      result = false
      let alert = NSAlert ()
      alert.messageText = String (format:"The value “%d” is invalid.", candidateValue)
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
    var ud = NSUserDefaults.standardUserDefaults ()
    var value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).integerValue)
    }
  }

  func storeInPreferencesWithKey (inKey : String) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSNumber (integer:mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSNumber (integer:mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    var value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).integerValue)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Int                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Int : PMReadOnlyProperty_Int {
  private var mValueCache : PMProperty <Int>? = nil
  var computeFunction : Optional<() -> PMProperty <Int> >
  
  override init () {
    super.init ()
  }

  override var prop : PMProperty <Int> {
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
//   PMReadOnlyProperty_Bool                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_Bool : PMAbstractProperty {
  var prop : PMProperty <Bool> { get { return .noSelection } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_Bool                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_Bool : PMReadOnlyProperty_Bool {
  weak var undoManager : NSUndoManager?

  var explorer : NSTextField? {
    didSet {
      explorer?.stringValue = mValue.description
    }
  }

  init (_ inValue : Bool) {
    mValue = inValue
    super.init ()
  }

  private var mValue : Bool {
    didSet {
      if mValue != oldValue {
        explorer?.stringValue = mValue.description
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
        postEvent ()
      }
    }
  }

  func performUndo (oldValue : Bool) {
    mValue = oldValue
  }

  override var prop : PMProperty <Bool> { get { return .singleSelection (mValue) } }

  var propval : Bool { get { return mValue } }

  func setProp (inValue : Bool) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (Bool) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : Bool) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

  func readInPreferencesWithKey (inKey : String) {
    var ud = NSUserDefaults.standardUserDefaults ()
    var value : AnyObject? = ud.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).boolValue)
    }
  }

  
  func storeInPreferencesWithKey (inKey : String) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (NSNumber (bool:mValue), forKey:inKey)
  }

  func storeInDictionary (ioDictionary:NSMutableDictionary, forKey inKey:String) {
    ioDictionary.setValue (NSNumber (bool:mValue), forKey:inKey)
  }

  func readFromDictionary (inDictionary:NSDictionary, forKey inKey:String) {
    var value : AnyObject? = inDictionary.objectForKey (inKey)
    if let unwValue : AnyObject = value where unwValue is NSNumber {
      setProp ((unwValue as! NSNumber).boolValue)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Bool                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Bool : PMReadOnlyProperty_Bool {
  private var mValueCache : PMProperty <Bool>? = nil
  var computeFunction : Optional<() -> PMProperty <Bool> >
  
  override init () {
    super.init ()
  }

  override var prop : PMProperty <Bool> {
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
