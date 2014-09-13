//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTextField) class PMTextField : NSTextField, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMTextField" }
 
  //-------------------------------------------------------------------------------------------------------------------*

  required init (coder: NSCoder!) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    if mSendContinously {
      NSNotificationCenter.defaultCenter().removeObserver (self,
        name: NSControlTextDidChangeNotification,
        object: self
      )
    }
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mSendContinously : Bool = false
  
  //-------------------------------------------------------------------------------------------------------------------*

  func setSendContinously (flag : Bool) {
    if mSendContinously != flag {
      mSendContinously = flag
      if mSendContinously {
        NSNotificationCenter.defaultCenter().addObserver (self,
          selector: "continouslySendAction:",
          name: NSControlTextDidChangeNotification,
          object: self
        )
      }else{
        NSNotificationCenter.defaultCenter().removeObserver (self,
          name: NSControlTextDidChangeNotification,
          object: self
        )
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func continouslySendAction (notification : NSNotification) {
    NSApp.sendAction (self.action, to: self.target, from: self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var enableFromEnableBinding : Bool = true {
    didSet {
      self.enabled = enableFromEnableBinding & enableFromValueBinding
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var enableFromValueBinding : Bool = true {
    didSet {
      self.enabled = enableFromEnableBinding & enableFromValueBinding
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
