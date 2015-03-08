//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMReadOnlyIntField) class PMReadOnlyIntField : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMReadOnlyIntField" }
 
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
class Controller_PMReadOnlyIntField_readOnlyValue : PMTransientEvent, PMUserClassName {

  weak var mObject : PMReadOnlyProperty_Int? = nil
  weak var mOutlet : PMReadOnlyIntField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func userClassName () -> String { return "Controller.PMReadOnlyIntField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMReadOnlyProperty_Int?, outlet : PMReadOnlyIntField?, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMReadOnlyIntField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMReadOnlyIntField")
      }else{
        mOutlet = unwrappedOutlet
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
  
  override func unregister () {
    mObject?.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func trigger () {
    if let outlet = mOutlet, object = mObject {
      outlet.myIntegerValue = object.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
