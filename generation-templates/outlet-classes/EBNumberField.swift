import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBNumberField                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBNumberField) class EBNumberField : NSTextField, EBUserClassName, NSTextFieldDelegate {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    self.delegate = self
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    self.delegate = self
    noteObjectAllocation (self)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mSendContinously : Bool = false
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    NSTextFieldDelegate delegate function                                                                          *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func controlTextDidChange (inNotification : NSNotification) {
    if mSendContinously {
      if let inputString = currentEditor()?.string {
        // NSLog ("inputString %@", inputString)
        let numberFormatter = self.formatter as! NSNumberFormatter
        let number = numberFormatter.numberFromString (inputString)
        if number == nil {
          control (
            self,
            didFailToFormatString:inputString, errorDescription:String (format:"The value “%@” is invalid.", inputString)
          )
        }else{
          NSApp.sendAction (self.action, to: self.target, from: self)
        }
      }
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    NSTextFieldDelegate delegate function                                                                          *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func control (control: NSControl,
                didFailToFormatString string: String,
                errorDescription error: String?) -> Bool {
    let alert = NSAlert ()
    if let window = control.window {
      alert.messageText = error
      alert.informativeText = "Please provide a valid value."
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) -> Void in
        if response == NSAlertSecondButtonReturn { // Discard Change
       //   self.integerValue = self.integerValue
        }
      })
    }
    return false
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*