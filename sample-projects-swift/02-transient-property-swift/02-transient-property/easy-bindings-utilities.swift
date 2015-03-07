import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   presentErrorWindow                                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var gErrorWindows : [NSWindow] = []
var origin = NSPoint (x:20.0, y:20.0)

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func presentErrorWindow (file : String!,
                         lineNumber : Int,
                         errorMessage : String) {
  var message = ""
  message += "File: " + file + "\n"
  message += "Line: \(lineNumber)\n"
  message += "Message: " + errorMessage + "\n"
  let r = NSRect (origin:origin, size:NSSize (width:300.0, height:200.0))
  origin.x += 20.0 ;
  origin.y += 20.0 ;
  var window = NSWindow.init (
    contentRect:r,
    styleMask:NSTitledWindowMask | NSClosableWindowMask,
    backing:NSBackingStoreType.Buffered,
    defer:true
  )
  window.title = "Outlet Error"
  let contentView : NSView! = window.contentView as! NSView
  let tfRect = NSInsetRect (contentView.bounds , 10.0, 10.0)
  var tf = NSTextField.init (frame:tfRect)
  tf.editable = false
  tf.selectable = true
  tf.font = NSFont.boldSystemFontOfSize (0.0)
  tf.textColor = NSColor.redColor ()
  tf.stringValue = message
  contentView.addSubview (tf)
  NSBeep () ;
  window.makeKeyAndOrderFront (nil)
  //---
  gErrorWindows.append (window)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   NSDictionary extension                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSDictionary {

  //-------------------------------------------------------------------------------------------------------------------*

  func readString (inKey : String) -> String {
    var result = ""
    let object : AnyObject? = valueForKey (inKey)
    if let s = object as? String {
      result = s
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func readNSColor (inKey : String) -> NSColor {
    var result = NSColor.blackColor ()
    let object : AnyObject? = valueForKey (inKey)
    if let d = object as? NSData {
      let c : AnyObject? = NSUnarchiver.unarchiveObjectWithData (d)
      if let color = c as? NSColor {
        result = color
      }
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func readInt (inKey : String) -> Int {
    var result : Int = 0
    let object : AnyObject? = valueForKey (inKey)
    if let d = object as? NSNumber {
      result = d.integerValue
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func readBool (inKey : String) -> Bool {
    var result : Bool = false
    let object : AnyObject? = valueForKey (inKey)
    if let d = object as? NSNumber {
      result = d.boolValue 
    }
    return result
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   NSArray extension                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSArray {
  func objectAtIndex (index:Int, file:String, line:Int) -> AnyObject! {
    if index < 0 {
      NSLog ("Negative index %d in '%@' line %d", index, file, line)
    }else if index >= count {
      NSLog ("index %d >= count %d in '%@' line %d", index, count, file, line)
    }
    return objectAtIndex (index)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Array<T> extension                                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension Array {
  func objectAtIndex (index:Int, file:String, line:Int) -> T {
    if index < 0 {
      NSLog ("Negative index %d in '%@' line %d", index, file, line)
    }else if index >= count {
      NSLog ("index %d >= count %d in '%@' line %d", index, count, file, line)
    }
    return self [index]
  }
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    getUniqueIndex                                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private var gUniqueIndex = 0

func getUniqueIndex () -> Int {
  gUniqueIndex += 1
  return gUniqueIndex
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMValidationResult                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum PMValidationResult {
  case ok
  case rejectWithBeep
  case rejectWithAlert (String /* informativeText */)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMUserClassName protocol                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol PMUserClassName : class {
  func userClassName () -> String
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTransientEventProtocol protocol                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol PMTransientEventProtocol : PMUserClassName {
  var transientEventIndex : PMTransientIndex { get }
  func noteModelDidChange ()
  func trigger ()
  func unregister ()
  var uniqueIndex : Int { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    NSTExtView extension                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSTextView {

  //-------------------------------------------------------------------------------------------------------------------*

  func displayAndScrollToEndOfText () {
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        let endOfText = NSRange (location:ts.length, length:0)
        scrollRangeToVisible (endOfText)
        displayIfNeeded ()
      }
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  func clear () {
    let str = NSAttributedString (string:"", attributes:nil)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.setAttributedString (str)
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendAttributedString (inAttributedString : NSAttributedString) {
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (inAttributedString)
        displayAndScrollToEndOfText ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendMessageString (inString : String) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : NSColor.blackColor()
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (str)
        displayAndScrollToEndOfText ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendMessageString (inString : String, color:NSColor) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : color
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (str)
        displayAndScrollToEndOfText ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendErrorString (inString : String) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : NSColor.redColor()
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (str)
        displayAndScrollToEndOfText ()
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMEnableProtocol protocol                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMEnableProtocol) protocol PMEnableProtocol {
  func setEnableFromBinding (flag : Bool)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    defaultValidationFunction                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func defaultValidationFunction<T> (proposedValue : T) -> PMValidationResult {
  return PMValidationResult.ok
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EntityPropertyProtocol                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol EntityPropertyProtocol {
  func descriptionForExplorer () -> String
  func embeddedNSObject () -> NSObject
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSObject : EntityPropertyProtocol {
  func descriptionForExplorer () -> String {
    return description
  }
  func embeddedNSObject () -> NSObject {
    return self
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension String : EntityPropertyProtocol {
  func descriptionForExplorer () -> String {
    return self
  }
  func embeddedNSObject () -> NSObject {
    return self as NSString
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension Int : EntityPropertyProtocol {
  func descriptionForExplorer () -> String {
    return String (format:"%d", self)
  }
  func embeddedNSObject () -> NSObject {
    return NSNumber (integer:self)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyProperty                                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMReadOnlyProperty <T : Equatable> : PMUserClassName {

  func userClassName () -> String { return "PMReadOnlyProperty<T>"}

  private let mDefaultValue : T
  
  init (_ inValue : T) {
    mDefaultValue = inValue
  }
  
  var value : T { get { return mDefaultValue } }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mObservers : [Int : PMTransientEventProtocol] = [:]
  
  func addObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMStoredProperty                                                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMStoredProperty <T : Equatable> : PMReadOnlyProperty <T> {

  override init (_ inValue : T) {
    mValue = inValue
    super.init (inValue)
  }

  private var mValue : T {
    didSet {
      if mValue != oldValue {
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }

  override var value :  T { get { return mValue } }

  func setValue (inValue : T) { mValue = inValue }

  override func userClassName () -> String { return "PMPreferencesProperty<T>"}

  //-------------------------------------------------------------------------------------------------------------------*
 
  var validationFunction : (T) -> PMValidationResult = defaultValidationFunction
  
  func validate (proposedValue : T) -> PMValidationResult {
    return validationFunction (proposedValue)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTransientProperty                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientProperty<T : Equatable> : PMReadOnlyProperty <T> {
  private var mValueCache : T? = nil
  private let mTransientIndex : PMTransientIndex
  var computeFunction : Optional<() -> T>
  
  init (_ inTransientIndex : PMTransientIndex, defaultValue : T) {
    mTransientIndex = inTransientIndex
    super.init (defaultValue)
  }

  override func userClassName () -> String { return "PMTransientProperty<T>"}
  
  override var value : T {
    get {
      if mValueCache == nil {
        if let unwrappedComputeFunction = computeFunction {
          mValueCache = unwrappedComputeFunction ()
        }else{
          mValueCache = mDefaultValue
        }
      }
      return mValueCache!
    }
  }

  private var mEvent : PMTransientEventProtocol?

  var event : PMTransientEventProtocol {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent<T> (self)
      }
      return mEvent!
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTransientPropertyEvent<T : Equatable> : PMTransientEventProtocol {
  weak private var mObserver : PMTransientProperty<T>? = nil
  private let mTransientIndex : PMTransientIndex
  
  func userClassName () -> String { return "PMTransientPropertyEvent<T>" }

  var transientEventIndex : PMTransientIndex { get { return mTransientIndex } }

  private let mPrivateUniqueIndex : Int

  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (_ inObject : PMTransientProperty<T>) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = inObject
    mTransientIndex = inObject.mTransientIndex
    noteObjectAllocation (self)
  }

  func noteModelDidChange () {
    mObserver?.mValueCache = nil
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    if let observer = mObserver {
      for (key, object) in observer.mObservers {
        postTransientEvent (object)
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

