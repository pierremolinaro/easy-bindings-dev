import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBTextFieldObserver) class EBTextFieldObserver : NSTextField, EBUserClassName, NSTextFieldDelegate {

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
  //  valueObserver binding                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_EBReadOnlyTextField_value?

  func bind_valueObserver (object:EBReadOnlyProperty_String, file:String, line:Int) {
    mValueController = Controller_EBReadOnlyTextField_value (object:object, outlet:self, file:file, line:line)
  }

  func unbind_valueObserver () {
    mValueController?.unregister ()
    mValueController = nil
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBReadOnlyTextField_value                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBReadOnlyTextField_value)
final class Controller_EBReadOnlyTextField_value : EBSimpleController {

  private var mOutlet : EBTextFieldObserver
  private var mObject : EBReadOnlyProperty_String

  //-------------------------------------------------------------------------------------------------------------------*

  init (object:EBReadOnlyProperty_String, outlet : EBTextFieldObserver, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init (objects:[object], outlet:outlet)
    if mOutlet.formatter != nil {
      presentErrorWindow (file, line:line, errorMessage:"the EBTextFieldObserver outlet has a formatter")
    }
    object.addEBObserver (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject.removeEBObserver (self)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func sendUpdateEvent () {
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
