import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMReadOnlyTextField) class PMReadOnlyTextField : NSTextField, PMUserClassName, NSTextFieldDelegate {

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

@objc(Controller_PMReadOnlyTextField_value) class Controller_PMReadOnlyTextField_value : PMOutletEvent {

  private var mOutlet : PMReadOnlyTextField
  private var mObject : PMReadOnlyProperty_String

  //-------------------------------------------------------------------------------------------------------------------*

  init (object:PMReadOnlyProperty_String, outlet : PMReadOnlyTextField, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    if mOutlet.formatter != nil {
      presentErrorWindow (file, line, "the PMReadOnlyTextField outlet has a formatter")
    }
    object.addObserver (self, postEvent:true)
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
    case .singleSelection (let v):
      mOutlet.enableFromValue (true)
      mOutlet.stringValue = v
    case .multipleSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "Multiple Selection"
    }
    mOutlet.updateEnabledState()
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
