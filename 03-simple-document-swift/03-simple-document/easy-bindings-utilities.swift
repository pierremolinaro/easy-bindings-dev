import Cocoa

//---------------------------------------------------------------------------*
//   presentErrorWindow                                                      *
//---------------------------------------------------------------------------*

var gErrorWindows : NSWindow [] = []
var origin = NSPoint (x:20.0, y:20.0)

//---------------------------------------------------------------------------*

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
    backing:NSBackingStoreBuffered,
    defer:true
  )
  window.setTitle ("Outlet Error")
  let contentView : NSView! = window.contentView () as NSView
  let tfRect = NSInsetRect (contentView.bounds (), 10.0, 10.0)
  var tf = NSTextField.init (frame:tfRect)
  tf.setEditable (false)
  tf.setSelectable (true)
  tf.setFont (NSFont.boldSystemFontOfSize (0.0))
  tf.setTextColor (NSColor.redColor ())
  tf.setStringValue (message)
  contentView.addSubview (tf)
  NSBeep () ;
  window.makeKeyAndOrderFront (nil)
  //---
  gErrorWindows += window
}

//---------------------------------------------------------------------------*

extension NSDictionary {

  func readString (inKey : String) -> String {
    var result = ""
    let object : AnyObject = valueForKey (inKey)
    if let s = object as? String {
      result = s
    }
    return result
  }

  //---------------------------------------------------------------------------*

  func readNSColor (inKey : String) -> NSColor {
    var result = NSColor.blackColor ()
    let object : AnyObject = valueForKey (inKey)
    if let d = object as? NSData {
      let c : AnyObject = NSUnarchiver.unarchiveObjectWithData (d)
      if let color = c as? NSColor {
        result = color
      }
    }
    return result
  }

}

//---------------------------------------------------------------------------*