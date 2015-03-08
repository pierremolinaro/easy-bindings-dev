import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMReadOnlyTextField) class PMReadOnlyTextField : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMReadOnlyTextField" }
 
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
  //  readOnlyBalue binding                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMReadOnlyTextField_value?

  func bind_readOnlyValue (object:PMReadOnlyProperty_String, file:String, line:Int) {
    mValueController = Controller_PMReadOnlyTextField_value (object:object, outlet:self, file:file, line:line)
  }

  func unbind_readOnlyValue () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_PMReadOnlyTextField_value                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMReadOnlyTextField_value)
class Controller_PMReadOnlyTextField_value : PMTransientEvent {

  private var mOutlet : PMReadOnlyTextField
  private var mObject : PMReadOnlyProperty_String

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func userClassName () -> String { return "Controller.PMReadOnlyTextField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object:PMReadOnlyProperty_String, outlet : PMReadOnlyTextField, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    if mOutlet.formatter != nil {
      presentErrorWindow (file, line, "the PMReadOnlyTextField outlet has a formatter")
    }
    object.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  override func unregister () {
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func trigger () {
    if mOutlet.stringValue != mObject.value {
      mOutlet.stringValue = mObject.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
