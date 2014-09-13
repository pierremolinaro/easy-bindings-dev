//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMNumberField) class PMNumberField : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMNumberField" }
 
  //-------------------------------------------------------------------------------------------------------------------*

  required init (coder: NSCoder!) {
    NSLog ("%@", __FUNCTION__)
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
      self.delegate = self
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
    NSLog ("%@", __FUNCTION__)
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

  //-------------------------------------------------------------------------------------------------------------------*

  var myIntegerValue : Int = 0 {
    didSet {
      self.integerValue = myIntegerValue
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    NSTextFieldDelegate delegate function                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func control (control: NSControl!,
                didFailToFormatString string: String!,
                errorDescription error: String!) -> Bool {
    NSLog ("%@", __FUNCTION__)
    let alert = NSAlert ()
    alert.messageText = error
    alert.informativeText = "Please provide a valid value."
    alert.addButtonWithTitle ("Ok")
    alert.addButtonWithTitle ("Discard Change")
    alert.beginSheetModalForWindow (control.window, completionHandler:{(response : NSModalResponse) -> Void in
      if response == NSAlertSecondButtonReturn { // Discard Change
//        control.currentEditor()?.discardEditing()
        self.integerValue = self.myIntegerValue
      }
    })
    return false
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
