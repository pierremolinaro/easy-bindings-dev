import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBSlider                                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBSlider) class EBSlider : NSSlider, EBUserClassName {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func sendAction (inAction : Selector, to : AnyObject?) -> Bool {
    mDoubleValueController?.updateModel ()
    return super.sendAction (inAction, to:to)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  doubleValue binding                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mDoubleValueController : Controller_EBSlider_doubleValue?

  func bind_doubleValue(object:EBReadWriteProperty_Double, file:String, line:Int, sendContinously:Bool) {
    mDoubleValueController = Controller_EBSlider_doubleValue (object:object, outlet:self, file:file, line:line)
    self.continuous = sendContinously
  }

  func unbind_doubleValue () {
    mDoubleValueController?.unregister ()
    mDoubleValueController = nil
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBSlider_doubleValue                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBSlider_doubleValue) class Controller_EBSlider_doubleValue : EBOutletEvent {

  private var mOutlet: EBSlider
  private var mObject : EBReadWriteProperty_Double

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object:EBReadWriteProperty_Double, outlet : EBSlider, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    object.addObserver (self, postEvent:true)
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
      mOutlet.stringValue = "No selection"
      mOutlet.enableFromValue (false)
    case .multipleSelection :
      mOutlet.stringValue = "Multiple selection"
      mOutlet.enableFromValue (false)
    case .singleSelection (let propertyValue) :
      mOutlet.doubleValue = propertyValue
      mOutlet.enableFromValue (true)
    }
    mOutlet.updateEnabledState ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func updateModel () {
    mObject.validateAndSetProp (mOutlet.doubleValue, windowForSheet:mOutlet.window)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*