//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

enum PMActionKind {
  case noAction
  case onEndEditing
  case sendContinously
}

//---------------------------------------------------------------------------------------------------------------------*
//   Controller_PMPrefs_myString_NSTextField_stringValue                                                               *
//---------------------------------------------------------------------------------------------------------------------*

@objc(Controller_PMPrefs_myString_NSTextField_stringValue)
class Controller_PMPrefs_myString_NSTextField_stringValue : NSObject, PMTriggerProtocol, NSTextFieldDelegate {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMTextField? = nil
  var mActionKind : PMActionKind

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs, outlet : PMTextField?, actionKind : PMActionKind) {
    mObject = object
    mOutlet = outlet
    mActionKind = actionKind
    super.init ()
    noteObjectAllocation (self)
    if mOutlet != nil {
      switch mActionKind {
      case .noAction :
        break ;
      case .onEndEditing :
        mOutlet!.target = self
        mOutlet!.action = "action:"
      case .sendContinously :
        mOutlet!.target = self
        mOutlet!.action = "action:"
        NSNotificationCenter.defaultCenter().addObserver (self,
          selector: "continouslySendAction:",
          name: NSControlTextDidChangeNotification,
          object: mOutlet
        )
      }
    }
    mObject?.addObserverOf_myString (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    if mActionKind == PMActionKind.sendContinously {
      NSNotificationCenter.defaultCenter().removeObserver (self,
        name: NSControlTextDidChangeNotification,
        object: mOutlet
      )
    }
    noteObjectDeallocation (self)
    mOutlet?.target = nil
    mOutlet?.action = nil
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func continouslySendAction (notification : NSNotification) {
    updateModel ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if (mOutlet != nil) && (mObject != nil) {
      if mOutlet!.stringValue != mObject!.myString {
        mOutlet!.stringValue = mObject!.myString
      }
/*      if mActionKind == PMActionKind.onEndEditing {
        let enable = mObject!.myString != "no"
        if mOutlet!.enableFromValueBinding != enable {
          mOutlet!.enableFromValueBinding = enable
        }
      }*/
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    updateModel ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func updateModel () {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.myString) {
      mObject!.myString = mOutlet!.stringValue
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex = 0

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//---------------------------------------------------------------------------------------------------------------------*
//   Controller_PMPrefs_myEnable_NSButton_ckecked                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

@objc(Controller_PMPrefs_myEnable_NSButton_ckecked)
class Controller_PMPrefs_myEnable_NSButton_ckecked : NSObject, PMTriggerProtocol {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: NSButton? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs, outlet : NSButton?) {
    mObject = object
    mOutlet = outlet
    super.init ()
    noteObjectAllocation (self)
    mOutlet?.target = self
    mOutlet?.action = "action:"
    mObject?.addObserverOf_myEnable (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
    mOutlet?.target = nil
    mOutlet?.action = nil
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.enabled != mObject!.myEnable) {
      mOutlet!.state = Int (mObject!.myEnable)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.enabled != mObject!.myEnable) {
      mObject?.myEnable = mOutlet!.state != 0
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex = 0

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//---------------------------------------------------------------------------------------------------------------------*
//   Controller_PMPrefs_myEnable_NSTextField_enabled                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

@objc(Controller_PMPrefs_myEnable_NSTextField_enabled)
class Controller_PMPrefs_myEnable_NSTextField_enabled : NSObject, PMTriggerProtocol {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs, outlet : PMTextField?) {
    mObject = object
    mOutlet = outlet
    super.init ()
    noteObjectAllocation (self)
    mObject?.addObserverOf_myEnable (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.enabled != mObject!.myEnable) {
      mOutlet!.enableFromEnableBinding = mObject!.myEnable != 0
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex = 0

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//---------------------------------------------------------------------------------------------------------------------*
