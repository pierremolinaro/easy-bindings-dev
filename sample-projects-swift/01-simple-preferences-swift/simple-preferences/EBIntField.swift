import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBIntField) class EBIntField : NSTextField, EBUserClassName, NSTextFieldDelegate {

  //···················································································································*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    self.delegate = self
    noteObjectAllocation (self)
  }

  //···················································································································*

  override init (frame:NSRect) {
    super.init (frame:frame)
    self.delegate = self
    noteObjectAllocation (self)
  }
  
  //···················································································································*

  deinit {
    noteObjectDeallocation (self)
  }

  //···················································································································*
  //    NSTextFieldDelegate delegate function                                                                          *
  //···················································································································*

  override func controlTextDidChange (inNotification : NSNotification) {
    if mSendContinously {
      if let inputString = currentEditor()?.string {
        // NSLog ("inputString %@", inputString)
        let numberFormatter = self.formatter as! NSNumberFormatter
        let number = numberFormatter.numberFromString (inputString)
        if number == nil {
          control (
            self,
            didFailToFormatString:inputString, errorDescription:String (format:"The value “%@” is invalid.", inputString)
          )
        }else{
          NSApp.sendAction (self.action, to: self.target, from: self)
        }
      }
    }
  }

  //···················································································································*
  //    NSTextFieldDelegate delegate function                                                                          *
  //···················································································································*
  
  func control (control: NSControl,
                didFailToFormatString string: String,
                errorDescription error: String?) -> Bool {
    let alert = NSAlert ()
    if let window = control.window {
      alert.messageText = error!
      alert.informativeText = "Please provide a valid value."
      alert.addButtonWithTitle ("Ok")
      alert.addButtonWithTitle ("Discard Change")
      alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) -> Void in
        if response == NSAlertSecondButtonReturn { // Discard Change
 //         self.integerValue = self.myIntegerValue.0
        }
      })
    }
    return false
  }

  //···················································································································*
  //  value binding                                                                                                    *
  //···················································································································*

  private var mValueController : Controller_EBIntField_value?
  private var mSendContinously : Bool = false

  func bind_value (object:EBReadWriteProperty_Int, file:String, line:Int, sendContinously:Bool, autoFormatter:Bool) {
    mSendContinously = sendContinously
    mValueController = Controller_EBIntField_value (
      object:object,
      outlet:self,
      file:file,
      line:line,
      sendContinously:sendContinously,
      autoFormatter:autoFormatter
    )
  }

  func unbind_value () {
    mValueController?.unregister ()
    mValueController = nil
  }


}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBIntField_value                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBIntField_value)
class Controller_EBIntField_value : EBOutletEvent {

  var mObject : EBReadWriteProperty_Int
  var mOutlet : EBIntField

  //···················································································································*

  init (object : EBReadWriteProperty_Int,
        outlet : EBIntField,
        file : String,
        line : Int,
        sendContinously : Bool,
        autoFormatter : Bool)
  {
    mObject = object
    mOutlet = outlet
    super.init ()
    mOutlet.target = self
    mOutlet.action = "action:"
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

  //···················································································································*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //···················································································································*

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
    mOutlet.updateEnabledState ()
  }

  //···················································································································*

  func action (sender : EBIntField) {
    mObject.validateAndSetProp (mOutlet.integerValue, windowForSheet:sender.window)
  }

  //···················································································································*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBIntField_TableViewCell                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBIntField_Cell) class EBIntField_Cell : NSTableCellView {
  @IBOutlet private var cellOutlet : EBIntField?
  private weak var mProperty : EBReadWriteProperty_Int?

  //···················································································································*

  func outletIsDefined () -> Bool {
    return cellOutlet != nil
  }

  //···················································································································*

  func configureWithProperty (inProperty : EBReadWriteProperty_Int) {
    mProperty = inProperty
    switch inProperty.prop {
    case .noSelection :
      cellOutlet?.stringValue = "No Selection"
      cellOutlet?.enabled = false
      cellOutlet?.target = nil
      cellOutlet?.action = ""
    case .singleSelection (let v) :
      cellOutlet?.integerValue = v
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
  
  func myAction (sender : EBIntField) {
    mProperty?.validateAndSetProp (sender.integerValue, windowForSheet:sender.window)
  }

  //···················································································································* 
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
