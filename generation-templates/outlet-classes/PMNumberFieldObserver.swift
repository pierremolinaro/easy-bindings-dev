import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMNumberFieldObserver                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMNumberFieldObserver) class PMNumberFieldObserver : NSTextField, PMUserClassName, NSTextFieldDelegate {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

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
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  valueObserver binding                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mValueController : Controller_PMNumberField_readOnlyValue?

  func bind_valueObserver (object:PMReadOnlyProperty_Int, file:String, line:Int) {
    mValueController = Controller_PMNumberField_readOnlyValue (object:object, outlet:self, file:file, line:line)
  }

  func unbind_valueObserver () {
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
  var mOutlet : PMNumberFieldObserver

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : PMReadOnlyProperty_Int, outlet : PMNumberFieldObserver, file : String, line : Int) {
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
