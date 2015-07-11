import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBTextView
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBTextView) class EBTextView : NSTextView, EBUserClassName {

  //····················································································································

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //····················································································································

  deinit {
    noteObjectDeallocation (self)
  }

  //····················································································································
  //  value binding
  //····················································································································

  private var mValueController : Controller_EBTextView_value?

  func bind_value (object:EBReadWriteProperty_String, file:String, line:Int) {
    mValueController = Controller_EBTextView_value (object:object, outlet:self, file:file, line:line)
  }

  //····················································································································

  func unbind_value () {
    mValueController?.unregister ()
    mValueController = nil
  }

  //····················································································································

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBTextView_value
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBTextView_value) final class Controller_EBTextView_value : EBSimpleController, NSTextViewDelegate {

  private let mOutlet: EBTextView
  private let mObject : EBReadWriteProperty_String

  //····················································································································

  init (object:EBReadWriteProperty_String, outlet : EBTextView, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init (objects:[object], outlet:outlet)
    outlet.delegate = self
    object.addEBObserver (self)
  }

  //····················································································································
  
  func unregister () {
    mObject.removeEBObserver (self)
    mOutlet.delegate = nil
  }

  //····················································································································

  func textDidChange (notification: NSNotification) {
    let str = mOutlet.string ?? ""
    mObject.validateAndSetProp (str, windowForSheet:mOutlet.window)
  }

  //····················································································································

  override func sendUpdateEvent () {
    switch mObject.prop {
    case .noSelection, .multipleSelection :
      mOutlet.string = ""
      mOutlet.editable = false
    case .singleSelection (let propertyValue) :
      mOutlet.string = propertyValue
      mOutlet.editable = true
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
