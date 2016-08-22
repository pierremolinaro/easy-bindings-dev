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

@NSApplicationMain class AppDelegate : NSObject, NSApplicationDelegate {

  //····················································································································
  
  @IBOutlet weak var window : NSWindow!
  @IBOutlet var mTextView : NSTextView?

  //····················································································································

  func applicationDidFinishLaunching(_ aNotification: Notification) {
    let testLog = TestLog ()
    do {
      try test_01_simple_preferences (testLog)
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

