import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyEnumPropertyProtocol                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMReadOnlyEnumPropertyProtocol) protocol PMReadOnlyEnumPropertyProtocol {

  func addObserver (inObserver : PMTransientEvent, inTrigger:Bool)

  func removeObserver (inObserver : PMTransientEvent, inTrigger:Bool)

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

@objc(PMAbstractProperty) class PMAbstractProperty : PMUserClassName {

  func userClassName () -> String { return "PMAbstractProperty" }
  
  init () {
    noteObjectAllocation (self)
  }
  
  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mObservers : [Int : PMTransientEvent] = [:]
  
  func addObserver (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserver (inObserver : PMTransientEvent, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty_String                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_String : PMAbstractProperty {

  override func userClassName () -> String { return "PMReadOnlyProperty_String" }

  var value : String { get { return "" } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_String                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_String : PMReadOnlyProperty_String {
  override func userClassName () -> String { return "PMStoredProperty_String"}

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
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }

  func performUndo (oldValue : String) {
    mValue = oldValue
  }
  
  override var value :  String { get { return mValue } }

  func setValue (inValue : String) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (String) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : String) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_String                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_String : PMReadOnlyProperty_String {
  override func userClassName () -> String { return "PMTransientProperty_String"}

  private var mValueCache : String? = nil
  private let mTransientIndex : PMTransientIndex
  var computeFunction : Optional<() -> String>
  
  init (_ inTransientIndex : PMTransientIndex) {
    mTransientIndex = inTransientIndex
    super.init ()
  }

  override var value : String {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = ""
        }
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent_String (self)
      }
      return mEvent!
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientPropertyEvent_String : PMTransientEvent {
  override func userClassName () -> String { return "PMTransientPropertyEvent_String" }

  weak private var mObserver : PMTransientProperty_String? = nil
  private let mTransientIndex : PMTransientIndex

  override func transientEventIndex () -> PMTransientIndex { return mTransientIndex }
  
  init (_ inObject : PMTransientProperty_String) {
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
//   PMReadOnlyProperty_NSColor                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_NSColor : PMAbstractProperty {

  override func userClassName () -> String { return "PMReadOnlyProperty_NSColor" }

  var value : NSColor { get { return NSColor.blackColor () } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_NSColor                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_NSColor : PMReadOnlyProperty_NSColor {
  override func userClassName () -> String { return "PMStoredProperty_NSColor"}

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
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }

  func performUndo (oldValue : NSColor) {
    mValue = oldValue
  }

  override var value :  NSColor { get { return mValue } }

  func setValue (inValue : NSColor) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (NSColor) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : NSColor) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSColor                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSColor : PMReadOnlyProperty_NSColor {
  override func userClassName () -> String { return "PMTransientProperty_NSColor"}

  private var mValueCache : NSColor? = nil
  private let mTransientIndex : PMTransientIndex
  var computeFunction : Optional<() -> NSColor>
  
  init (_ inTransientIndex : PMTransientIndex) {
    mTransientIndex = inTransientIndex
    super.init ()
  }

  override var value : NSColor {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = NSColor.blackColor ()
        }
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent_NSColor (self)
      }
      return mEvent!
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientPropertyEvent_NSColor : PMTransientEvent {
  override func userClassName () -> String { return "PMTransientPropertyEvent_NSColor" }

  weak private var mObserver : PMTransientProperty_NSColor? = nil
  private let mTransientIndex : PMTransientIndex

  override func transientEventIndex () -> PMTransientIndex { return mTransientIndex }
  
  init (_ inObject : PMTransientProperty_NSColor) {
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
//   PMReadOnlyProperty_NSDate                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_NSDate : PMAbstractProperty {

  override func userClassName () -> String { return "PMReadOnlyProperty_NSDate" }

  var value : NSDate { get { return NSDate () } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_NSDate                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_NSDate : PMReadOnlyProperty_NSDate {
  override func userClassName () -> String { return "PMStoredProperty_NSDate"}

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
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }

  func performUndo (oldValue : NSDate) {
    mValue = oldValue
  }

  override var value :  NSDate { get { return mValue } }

  func setValue (inValue : NSDate) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (NSDate) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : NSDate) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_NSDate                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_NSDate : PMReadOnlyProperty_NSDate {
  override func userClassName () -> String { return "PMTransientProperty_NSDate"}

  private var mValueCache : NSDate? = nil
  private let mTransientIndex : PMTransientIndex
  var computeFunction : Optional<() -> NSDate>
  
  init (_ inTransientIndex : PMTransientIndex) {
    mTransientIndex = inTransientIndex
    super.init ()
  }

  override var value : NSDate {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = NSDate ()
        }
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent_NSDate (self)
      }
      return mEvent!
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientPropertyEvent_NSDate : PMTransientEvent {
  override func userClassName () -> String { return "PMTransientPropertyEvent_NSDate" }

  weak private var mObserver : PMTransientProperty_NSDate? = nil
  private let mTransientIndex : PMTransientIndex

  override func transientEventIndex () -> PMTransientIndex { return mTransientIndex }
  
  init (_ inObject : PMTransientProperty_NSDate) {
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
//   PMReadOnlyProperty_Int                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_Int : PMAbstractProperty {

  override func userClassName () -> String { return "PMReadOnlyProperty_Int" }

  var value : Int { get { return 0 } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_Int                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_Int : PMReadOnlyProperty_Int {
  override func userClassName () -> String { return "PMStoredProperty_Int"}

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
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }

  func performUndo (oldValue : Int) {
    mValue = oldValue
  }

  override var value :  Int { get { return mValue } }

  func setValue (inValue : Int) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (Int) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : Int) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Int                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Int : PMReadOnlyProperty_Int {
  override func userClassName () -> String { return "PMTransientProperty_Int"}

  private var mValueCache : Int? = nil
  private let mTransientIndex : PMTransientIndex
  var computeFunction : Optional<() -> Int>
  
  init (_ inTransientIndex : PMTransientIndex) {
    mTransientIndex = inTransientIndex
    super.init ()
  }

  override var value : Int {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = 0
        }
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent_Int (self)
      }
      return mEvent!
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientPropertyEvent_Int : PMTransientEvent {
  override func userClassName () -> String { return "PMTransientPropertyEvent_Int" }

  weak private var mObserver : PMTransientProperty_Int? = nil
  private let mTransientIndex : PMTransientIndex

  override func transientEventIndex () -> PMTransientIndex { return mTransientIndex }
  
  init (_ inObject : PMTransientProperty_Int) {
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
//   PMReadOnlyProperty_Bool                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty_Bool : PMAbstractProperty {

  override func userClassName () -> String { return "PMReadOnlyProperty_Bool" }

  var value : Bool { get { return false } } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty_Bool                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty_Bool : PMReadOnlyProperty_Bool {
  override func userClassName () -> String { return "PMStoredProperty_Bool"}

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
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }

  func performUndo (oldValue : Bool) {
    mValue = oldValue
  }

  override var value :  Bool { get { return mValue } }

  func setValue (inValue : Bool) { mValue = inValue }

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (Bool) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : Bool) -> PMValidationResult {
    return validationFunction (proposedValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty_Bool                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty_Bool : PMReadOnlyProperty_Bool {
  override func userClassName () -> String { return "PMTransientProperty_Bool"}

  private var mValueCache : Bool? = nil
  private let mTransientIndex : PMTransientIndex
  var computeFunction : Optional<() -> Bool>
  
  init (_ inTransientIndex : PMTransientIndex) {
    mTransientIndex = inTransientIndex
    super.init ()
  }

  override var value : Bool {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = false
        }
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEvent?

  var event : PMTransientEvent {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent_Bool (self)
      }
      return mEvent!
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientPropertyEvent_Bool : PMTransientEvent {
  override func userClassName () -> String { return "PMTransientPropertyEvent_Bool" }

  weak private var mObserver : PMTransientProperty_Bool? = nil
  private let mTransientIndex : PMTransientIndex

  override func transientEventIndex () -> PMTransientIndex { return mTransientIndex }
  
  init (_ inObject : PMTransientProperty_Bool) {
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
