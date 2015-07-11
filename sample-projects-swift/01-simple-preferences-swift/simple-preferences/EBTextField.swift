import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTextField                                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBTextField) class EBTextField : NSTextField, EBUserClassName, NSTextFieldDelegate {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    self.delegate = self
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    self.delegate = self
    noteObjectAllocation (self)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  value binding                                                                                                    *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mValueController : Controller_EBTextField_value?
  private var mSendContinously : Bool = false

  func bind_value (object:EBReadWriteProperty_String, file:String, line:Int, sendContinously:Bool) {
    mSendContinously = sendContinously
    mValueController = Controller_EBTextField_value (object:object, outlet:self, file:file, line:line, sendContinously:sendContinously)
  }

  func unbind_value () {
    mValueController?.unregister ()
    mValueController = nil
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func controlTextDidChange (inNotification : NSNotification) {
    if mSendContinously {
      NSApp.sendAction (self.action, to: self.target, from: self)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBTextField_value                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBTextField_value) final class Controller_EBTextField_value : EBSimpleController {

  private let mOutlet: EBTextField
  private let mObject : EBReadWriteProperty_String

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object:EBReadWriteProperty_String, outlet : EBTextField, file : String, line : Int, sendContinously : Bool) {
    mObject = object
    mOutlet = outlet
    super.init (objects:[object], outlet:outlet)
    mOutlet.target = self
    mOutlet.action = "action:"
    if mOutlet.formatter != nil {
      presentErrorWindow (file, line:line, errorMessage:"the EBTextField outlet has a formatter")
    }
    object.addEBObserver (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeEBObserver (self)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func sendUpdateEvent () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.stringValue = "No selection"
      mOutlet.enableFromValue (false)
    case .multipleSelection :
      mOutlet.stringValue = "Multiple selection"
      mOutlet.enableFromValue (false)
    case .singleSelection (let propertyValue) :
      mOutlet.stringValue = propertyValue
      mOutlet.enableFromValue (true)
    }
    mOutlet.updateEnabledState ()
  }

  //···················································································································*

  func action (sender : EBTextField) {
    mObject.validateAndSetProp (mOutlet.stringValue, windowForSheet:sender.window)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBTextField_TableViewCell                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBTextField_Cell) class EBTextField_Cell : NSTableCellView {
  @IBOutlet private var cellOutlet : EBTextField?
  private weak var mProperty : EBReadWriteProperty_String?

  //···················································································································*

  func outletIsDefined () -> Bool {
    return cellOutlet != nil
  }

  //···················································································································*

  func configureWithProperty (inProperty : EBReadWriteProperty_String) {
    mProperty = inProperty
    switch inProperty.prop {
    case .noSelection :
      cellOutlet?.stringValue = "No Selection"
      cellOutlet?.enabled = false
      cellOutlet?.target = nil
      cellOutlet?.action = ""
    case .singleSelection (let v) :
      cellOutlet?.stringValue = v
      cellOutlet?.enabled = true
      cellOutlet?.target = self
      cellOutlet?.action = "myAction:"
     case .multipleSelection :
      cellOutlet?.stringValue = "Multiple Selection"
      cellOutlet?.enabled = false
      cellOutlet?.target = nil
      cellOutlet?.action = ""
    }
  }

  //···················································································································*
  
  func myAction (sender : EBTextField) {
    mProperty?.validateAndSetProp (sender.stringValue, windowForSheet:sender.window)
  }

  //···················································································································* 
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
