//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(EBIntFieldObserver) class EBIntFieldObserver : NSTextField, EBUserClassName, NSTextFieldDelegate {

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
  //  valueObserver binding                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_EBReadOnlyIntField_readOnlyValue?

  func bind_valueObserver (object:EBReadOnlyProperty_Int, file:String, line:Int, autoFormatter:Bool) {
    mValueController = Controller_EBReadOnlyIntField_readOnlyValue (
      object:object,
      outlet:self,
      file:file,
      line:line,
      autoFormatter:autoFormatter
    )
  }

  func unbind_valueObserver () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBReadOnlyIntField_readOnlyValue                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBReadOnlyIntField_readOnlyValue) class Controller_EBReadOnlyIntField_readOnlyValue : EBOutletEvent {

  var mObject : EBReadOnlyProperty_Int
  var mOutlet : EBIntFieldObserver

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : EBReadOnlyProperty_Int, outlet : EBIntFieldObserver, file : String, line : Int, autoFormatter:Bool) {
    mObject = object
    mOutlet = outlet
    super.init ()
    if autoFormatter {
      let formatter = NSNumberFormatter ()
      mOutlet.formatter = formatter
    }else if mOutlet.formatter == nil {
      presentErrorWindow (file, line:line, errorMessage:"the outlet has no formatter")
    }else if !(mOutlet.formatter is NSNumberFormatter) {
      presentErrorWindow (file, line:line, errorMessage:"the formatter should be an NSNumberFormatter")
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
