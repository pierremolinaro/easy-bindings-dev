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

@objc(PMUserClassName) protocol PMUserClassName {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMObject class                                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMObject) class PMObject : NSObject, PMUserClassName {

  override init () {
    super.init ()
    noteObjectAllocation (self)
  }
  
  deinit {
    noteObjectDeallocation (self)
  }
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

func defaultValidationFunction<T> (proposedValue : T) -> PMValidationResult {
  return PMValidationResult.ok
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
