//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMIntField) class PMIntField : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    self.delegate = self
    noteObjectAllocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var enableFromEnableBinding : Bool = true {
    didSet {
      self.enabled = enableFromEnableBinding && enableFromValueBinding
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var enableFromValueBinding : Bool = true {
    didSet {
      self.enabled = enableFromEnableBinding && enableFromValueBinding
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

  //-------------------------------------------------------------------------------------------------------------------*
  //    NSTextFieldDelegate delegate function                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*
  
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
          self.integerValue = self.myIntegerValue
        }
      })
    }
    return false
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  value binding                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMIntField_value?
  private var mSendContinously : Bool = false

  func bind_value (object:PMStoredProperty_Int, file:String, line:Int, sendContinously:Bool) {
    mSendContinously = sendContinously
    mValueController = Controller_PMIntField_value (object:object, outlet:self, file:file, line:line, sendContinously:sendContinously)
  }

  func unbind_value () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }


}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMIntField_value                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMIntField_value)
class Controller_PMIntField_value : PMOutletEvent {

  var mObject : PMStoredProperty_Int
  var mOutlet : PMIntField

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMStoredProperty_Int, outlet : PMIntField, file : String, line : Int, sendContinously : Bool) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mOutlet.target = self
    mOutlet.action = "action:"
    if mOutlet.formatter == nil {
      presentErrorWindow (file, line, "the outlet has no formatter")
    }else if !(mOutlet.formatter is NSNumberFormatter) {
      presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
    }
    mObject.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    mOutlet.myIntegerValue = mObject.prop
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMIntField) {
    let validationResult = mObject.validate (mOutlet.integerValue)
    switch validationResult {
    case PMValidationResult.ok :
      mObject.setProp (mOutlet.integerValue)
    case PMValidationResult.rejectWithBeep :
      NSBeep ()
    case PMValidationResult.rejectWithAlert (let informativeText) :
      if let window = sender.window {
        let alert = NSAlert ()
        alert.messageText = String (format:"The value “%@” is invalid.", mOutlet.stringValue)
        alert.informativeText = informativeText
        alert.addButtonWithTitle ("Ok")
        alert.addButtonWithTitle ("Discard Change")
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.mOutlet.myIntegerValue = self.mObject.prop
          }
        })
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
