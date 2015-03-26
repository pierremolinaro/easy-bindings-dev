import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMReadOnlyNumberField                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMReadOnlyNumberField) class PMReadOnlyNumberField : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func userClassName () -> String { return "PMReadOnlyNumberField" }
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    self.delegate = self
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  readOnlyValue binding                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mValueController : Controller_PMNumberField_readOnlyValue?

  func bind_readOnlyValue (object:PMReadOnlyProperty_Int, file:String, line:Int) {
    mValueController = Controller_PMNumberField_readOnlyValue (object:object, outlet:self, file:file, line:line)
  }

  func unbind_readOnlyValue () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMNumberField_readOnlyValue                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMNumberField_readOnlyValue)
class Controller_PMNumberField_readOnlyValue : PMOutletEvent {

  var mObject : PMReadOnlyProperty_Int
  var mOutlet : PMReadOnlyNumberField

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : PMReadOnlyProperty_Int, outlet : PMReadOnlyNumberField, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    if mOutlet.formatter == nil {
      presentErrorWindow (file, line, "the outlet has no formatter")
    }else if !(mOutlet.formatter is NSNumberFormatter) {
      presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
    }
    mObject.addObserver (self, postEvent:true)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func unregister () {
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "No Selection"
    case .singleSelection (let v):
      mOutlet.enableFromValue (true)
      mOutlet.integerValue = v
    case .multipleSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "Multiple Selection"
    }
    mOutlet.updateEnabledState()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
