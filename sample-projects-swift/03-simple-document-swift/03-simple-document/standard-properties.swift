import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMSelectionKind                                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum PMSelectionKind {
  case noSelection
  case singleSelection
  case multipleSelection
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func & (left : PMSelectionKind, right : PMSelectionKind) -> PMSelectionKind {
  switch left {
  case .noSelection :
    return .noSelection
  case .singleSelection :
    return right
  case .multipleSelection :
    return (right == .noSelection) ? .noSelection : .multipleSelection
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func &= (receiver : PMSelectionKind, operand : PMSelectionKind) -> PMSelectionKind {
  switch receiver {
  case .noSelection :
    return .noSelection
  case .singleSelection :
    return operand
  case .multipleSelection :
    return (operand == .noSelection) ? .noSelection : .multipleSelection
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
  var prop : (String, PMSelectionKind) { get { return ("", .singleSelection) } } // Abstract method
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
  var readModelFunction : Optional < () -> (String, PMSelectionKind) >
  var writeModelFunction : Optional < (String) -> Void >
  var validateAndWriteModelFunction : Optional < (String, NSWindow?) -> Bool >
  
  private var prop_cache : (String, PMSelectionKind)?
  
  override init () {
    super.init ()
  }
  
  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : (String, PMSelectionKind) {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = ("", .noSelection)
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
  
  override var prop : (String, PMSelectionKind) { get { return (mValue, .singleSelection) } }

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
  
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_String                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_String : PMReadOnlyProperty_String {
  private var mValueCache : (String, PMSelectionKind)? = nil
  var computeFunction : Optional<() -> (String, PMSelectionKind)>

  override init () {
    super.init ()
  }

  override var prop : (String, PMSelectionKind) {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = ("", .noSelection)
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
  var prop : (NSColor, PMSelectionKind) { get { return (NSColor.blackColor (), .noSelection) } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_NSColor                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_NSColor : PMReadOnlyProperty_NSColor {
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

  override var prop :  (NSColor, PMSelectionKind) { get { return (mValue, .singleSelection) } }

  func setProp (inValue : NSColor) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (NSColor) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : NSColor) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSColor                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSColor : PMReadOnlyProperty_NSColor {
  private var mValueCache : (NSColor, PMSelectionKind)? = nil
  var computeFunction : Optional<() -> (NSColor, PMSelectionKind)>
  
  override init () {
    super.init ()
  }

  override var prop : (NSColor, PMSelectionKind) {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = (NSColor.blackColor (), .noSelection)
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
  var prop : (NSDate, PMSelectionKind) { get { return (NSDate (), .noSelection) } } // Abstract method
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

  override var prop : (NSDate, PMSelectionKind) { get { return (mValue, .singleSelection) } }

  func setProp (inValue : NSDate) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (NSDate) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : NSDate) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSDate                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSDate : PMReadOnlyProperty_NSDate {
  private var mValueCache : (NSDate, PMSelectionKind)? = nil
  var computeFunction : Optional<() -> (NSDate, PMSelectionKind)>
  
  override init () {
    super.init ()
  }

  override var prop : (NSDate, PMSelectionKind) {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = (NSDate (), .noSelection)
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
  var prop : (Int, PMSelectionKind) { get { return (0, .noSelection) } } // Abstract method
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
  var readModelFunction : Optional < () -> (Int, PMSelectionKind) >
  var writeModelFunction : Optional < (Int) -> Void >
  var validateAndWriteModelFunction : Optional < (Int, NSWindow?) -> Bool >
  
  private var prop_cache : (Int, PMSelectionKind)?
  
  override init () {
    super.init ()
  }
  
  override func postEvent() {
    if prop_cache != nil {
      prop_cache = nil
      super.postEvent()
    }
  }

  override var prop : (Int, PMSelectionKind) {
    get {
      if let unReadModelFunction = readModelFunction where prop_cache == nil {
        prop_cache = unReadModelFunction ()
      }
      if prop_cache == nil {
        prop_cache = (0, .noSelection)
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

class PMStoredProperty_Int : PMReadOnlyProperty_Int {
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

  override var prop : (Int, PMSelectionKind) { get { return (mValue, .singleSelection) } }

  func setProp (inValue : Int) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (Int) -> PMValidationResult = defaultValidationFunction
  
  func validateAndSetProp (candidateValue : Int,
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

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Int                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Int : PMReadOnlyProperty_Int {
  private var mValueCache : (Int, PMSelectionKind)? = nil
  var computeFunction : Optional<() -> (Int, PMSelectionKind)>
  
  override init () {
    super.init ()
  }

  override var prop : (Int, PMSelectionKind) {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = (0, .noSelection)
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
  var prop : (Bool, PMSelectionKind) { get { return (false, .noSelection) } } // Abstract method
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

  override var prop : (Bool, PMSelectionKind) { get { return (mValue, .singleSelection) } }

  func setProp (inValue : Bool) { mValue = inValue }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
 
  var validationFunction : (Bool) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : Bool) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Bool                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Bool : PMReadOnlyProperty_Bool {
  private var mValueCache : (Bool, PMSelectionKind)? = nil
  var computeFunction : Optional<() -> (Bool, PMSelectionKind)>
  
  override init () {
    super.init ()
  }

  override var prop : (Bool, PMSelectionKind) {
    get {
      if let unwrappedComputeFunction = computeFunction where mValueCache == nil {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = (false, .noSelection)
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
