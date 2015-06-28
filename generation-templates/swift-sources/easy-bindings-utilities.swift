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

@objc(EBObject) class EBObject : NSObject, EBUserClassName {

  override init () {
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

  func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
  }

  func clearObjectExplorer () {
  }

  func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
  }

  func setUpWithDictionary (inDictionary : NSDictionary) {
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    createEntryForAttributeNamed                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func secondColumn (inRect : NSRect) -> NSRect {
  var r = inRect
  r.origin.x += inRect.size.width + 2.0 ;
  return r
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func createEntryForAttributeNamed (attributeName : String,
                                   inout ioRect : NSRect,
                                   view : NSView) -> NSTextField {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
  let tf = NSTextField (frame:ioRect)
  tf.enabled = false
  tf.stringValue = attributeName
  tf.font = font
  view.addSubview (tf)
  let tff = NSTextField (frame:secondColumn (ioRect))
  tff.enabled = false
  tff.font = font
  view.addSubview (tff)
  ioRect.origin.y += ioRect.size.height
  return tff
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
//    defaultValidationFunction                                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

func defaultValidationFunction<T> (proposedValue : T) -> EBValidationResult {
  return EBValidationResult.ok
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
