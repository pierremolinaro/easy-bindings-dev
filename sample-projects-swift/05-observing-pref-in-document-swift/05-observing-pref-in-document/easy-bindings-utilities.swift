import Cocoa

//---------------------------------------------------------------------------*
//   presentErrorWindow                                                      *
//---------------------------------------------------------------------------*

var gErrorWindows : [NSWindow] = []
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
//   NSDictionary extension                                                  *
//---------------------------------------------------------------------------*

extension NSDictionary {

  //---------------------------------------------------------------------------*

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

  //---------------------------------------------------------------------------*

  func readInt64 (inKey : String) -> Int64 {
    var result : Int64 = 0
    let object : AnyObject = valueForKey (inKey)
    if let d = object as? NSNumber {
      result = d.longLongValue ()
    }
    return result
  }

  //---------------------------------------------------------------------------*

  func readBool (inKey : String) -> Bool {
    var result : Bool = false
    let object : AnyObject = valueForKey (inKey)
    if let d = object as? NSNumber {
      result = d.boolValue ()
    }
    return result
  }

}

//---------------------------------------------------------------------------*
//   PMSet                                                                   *
//---------------------------------------------------------------------------*

// https://github.com/evilpenguin/Swift-Stuff/blob/master/Set.swift
// https://gist.github.com/JaviSoto/1243db46afe5132034e2
// http://natashatherobot.com/swift-conform-to-sequence-protocol/

struct PMSet <T : AnyObject> : Sequence {
  var mSet = NSMutableSet ()

  init () {
  }

  init (array : PMArray <T>) {
    mSet.addObjectsFromArray (array.mArray)
  }
  
  init (set : PMSet <T>) {
    mSet = set.mSet.mutableCopy () as NSMutableSet
  }
  
  init (item : T) {
    mSet.addObject (item)
  }
  
  mutating func addObject (item : T) {
    mSet.addObject (item)
  }

  mutating func removeObject (item : T) {
    mSet.removeObject (item)
  }

  mutating func minusSet (s : PMSet <T>) {
    mSet.minusSet (s.mSet)
  }

  func count () -> Int {
    return mSet.count ()
  }
  
  func generate () -> PMSetGenerator<T> {
    return PMSetGenerator<T> (valueSet:mSet)
  }
}

//---------------------------------------------------------------------------*

struct PMSetGenerator <T : AnyObject> : Generator {
  let mSet : NSSet
  var mEnumerator : NSEnumerator
  
  init (valueSet : NSSet) {
    mSet = valueSet.copy () as NSSet
    mEnumerator = mSet.objectEnumerator ()
  }
  
  mutating func next () -> AnyObject? {
    return mEnumerator.nextObject ()
  }
}

//---------------------------------------------------------------------------*
//   PMArray                                                                 *
//---------------------------------------------------------------------------*

// https://github.com/evilpenguin/Swift-Stuff/blob/master/Set.swift
// https://gist.github.com/JaviSoto/1243db46afe5132034e2
// http://natashatherobot.com/swift-conform-to-sequence-protocol/

struct PMArray <T : AnyObject> : Sequence {
  var mArray = NSMutableArray ()

  init () {
  }
  
  init (item : T) {
    mArray.addObject (item)
  }
  
  mutating func addObject (item : T) {
    mArray.addObject (item)
  }

  mutating func removeObject (item : T) {
    mArray.removeObject (item)
  }

  func count () -> Int {
    return mArray.count ()
  }
  
  func lastObject () -> T {
    return mArray.lastObject () as T
  }
  
  mutating func removeLastObject () {
    mArray.removeLastObject ()
  }
  
  subscript (index: Int) -> T {
    get {
      return mArray.objectAtIndex (index) as T
    }
    set (newValue) {
      mArray.replaceObjectAtIndex (index, withObject:newValue)
    }
  }
  
  func generate () -> PMArrayGenerator<T> {
    return PMArrayGenerator<T> (valueArray:mArray)
  }
}

//---------------------------------------------------------------------------*

struct PMArrayGenerator <T : AnyObject> : Generator {
  let mArray : NSArray
  var mEnumerator : NSEnumerator
  
  init (valueArray : NSArray) {
    mArray = valueArray.copy () as NSArray
    mEnumerator = mArray.objectEnumerator ()
  }
  
  mutating func next () -> T? {
    return mEnumerator.nextObject () as? T
  }
}

//---------------------------------------------------------------------------*
