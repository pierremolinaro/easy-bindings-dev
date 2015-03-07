//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMIntField) class PMIntField : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMIntField" }
 
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

  func bind_value (object:PMStoredProperty <Int>, file:String, line:Int, sendContinously:Bool) {
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
//   Controller_PMIntField_value                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMIntField_value)
class Controller_PMIntField_value : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : PMStoredProperty <Int>? = nil
  weak var mOutlet: PMIntField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMIntField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMStoredProperty <Int>?, outlet : PMIntField?, file : String, line : Int, sendContinously : Bool) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    mOutlet = outlet
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMIntField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMIntField")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
        if unwrappedOutlet.formatter == nil {
          presentErrorWindow (file, line, "the outlet has no formatter")
        }else if !(unwrappedOutlet.formatter is NSNumberFormatter) {
          presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
        }
      }
    }
    mObject?.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func noteModelDidChange () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if let outlet = mOutlet, object = mObject {
      outlet.myIntegerValue = object.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMIntField) {
    if let outlet = mOutlet,object = mObject {
      let validationResult = object.validate (outlet.integerValue)
      switch validationResult {
      case PMValidationResult.ok :
        object.setValue (outlet.integerValue)
      case PMValidationResult.rejectWithBeep :
        NSBeep ()
      case PMValidationResult.rejectWithAlert (let informativeText) :
        if let window = sender.window {
          let alert = NSAlert ()
          alert.messageText = String (format:"The value “%@” is invalid.", outlet.stringValue)
          alert.informativeText = informativeText
          alert.addButtonWithTitle ("Ok")
          alert.addButtonWithTitle ("Discard Change")
          alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
            if response == NSAlertSecondButtonReturn { // Discard Change
              outlet.myIntegerValue = object.value
            }
          })
        }
      }
    }
  }

   //-------------------------------------------------------------------------------------------------------------------*

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
