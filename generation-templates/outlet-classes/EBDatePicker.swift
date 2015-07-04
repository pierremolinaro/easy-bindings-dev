import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBDatePicker) class EBDatePicker : NSDatePicker, EBUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  date binding                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_EBDatePicker_date?

  func bind_date (object:EBReadWriteProperty_NSDate, file:String, line:Int) {
    mValueController = Controller_EBDatePicker_date (object:object, outlet:self, file:file, line:line)
  }

  func unbind_date () {
    mValueController?.unregister ()
    mValueController = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBDatePicker_date                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBDatePicker_date)
final class Controller_EBDatePicker_date : EBSimpleController {

  private let mObject : EBReadWriteProperty_NSDate
  private let mOutlet: EBDatePicker

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : EBReadWriteProperty_NSDate, outlet : EBDatePicker, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init (objects:[object], outlet:outlet)
    mOutlet.target = self
    mOutlet.action = "action:"
    mObject.addObserver (self, postEvent:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func sendUpdateEvent () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "No Selection"
    case .singleSelection (let v) :
      mOutlet.enableFromValue (true)
      mOutlet.dateValue = v
    case .multipleSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "Multiple Selection"
    }
    mOutlet.updateEnabledState()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    mObject.setProp (mOutlet.dateValue)
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
