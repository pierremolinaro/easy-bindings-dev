//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBDatePicker) final class EBDatePicker : NSDatePicker, EBUserClassNameProtocol {

  //····················································································································

  required init? (coder : NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //····················································································································

  override init (frame : NSRect) {
    super.init (frame: frame)
    noteObjectAllocation (self)
  }

  //····················································································································
  //  date binding
  //····················································································································

  private var mValueController : Controller_EBDatePicker_date? = nil

  final func bind_date (_ object:EBReadWriteProperty_Date, file:String, line:Int) {
    self.mValueController = Controller_EBDatePicker_date (object:object, outlet:self, file:file, line:line)
  }

  final func unbind_date () {
    self.mValueController?.unregister ()
    self.mValueController = nil
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   Controller_EBDatePicker_date
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

final class Controller_EBDatePicker_date : EBReadOnlyPropertyController {

  private let mObject : EBReadWriteProperty_Date
  private let mOutlet: EBDatePicker

  //····················································································································

  init (object : EBReadWriteProperty_Date, outlet : EBDatePicker, file : String, line : Int) {
    self.mObject = object
    self.mOutlet = outlet
    super.init (observedObjects:[object], outlet:outlet)
    self.mOutlet.target = self
    self.mOutlet.action = #selector(Controller_EBDatePicker_date.action(_:))
    self.mEventCallBack = { [weak self] in self?.updateOutlet () }
  }

  //····················································································································

  override func unregister () {
    super.unregister ()
    self.mOutlet.target = nil
    self.mOutlet.action = nil
  }

  //····················································································································

  private func updateOutlet () {
    switch self.mObject.selection {
    case .empty :
      self.mOutlet.enableFromValueBinding (false)
      self.mOutlet.stringValue = "-"
    case .single (let v) :
      self.mOutlet.enableFromValueBinding (true)
      self.mOutlet.dateValue = v as Date
    case .multiple :
      self.mOutlet.enableFromValueBinding (false)
      self.mOutlet.stringValue = "-"
    }
  }

  //····················································································································

  @objc func action (_ sender : Any) {
    self.mObject.setProp (self.mOutlet.dateValue)
  }

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
