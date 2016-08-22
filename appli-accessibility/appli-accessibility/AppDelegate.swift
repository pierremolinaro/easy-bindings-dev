//
//  AppDelegate.swift
//  appli-accessibility
//
//  Created by Pierre Molinaro on 21/08/2016.
//  Copyright © 2016 Pierre Molinaro. All rights reserved.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func randomString () -> String {
  let characters = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
                    "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
                    "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m",
                    "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z",
                    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]
  var result = ""
  for _ in 0 ..< 16 {
    let idx = UInt (arc4random ()) % UInt (characters.count)
    result += characters [Int (idx)]
  }
  return result
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@NSApplicationMain class AppDelegate : NSObject, NSApplicationDelegate {

  //····················································································································
  
  @IBOutlet weak var window : NSWindow!
  @IBOutlet var mTextView : NSTextView?

  //····················································································································

  func applicationDidFinishLaunching(_ aNotification: Notification) {
    let appPath = "/Volumes/dev-svn/easy-bindings/sample-projects-swift/01-simple-preferences-swift/build/Default/simple-preferences.app"
    let testLog = TestLog ()
    do {
    //--- Launch app
      var app = try TestApplication (bundlePath: appPath, testLog:testLog)
    //--- Preferences window
      var window = try app.preferenceWindow ()
    //--- Read text fields
      var myTextField = try app.textFieldValue (window: window, identifier: "myTextField")
      var myOtherTextField = try app.textFieldValue (window: window, identifier: "myOtherTextField")
      var myObserverTextField = try app.textFieldValue (window: window, identifier: "myObserverTextField")
      if myTextField != myOtherTextField {
        try app.raiseError (1)
      }
      if myTextField != myObserverTextField {
        try app.raiseError (2)
      }
    //--- Change text fields and check
      let newString = randomString ()
      try app.setTextFieldValue (window: window, identifier: "myOtherTextField", value:newString)
      myTextField = try app.textFieldValue (window: window, identifier: "myTextField")
      myOtherTextField = try app.textFieldValue (window: window, identifier: "myOtherTextField")
      myObserverTextField = try app.textFieldValue (window: window, identifier: "myObserverTextField")
      if newString != myTextField {
        try app.raiseError (3)
      }
      if newString != myOtherTextField {
        try app.raiseError (4)
      }
      if newString != myObserverTextField {
        try app.raiseError (5)
      }
    //--- Terminate app
      app.terminate ()
    //--- Relaunch app
      app = try TestApplication (bundlePath: appPath, testLog:testLog)
    //--- Preferences window
      window = try app.preferenceWindow ()
    //--- Check text fields has new value
      myTextField = try app.textFieldValue (window: window, identifier: "myTextField")
      myOtherTextField = try app.textFieldValue (window: window, identifier: "myOtherTextField")
      myObserverTextField = try app.textFieldValue (window: window, identifier: "myObserverTextField")
      if newString != myTextField {
        try app.raiseError (6)
      }
      if newString != myOtherTextField {
        try app.raiseError (7)
      }
      if newString != myObserverTextField {
        try app.raiseError (8)
      }
    //--- Terminate app
      app.terminate ()
    //--- Self terminate
      NSApp.terminate (nil)
    }catch let error {
      mTextView?.string = testLog.log ()
      NSApp.presentError (error)
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

