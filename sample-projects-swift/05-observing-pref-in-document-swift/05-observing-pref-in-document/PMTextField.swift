import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTextField) class PMTextField : NSTextField, PMUserClassName, NSTextFieldDelegate {

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
class Controller_PMTextField_value : PMOutletEvent {

  private var mOutlet: PMTextField
  private var mObject : PMStoredProperty_String

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
    object.addObserver (self, postEvent:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, postEvent:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    if mOutlet.stringValue != mObject.prop {
      mOutlet.stringValue = mObject.prop
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMTextField) {
    mObject.validateAndSetProp (
      mOutlet.stringValue,
      windowForSheet:sender.window,
      discardFunction: { self.mOutlet.stringValue = self.mObject.prop }
    )
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
