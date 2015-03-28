//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMIntFieldObserver) class PMIntFieldObserver : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    self.delegate = self
    self.editable = false
    self.drawsBackground = false
    self.bordered = false
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    self.delegate = self
    self.editable = false
    self.drawsBackground = false
    self.bordered = false
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

  func bind_valueObserver (object:PMReadOnlyProperty_Int, file:String, line:Int) {
    mValueController = Controller_PMReadOnlyIntField_readOnlyValue (object:object, outlet:self, file:file, line:line)
  }

  func unbind_valueObserver () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMReadOnlyIntField_readOnlyValue                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMReadOnlyIntField_readOnlyValue) class Controller_PMReadOnlyIntField_readOnlyValue : PMOutletEvent {

  var mObject : PMReadOnlyProperty_Int
  var mOutlet : PMIntFieldObserver

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMReadOnlyProperty_Int, outlet : PMIntFieldObserver, file : String, line : Int) {
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

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "No Selection"
    case .singleSelection (let v) :
      mOutlet.enableFromValue (true)
      mOutlet.integerValue = v
    case .multipleSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "Multiple Selection"
    }
    mOutlet.updateEnabledState()
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
