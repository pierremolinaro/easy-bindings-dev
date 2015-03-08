import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTextField) class PMTextField : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMTextField" }
 
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
  //  value binding                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMTextField_value?
  private var mSendContinously : Bool = false

  func bind_value (object:PMStoredProperty_String, file:String, line:Int, sendContinously:Bool) {
    mSendContinously = sendContinously
    mValueController = Controller_PMTextField_value (object:object, outlet:self, file:file, line:line, sendContinously:sendContinously)
  }

  func unbind_value () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func controlTextDidChange (inNotification : NSNotification) {
    if mSendContinously {
      NSApp.sendAction (self.action, to: self.target, from: self)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_PMTextField_value                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMTextField_value)
class Controller_PMTextField_value : PMTransientEvent {

  private var mOutlet: PMTextField
  private var mObject : PMStoredProperty_String

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func userClassName () -> String { return "Controller.PMTextField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object:PMStoredProperty_String, outlet : PMTextField, file : String, line : Int, sendContinously : Bool) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mOutlet.target = self
    mOutlet.action = "action:"
    if mOutlet.formatter != nil {
      presentErrorWindow (file, line, "the PMTextField outlet has a formatter")
    }
    object.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  override func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func trigger () {
    if mOutlet.stringValue != mObject.value {
      mOutlet.stringValue = mObject.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMTextField) {
    let validationResult = mObject.validate (mOutlet.stringValue)
    switch validationResult {
    case PMValidationResult.ok :
      mObject.setValue (mOutlet.stringValue)
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
            self.mOutlet.stringValue = self.mObject.value
          }
        })
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
