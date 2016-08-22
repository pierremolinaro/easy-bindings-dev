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

class TestApplication {

  private var mApplication : NSRunningApplication
  private var mLog : TestLog

  //····················································································································

  init (bundlePath : String, testLog: TestLog) throws {
    mLog = testLog
    let bundleUrl = URL (fileURLWithPath: bundlePath)
    let workspace = NSWorkspace.shared ()
    mLog.append ("*** Launching \(bundleUrl.lastPathComponent)")
    mApplication = try workspace.launchApplication (at:bundleUrl, configuration:[:])
    while !mApplication.isFinishedLaunching {
      mLog.append (".")
      usleep (1000)
      RunLoop.main.run (mode: RunLoopMode.defaultRunLoopMode, before: Date ())
    }
    mLog.append (" ok\n")
  }
  
  //····················································································································

  func preferenceWindow () throws -> AXUIElement {
    mLog.append ("*** Preferences Window\n")
    let pid = mApplication.processIdentifier
  //  print ("pid \(pid)")
    let element = AXUIElementCreateApplication (pid)
  //  print ("element \(element)")
    var result : CFArray?
    var resultCode = AXUIElementCopyAttributeNames (element, &result)
    if resultCode != .success {
      mLog.append ("  AXUIElementCopyAttributeNames returns \(resultCode)\n")
      throw NSError (domain: "AXUIElementCopyAttributeNames returns \(resultCode)", code: 0, userInfo: nil)
    }
    var result2 : CFTypeRef?
    resultCode = AXUIElementCopyAttributeValue (element, "AXWindows" as CFString, &result2)
    if resultCode != .success {
      mLog.append ("  AXUIElementCopyAttributeValue returns \(resultCode)\n")
      throw NSError (domain: "AXUIElementCopyAttributeValue returns \(resultCode)", code: 0, userInfo: nil)
    }
    if let array = result2 as! NSArray? {
      for item in array {
        let window = item as! AXUIElement
        resultCode = AXUIElementCopyAttributeValue (window, "AXIdentifier" as CFString, &result2)
        if let accessibilityName = result2 as? String, accessibilityName == "PrefWindow" {
          return window
        }
      }
      throw NSError (domain: "Cannot find the 'PrefWindow' window", code: 0, userInfo: nil)
    }else{
      mLog.append ("  result2 is not an instance of NSArray\n")
      throw NSError (domain: "result2 is not an instance of NSArray", code: 0, userInfo: nil)
    }
  }
  
  //····················································································································

  func textFieldValue (window : AXUIElement, identifier : String) throws -> String {
    mLog.append ("*** Getting \(identifier) text field value\n")
    var result : CFTypeRef?
    var resultCode = AXUIElementCopyAttributeValue (window, "AXChildren" as CFString, &result)
    // print ("resultCode \(resultCode), result \(result)")
    if resultCode != .success {
      mLog.append ("  AXUIElementCopyAttributeValue returns \(resultCode)\n")
      throw NSError (domain: "AXUIElementCopyAttributeValue returns \(resultCode)", code: 0, userInfo: nil)
    }else if let array = result as! NSArray? {
      for item in array {
        let textField = item as! AXUIElement
        resultCode = AXUIElementCopyAttributeValue (textField, "AXIdentifier" as CFString, &result)
        if let accessibilityName = result as? String, accessibilityName == identifier {
          resultCode = AXUIElementCopyAttributeValue (textField, "AXValue" as CFString, &result)
          if let s = result as? String {
            return s
          }else{
            throw NSError (domain: "AXUIElementCopyAttributeValue AXValue does not return a string", code: 0, userInfo: nil)
          }
        }
      }
      throw NSError (domain: "Cannot find the '\(identifier)' text field", code: 0, userInfo: nil)
    }else{
      mLog.append ("  result is not an instance of NSArray\n")
      throw NSError (domain: "result is not an instance of NSArray", code: 0, userInfo: nil)
    }
  }

  //····················································································································

  func setTextFieldValue (window : AXUIElement, identifier : String, value : String) throws {
    mLog.append ("*** Getting \(identifier) text field value\n")
    var result : CFTypeRef?
    var resultCode = AXUIElementCopyAttributeValue (window, "AXChildren" as CFString, &result)
    // print ("resultCode \(resultCode), result \(result)")
    if resultCode != .success {
      mLog.append ("  AXUIElementCopyAttributeValue returns \(resultCode)\n")
      throw NSError (domain: "AXUIElementCopyAttributeValue returns \(resultCode)", code: 0, userInfo: nil)
    }else if let array = result as! NSArray? {
      for item in array {
        let textField = item as! AXUIElement
        resultCode = AXUIElementCopyAttributeValue (textField, "AXIdentifier" as CFString, &result)
        if let accessibilityName = result as? String, accessibilityName == identifier {
          resultCode = AXUIElementSetAttributeValue (textField, "AXValue" as CFString, value as CFTypeRef)
          if resultCode != .success {
            throw NSError (domain: "AXUIElementSetAttributeValue returns \(resultCode)", code: 0, userInfo: nil)
          }
          resultCode = AXUIElementPerformAction (textField, kAXConfirmAction as CFString)
          if resultCode != .success {
            throw NSError (domain: "AXUIElementPerformAction returns \(resultCode)", code: 0, userInfo: nil)
          }
        }
      }
    }else{
      mLog.append ("  result is not an instance of NSArray\n")
      throw NSError (domain: "result is not an instance of NSArray", code: 0, userInfo: nil)
    }
  }

  //····················································································································
  
  func raiseError (_ error : Int) throws {
    throw NSError (domain: "User ", code: error, userInfo: nil)
  }
  
  //····················································································································

  func terminate () {
    mLog.append ("*** Terminate")
    mApplication.terminate ()
    while !mApplication.isTerminated {
      mLog.append (".")
      usleep (1000)
      RunLoop.main.run (mode: RunLoopMode.defaultRunLoopMode, before: Date ())
    }
    mLog.append (" ok\n")
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
