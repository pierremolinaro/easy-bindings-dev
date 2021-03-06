//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBTextField
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBTextField) class EBTextField : NSTextField, EBUserClassNameProtocol, NSTextFieldDelegate {

  //····················································································································

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    self.delegate = self
    noteObjectAllocation (self)
  }

  //····················································································································

  override init (frame:NSRect) {
    super.init (frame:frame)
    self.delegate = self
    noteObjectAllocation (self)
  }
  
  //····················································································································

  deinit {
    noteObjectDeallocation (self)
  }

  //····················································································································
  //  value binding
  //····················································································································

  private var mValueController : Controller_EBTextField_value?
  private var mSendContinously : Bool = false

  //····················································································································

  func bind_value (_ object:EBReadWriteProperty_String, file:String, line:Int, sendContinously:Bool) {
    mSendContinously = sendContinously
    mValueController = Controller_EBTextField_value (object:object, outlet:self, file:file, line:line, sendContinously:sendContinously)
  }

  //····················································································································

  func unbind_value () {
    mValueController?.unregister ()
    mValueController = nil
  }

  //····················································································································

  override func controlTextDidChange (_ inNotification : Notification) {
    if mSendContinously {
      NSApp.sendAction (self.action!, to: self.target, from: self)
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   Controller Controller_EBTextField_value
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(Controller_EBTextField_value) final class Controller_EBTextField_value : EBSimpleController {

  private let mOutlet: EBTextField
  private let mObject : EBReadWriteProperty_String

  //····················································································································

  init (object:EBReadWriteProperty_String, outlet : EBTextField, file : String, line : Int, sendContinously : Bool) {
    mObject = object
    mOutlet = outlet
    super.init (observedObjects:[object], outlet:outlet)
    mOutlet.target = self
    mOutlet.action = #selector(Controller_EBTextField_value.action(_:))
    if mOutlet.formatter != nil {
      presentErrorWindow (file: file, line:line, errorMessage:"the EBTextField outlet has a formatter")
    }
    self.eventCallBack = { [weak self] in self?.updateOutlet () }
  }

  //····················································································································
  
  override func unregister () {
    super.unregister ()
    mOutlet.target = nil
    mOutlet.action = nil
  }

  //····················································································································

  private func updateOutlet () {
    switch mObject.prop {
    case .empty :
      mOutlet.stringValue = "—"
      mOutlet.enableFromValueBinding (false)
    case .multiple :
      mOutlet.stringValue = "—"
      mOutlet.enableFromValueBinding (false)
    case .single (let propertyValue) :
      mOutlet.stringValue = propertyValue
      mOutlet.enableFromValueBinding (true)
    }
  }

  //····················································································································

  func action (_ sender : EBTextField) {
    _ = mObject.validateAndSetProp (mOutlet.stringValue, windowForSheet:sender.window)
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBTextField_TableViewCell
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBTextField_TableViewCell) class EBTextField_TableViewCell : EBTableCellView {
  @IBOutlet var mCellOutlet : EBTextField?

  //····················································································································

  func checkOutlet (_ columnName : String, file:String, line:Int) {
    if let cellOutlet : NSObject = mCellOutlet {
      if !(cellOutlet is EBTextField) {
        presentErrorWindow (file: file,
          line: line,
          errorMessage:"\"\(columnName)\" column view is not an instance of EBTextField"
        )
      }
    }else{
      presentErrorWindow (file: file,
        line: line,
        errorMessage:"\"\(columnName)\" column view mCellOutlet is nil (should be an instance of EBTextField)"
      )
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
