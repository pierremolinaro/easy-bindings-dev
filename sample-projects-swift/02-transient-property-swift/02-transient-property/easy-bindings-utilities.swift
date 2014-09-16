import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//   presentErrorWindow                                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

var gErrorWindows : [NSWindow] = []
var origin = NSPoint (x:20.0, y:20.0)

//---------------------------------------------------------------------------------------------------------------------*

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
  let contentView : NSView! = window.contentView as NSView
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

//---------------------------------------------------------------------------------------------------------------------*
//   NSDictionary extension                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   NSArray extension                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//    getUniqueIndex                                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

private var gUniqueIndex = 0

func getUniqueIndex () -> Int {
  gUniqueIndex += 1
  return gUniqueIndex
}

//---------------------------------------------------------------------------------------------------------------------*
//    PMValidationResult                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

enum PMValidationResult {
  case ok
  case rejectWithBeep
  case rejectWithAlert (String /* informativeText */)
}

//---------------------------------------------------------------------------------------------------------------------*
//    PMUserClassName protocol                                                                                         *
//---------------------------------------------------------------------------------------------------------------------*

protocol PMUserClassName {
  func userClassName () -> String
}

//---------------------------------------------------------------------------------------------------------------------*
//    PMTriggerProtocol protocol                                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

protocol PMTriggerProtocol : PMUserClassName {
  var mTransientIndex : PMTransientIndex { get }
  func noteTransientDidChange ()
  func trigger ()
  func unregister ()
  var uniqueIndex : Int { get }
}


//---------------------------------------------------------------------------------------------------------------------*
//    NSTExtView extension                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

extension NSTextView {

  //-------------------------------------------------------------------------------------------------------------------*

  func displayAndScrollToEndOfText () {
    var textStorage = layoutManager.textStorage
    let endOfText = NSRange (location:textStorage.length, length:0)
    scrollRangeToVisible (endOfText)
    displayIfNeeded ()
  }


  //-------------------------------------------------------------------------------------------------------------------*

  func clear () {
    let str = NSAttributedString (string:"", attributes:nil)
    var textStorage = layoutManager.textStorage
    textStorage.setAttributedString (str)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendAttributedString (inAttributedString : NSAttributedString) {
    var textStorage = layoutManager.textStorage
    textStorage.appendAttributedString (inAttributedString)
    displayAndScrollToEndOfText ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendMessageString (inString : String) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : NSColor.blackColor()
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    var textStorage = layoutManager.textStorage
    textStorage.appendAttributedString (str)
    displayAndScrollToEndOfText ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendMessageString (inString : String, color:NSColor) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : color
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    var textStorage = layoutManager.textStorage
    textStorage.appendAttributedString (str)
    displayAndScrollToEndOfText ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func appendErrorString (inString : String) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : NSColor.redColor()
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    var textStorage = layoutManager.textStorage
    textStorage.appendAttributedString (str)
    displayAndScrollToEndOfText ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*
