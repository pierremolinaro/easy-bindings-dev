import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   presentErrorWindow                                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var gErrorWindows : [NSWindow] = []
var origin = NSPoint (x:20.0, y:20.0)

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func presentErrorWindow (file : String!,
                         line : Int,
                         errorMessage : String) {
  var message = ""
  message += "File: " + file + "\n"
  message += "Line: \(line)\n"
  message += "Message: " + errorMessage + "\n"
  let r = NSRect (origin:origin, size:NSSize (width:300.0, height:200.0))
  origin.x += 20.0 ;
  origin.y += 20.0 ;
  let window = NSWindow.init (
    contentRect:r,
    styleMask:NSTitledWindowMask | NSClosableWindowMask,
    backing:NSBackingStoreType.Buffered,
    `defer`:true
  )
  window.title = "Outlet Error"
  let contentView : NSView! = window.contentView as NSView
  let tfRect = NSInsetRect (contentView.bounds , 10.0, 10.0)
  let tf = NSTextField.init (frame:tfRect)
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
//    EBValidationResult                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum EBValidationResult {
  case ok
  case rejectWithBeep
  case rejectWithAlert (String /* informativeText */)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBUserClassName protocol                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBUserClassName) protocol EBUserClassName {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBObject class                                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var gExplorerObjectIndex = 0

//······················································································································

@objc(EBObject) class EBObject : NSObject, EBUserClassName {
  let mExplorerObjectIndex : Int

  override init () {
    mExplorerObjectIndex = gExplorerObjectIndex
    gExplorerObjectIndex += 1
    super.init ()
    noteObjectAllocation (self)
  }
  
  deinit {
    noteObjectDeallocation (self)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBSimpleClass class                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBSimpleClass) class EBSimpleClass : EBObject {

  func populateExplorerWindow (inout y : CGFloat, view : NSView) {
  }

  func clearObjectExplorer () {
  }

  func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
  }

  func setUpWithDictionary (inDictionary : NSDictionary) {
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBSimpleController
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class EBSimpleController : EBOutletEvent {
  private let mPrivateObjects : [EBAbstractProperty]
  private let mPrivateOutlet : NSView
  private var mExplorerWindow : NSWindow?
  
  //····················································································································

  init (objects : [EBAbstractProperty], outlet : NSView) {
    mPrivateObjects = objects
    mPrivateOutlet = outlet
  }
  
  //····················································································································

  func showExplorerWindowAction (inSender : AnyObject) {
    if mExplorerWindow == nil {
      createAndPopulateObjectExplorerWindow ()
    }
    mExplorerWindow?.makeKeyAndOrderFront (inSender)
  }

  //···················································································································*
  //   createAndPopulateObjectExplorerWindow                                                                           *
  //···················································································································*

  func createAndPopulateObjectExplorerWindow () {
  //-------------------------------------------------- Create Window
    let r = NSRect (x:20.0, y:20.0, width:10.0, height:10.0)
    mExplorerWindow = NSWindow (
      contentRect:r,
      styleMask:NSTitledWindowMask | NSClosableWindowMask,
      backing:NSBackingStoreType.Buffered,
      `defer`:true,
      screen:nil
    )
  //-------------------------------------------------- Adding properties
    let view = NSView (frame:r)
    var y : CGFloat = 0.0
    for object in mPrivateObjects {
      createEntryForObjectNamed (
        "object",
        object:object,
        y:&y,
        view:view
      )
    }
    createEntryForOutletNamed (
     "Outlet",
      outlet:mPrivateOutlet,
      y:&y,
      view:view
    )
  //-------------------------------------------------- Finish Window construction
  //--- Resize View
    let viewFrame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)
    view.frame = viewFrame
  //--- Set content size
    mExplorerWindow?.setContentSize (NSSize (width:EXPLORER_ROW_WIDTH + 16.0, height:fmin (600.0, y)))
  //--- Set close button as 'remove window' button
    let closeButton : NSButton? = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = self
    closeButton!.action = "deleteWindowAction:"
  //--- Set window title
    let windowTitle = explorerIndexString (mExplorerObjectIndex) + className
    mExplorerWindow!.title = windowTitle
  //--- Add Scroll view
    let frame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)
    let sw = NSScrollView (frame:frame)
    sw.hasVerticalScroller = true
    sw.documentView = view
    mExplorerWindow!.contentView = sw
  }

  //···················································································································*
  //   deleteWindowAction                                                                                              *
  //···················································································································*

  final func deleteWindowAction (AnyObject) {
    clearObjectExplorer ()
  }

  //···················································································································*
  //   clearObjectExplorer                                                                                             *
  //···················································································································*

  final func clearObjectExplorer () {
    let closeButton = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = nil
    mExplorerWindow?.orderOut (nil)
    mExplorerWindow = nil
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    createEntryForAttributeNamed                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private let EXPLORER_ROW_HEIGHT : CGFloat = 20.0
private let FIRST_COLUMN_WIDTH : CGFloat = 40.0
private let SECOND_COLUMN_WIDTH : CGFloat = 220.0
private let THIRD_COLUMN_WIDTH : CGFloat = 220.0

let EXPLORER_ROW_WIDTH : CGFloat = FIRST_COLUMN_WIDTH + SECOND_COLUMN_WIDTH + THIRD_COLUMN_WIDTH

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func firstColumn (y : CGFloat) -> NSRect {
  return NSRect (x:0.0, y:y, width:FIRST_COLUMN_WIDTH, height:EXPLORER_ROW_HEIGHT)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func secondColumn (y : CGFloat) -> NSRect {
  return NSRect (x:FIRST_COLUMN_WIDTH, y:y, width:SECOND_COLUMN_WIDTH, height:EXPLORER_ROW_HEIGHT)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func thirdColumn (y : CGFloat) -> NSRect {
  return NSRect (x:FIRST_COLUMN_WIDTH + SECOND_COLUMN_WIDTH, y:y, width:SECOND_COLUMN_WIDTH, height:EXPLORER_ROW_HEIGHT)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private let explorerLetters = ["A", "B", "C", "D", "E", "F", "G", "H", "J", "K", "L",
                               "M", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]

func explorerIndexString (idx : Int) -> String {
  var result = String (idx % 10)
  var n = idx / 10
  result += String (n % 10)
  n /= 10
  result += explorerLetters [n % explorerLetters.count]
  n /= explorerLetters.count
  result += explorerLetters [n % explorerLetters.count]
  n /= explorerLetters.count
  result += explorerLetters [n % explorerLetters.count]
  n /= explorerLetters.count
  if n > 0 {
    result += String (n)
  }
  return result + " — "
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func createEntryForPropertyNamed (attributeName : String,
                                  idx : Int,
                                  inout y : CGFloat,
                                  view : NSView,
                                  inout observerExplorer : NSPopUpButton?,
                                  inout valueExplorer : NSTextField?) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
//--- Explorer popup button
  observerExplorer = NSPopUpButton (frame:firstColumn (y), pullsDown:true)
  observerExplorer?.font = font
  view.addSubview (observerExplorer!)
//--- Property textfield
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = explorerIndexString (idx) + attributeName
  tf.font = font
  view.addSubview (tf)
//--- Value textfield
  valueExplorer = NSTextField (frame:thirdColumn (y))
  valueExplorer?.enabled = true
  valueExplorer?.editable = false
  valueExplorer?.font = font
  view.addSubview (valueExplorer!)
//--- Update rect origin
  y += EXPLORER_ROW_HEIGHT
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    createEntryForOutletNamed
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func createEntryForOutletNamed (name : String,
                                outlet : NSView,
                                inout y : CGFloat,
                                view : NSView) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
//--- Property textfield
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = name
  tf.font = font
  view.addSubview (tf)
//--- Value textfield
  let vtf = NSTextField (frame:thirdColumn (y))
  vtf.enabled = true
  vtf.editable = false
  vtf.stringValue = outlet.className
  vtf.font = font
  view.addSubview (vtf)
//--- Update rect origin
  y += EXPLORER_ROW_HEIGHT
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    createEntryForObjectNamed
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func createEntryForObjectNamed (name : String,
                                object : EBObject,
                                inout y : CGFloat,
                                view : NSView) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
//--- Property textfield
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = name
  tf.font = font
  view.addSubview (tf)
//--- Value textfield
  let vtf = NSTextField (frame:thirdColumn (y))
  vtf.enabled = true
  vtf.editable = false
  vtf.stringValue = explorerIndexString (object.mExplorerObjectIndex) + _stdlib_getDemangledTypeName (object)
  vtf.font = font
  view.addSubview (vtf)
//--- Update rect origin
  y += EXPLORER_ROW_HEIGHT
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    createEntryForToOneRelationshipNamed
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func createEntryForToOneRelationshipNamed (relationshipName : String,
                                           idx : Int,
                                           inout y : CGFloat,
                                           view : NSView,
                                           inout valueExplorer : NSButton?) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = explorerIndexString (idx) + relationshipName
  tf.font = font
  view.addSubview (tf)
  valueExplorer = NSButton (frame:thirdColumn (y))
  valueExplorer?.font = font
  view.addSubview (valueExplorer!)
  y += EXPLORER_ROW_HEIGHT
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    createEntryForToManyRelationshipNamed
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func createEntryForToManyRelationshipNamed (relationshipName : String,
                                            idx : Int,
                                            inout y : CGFloat,
                                            view : NSView,
                                            inout valueExplorer : NSPopUpButton?) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = explorerIndexString (idx) + relationshipName
  tf.font = font
  view.addSubview (tf)
  valueExplorer = NSPopUpButton (frame:thirdColumn (y), pullsDown:true)
  valueExplorer?.font = font
  view.addSubview (valueExplorer!)
  y += EXPLORER_ROW_HEIGHT
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    NSTExtView extension                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSTextView {

  //····················································································································

  func displayAndScrollToEndOfText () {
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        let endOfText = NSRange (location:ts.length, length:0)
        scrollRangeToVisible (endOfText)
        displayIfNeeded ()
      }
    }
  }

  //····················································································································

  func clear () {
    let str = NSAttributedString (string:"", attributes:nil)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.setAttributedString (str)
      }
    }
  }

  //····················································································································

  func appendAttributedString (inAttributedString : NSAttributedString) {
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (inAttributedString)
        displayAndScrollToEndOfText ()
      }
    }
  }

  //····················································································································

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

  //····················································································································

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

  //····················································································································

  func appendErrorString (inString : String) {
    appendMessageString (inString, color:NSColor.redColor ())
  }
  
  //····················································································································

  func appendWarningString (inString : String) {
    appendMessageString (inString, color:NSColor.orangeColor ())
  }

  //····················································································································

  func appendSuccessString (inString : String) {
    appendMessageString (inString, color:NSColor.blueColor ())
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    defaultValidationFunction                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func defaultValidationFunction<T> (proposedValue : T) -> EBValidationResult {
  return EBValidationResult.ok
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBProperty                                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum EBProperty<T> {
  case noSelection
  case singleSelection (T)
  case multipleSelection
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private func compareIntProperties (left:EBProperty<Int>,
                                   right:EBProperty<Int>,
                                   function : (Int, Int) -> Bool) -> EBProperty<Bool> {
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

func > (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 > $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func >= (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 >= $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func < (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 < $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func <= (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 <= $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func == (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 == $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func != (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 != $1})
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private func combineBoolProperties (left:EBProperty<Bool>,
                                     right:EBProperty<Bool>,
                                     function : (Bool, Bool) -> Bool) -> EBProperty<Bool> {
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

func && (left:EBProperty<Bool>, right:EBProperty<Bool>) -> EBProperty<Bool> {
  return combineBoolProperties (left, right: right, function: {$0 && $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func || (left:EBProperty<Bool>, right:EBProperty<Bool>) -> EBProperty<Bool> {
  return combineBoolProperties (left, right: right, function: {$0 || $1})
}

//•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

func ^ (left:EBProperty<Bool>, right:EBProperty<Bool>) -> EBProperty<Bool> {
  return combineBoolProperties (left, right: right, function: {$0 != $1})
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

prefix func ! (operand:EBProperty<Bool>) -> EBProperty<Bool> {
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
//   EBReadOnlyEnumPropertyProtocol                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBReadOnlyEnumPropertyProtocol) protocol EBReadOnlyEnumPropertyProtocol {

  func addObserver (inObserver : EBEvent, postEvent inTrigger:Bool)

  func removeObserver (inObserver : EBEvent, postEvent inTrigger:Bool)

  func count () -> Int

  func rawValue () -> Int
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBEnumPropertyProtocol                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBEnumPropertyProtocol) protocol EBEnumPropertyProtocol : EBReadOnlyEnumPropertyProtocol {
  func setFromRawValue (rawValue : Int)
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBAbstractProperty                                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBAbstractProperty) class EBAbstractProperty : EBEvent {

  private final var mObservers = Set <EBEvent> ()
  
  final func addObserver (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObservers.insert (inObserver)
    updateObserverExplorer ()
    if inTrigger {
      inObserver.postEvent ()
    }
  }
 
  final func removeObserver (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObservers.remove (inObserver)
    updateObserverExplorer ()
    if inTrigger {
      inObserver.postEvent ()
    }
  }

  override func postEvent () {
    for object in mObservers {
      object.postEvent ()
    }
  }
  
  final var mObserverExplorer : NSPopUpButton? {
    didSet {
      updateObserverExplorer ()
    }
  }
  
  final func updateObserverExplorer () {
    if let observerExplorer = mObserverExplorer {
      observerExplorer.removeAllItems ()
      observerExplorer.addItemWithTitle (String (mObservers.count))
      observerExplorer.enabled = mObservers.count > 0
      for object : EBEvent in mObservers {
        let stringValue = explorerIndexString (object.mExplorerObjectIndex) + object.className
        observerExplorer.addItemWithTitle (stringValue)
        let item = observerExplorer.lastItem
        item?.target = object
        item?.action = "showExplorerWindowAction:"
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
