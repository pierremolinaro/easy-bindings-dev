import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(EBSwitch) class EBSwitch : NSButton, EBUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
    self.setButtonType(.SwitchButton)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
    self.setButtonType(.SwitchButton)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func setEnableFromBinding (flag : Bool) {
    self.enabled = flag
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  value binding                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_EBSwitch_value?

  func bind_value (object:EBStoredProperty_Bool, file:String, line:Int) {
    mValueController = Controller_EBSwitch_value (object:object, outlet:self, file:file, line:line)
  }

  func unbind_value () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBSwitch_value                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBSwitch_value) class Controller_EBSwitch_value : EBOutletEvent {

  private var mOutlet : EBSwitch
  private var mObject : EBStoredProperty_Bool

  //-------------------------------------------------------------------------------------------------------------------*

  init (object:EBStoredProperty_Bool, outlet : EBSwitch, file : String, line:Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mOutlet.target = self
    mOutlet.action = "action:"
    object.addObserver (self, postEvent:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.state = NSOffState
      mOutlet.enabled = false
    case .multipleSelection :
      mOutlet.state = NSMixedState
      mOutlet.enabled = false
    case .singleSelection (let v) :
      mOutlet.state = v ? NSOnState : NSOffState
      mOutlet.enabled = true
    }
    mOutlet.updateEnabledState ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : EBSwitch) {
    mObject.setProp (mOutlet.state == NSOnState)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
