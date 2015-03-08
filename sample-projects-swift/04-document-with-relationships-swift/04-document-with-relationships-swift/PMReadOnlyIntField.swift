//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMReadOnlyIntField) class PMReadOnlyIntField : NSTextField, PMUserClassName, NSTextFieldDelegate {

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
  //  readOnlyValue binding                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMReadOnlyIntField_readOnlyValue?

  func bind_readOnlyValue (object:PMReadOnlyProperty_Int, file:String, line:Int) {
    mValueController = Controller_PMReadOnlyIntField_readOnlyValue (object:object, outlet:self, file:file, line:line)
  }

  func unbind_readOnlyValue () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMReadOnlyIntField_readOnlyValue                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMReadOnlyIntField_readOnlyValue)
class Controller_PMReadOnlyIntField_readOnlyValue : PMOutletEvent {

  var mObject : PMReadOnlyProperty_Int
  var mOutlet : PMReadOnlyIntField

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMReadOnlyProperty_Int, outlet : PMReadOnlyIntField, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    if mOutlet.formatter == nil {
      presentErrorWindow (file, line, "the outlet has no formatter")
    }else if !(mOutlet.formatter is NSNumberFormatter) {
      presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
    }
    mObject.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    mOutlet.myIntegerValue = mObject.prop
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
