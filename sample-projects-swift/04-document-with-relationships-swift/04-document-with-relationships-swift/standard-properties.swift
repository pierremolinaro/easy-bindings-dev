import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyEnumPropertyProtocol                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMReadOnlyEnumPropertyProtocol) protocol PMReadOnlyEnumPropertyProtocol {

  func addObserver (inObserver : PMEvent, inTrigger:Bool)

  func removeObserver (inObserver : PMEvent, inTrigger:Bool)

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

@objc(PMAbstractProperty) class PMAbstractProperty : PMObject {

  private var mObservers = Set <PMEvent> ()
  
  func addObserver (inObserver : PMEvent, inTrigger:Bool) {
    mObservers.insert (inObserver)
    if inTrigger {
      inObserver.postEvent ()
    }
  }
 
  func removeObserver (inObserver : PMEvent, inTrigger:Bool) {
    mObservers.remove (inObserver)
    if inTrigger {
      inObserver.postEvent ()
    }
  }

  func postEvents () {
    for object in mObservers {
      object.postEvent ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty_String                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_String : PMAbstractProperty {

  var prop : String { get { return "" } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_String                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_String : PMReadOnlyProperty_String {
  var undoManager : NSUndoManager?
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
        postEvents ()
      }
    }
  }

  func performUndo (oldValue : String) {
    mValue = oldValue
  }
  
  override var prop :  String { get { return mValue } }

  func setProp (inValue : String) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (String) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : String) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_String                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_String : PMReadOnlyProperty_String, PMTransientPropertyProtocol {
  private var mValueCache : String? = nil
  var computeFunction : Optional<() -> String?>

  override init () {
    super.init ()
  }

  override var prop : String {
    get {
      if mValueCache == nil, let unwrappedComputeFunction = computeFunction {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = ""
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientEvent (self)
      }
      return mEvent!
    }
  }

  func noteModelDidChange () {
    if mValueCache != nil {
      mValueCache = nil
      postEvents ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty_NSColor                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_NSColor : PMAbstractProperty {
  var prop : NSColor { get { return NSColor.blackColor () } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_NSColor                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_NSColor : PMReadOnlyProperty_NSColor {
  var undoManager : NSUndoManager?

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
        postEvents ()
      }
    }
  }

  func performUndo (oldValue : NSColor) {
    mValue = oldValue
  }

  override var prop :  NSColor { get { return mValue } }

  func setProp (inValue : NSColor) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (NSColor) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : NSColor) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSColor                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSColor : PMReadOnlyProperty_NSColor, PMTransientPropertyProtocol {
  private var mValueCache : NSColor? = nil
  var computeFunction : Optional<() -> NSColor?>
  
  override init () {
    super.init ()
  }

  override var prop : NSColor {
    get {
      if mValueCache == nil, let unwrappedComputeFunction = computeFunction {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = NSColor.blackColor ()
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientEvent (self)
      }
      return mEvent!
    }
  }

  func noteModelDidChange () {
    if mValueCache != nil {
      mValueCache = nil
      postEvents ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty_NSDate                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_NSDate : PMAbstractProperty {
  var prop : NSDate { get { return NSDate () } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_NSDate                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_NSDate : PMReadOnlyProperty_NSDate {
  var undoManager : NSUndoManager?

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
        postEvents ()
      }
    }
  }

  func performUndo (oldValue : NSDate) {
    mValue = oldValue
  }

  override var prop :  NSDate { get { return mValue } }

  func setProp (inValue : NSDate) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (NSDate) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : NSDate) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSDate                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSDate : PMReadOnlyProperty_NSDate, PMTransientPropertyProtocol {
  private var mValueCache : NSDate? = nil
  var computeFunction : Optional<() -> NSDate?>
  
  override init () {
    super.init ()
  }

  override var prop : NSDate {
    get {
      if mValueCache == nil,let unwrappedComputeFunction = computeFunction {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = NSDate ()
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientEvent (self)
      }
      return mEvent!
    }
  }
  func noteModelDidChange () {
    if mValueCache != nil {
      mValueCache = nil
      postEvents ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty_Int                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_Int : PMAbstractProperty {
  var prop : Int { get { return 0 } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_Int                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_Int : PMReadOnlyProperty_Int {
  var undoManager : NSUndoManager?

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
        undoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
        postEvents ()
      }
    }
  }

  func performUndo (oldValue : Int) {
    mValue = oldValue
  }

  override var prop :  Int { get { return mValue } }

  func setProp (inValue : Int) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (Int) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : Int) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Int                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Int : PMReadOnlyProperty_Int, PMTransientPropertyProtocol {
  private var mValueCache : Int? = nil
  var computeFunction : Optional<() -> Int?>
  
  override init () {
    super.init ()
  }

  override var prop : Int {
    get {
      if mValueCache == nil, let unwrappedComputeFunction = computeFunction {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = 0
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientEvent (self)
      }
      return mEvent!
    }
  }

  func noteModelDidChange () {
    if mValueCache != nil {
      mValueCache = nil
      postEvents ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty_Bool                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_Bool : PMAbstractProperty {
  var prop : Bool { get { return false } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_Bool                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_Bool : PMReadOnlyProperty_Bool {
  var undoManager : NSUndoManager?

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
        postEvents ()
      }
    }
  }

  func performUndo (oldValue : Bool) {
    mValue = oldValue
  }

  override var prop :  Bool { get { return mValue } }

  func setProp (inValue : Bool) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (Bool) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : Bool) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Bool                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Bool : PMReadOnlyProperty_Bool, PMTransientPropertyProtocol {
  private var mValueCache : Bool? = nil
  var computeFunction : Optional<() -> Bool?>
  
  override init () {
    super.init ()
  }

  override var prop : Bool {
    get {
      if mValueCache == nil, let unwrappedComputeFunction = computeFunction {
        mValueCache = unwrappedComputeFunction ()
      }
      if mValueCache == nil {
        mValueCache = false
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientEvent (self)
      }
      return mEvent!
    }
  }

  func noteModelDidChange () {
    if mValueCache != nil {
      mValueCache = nil
      postEvents ()
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*