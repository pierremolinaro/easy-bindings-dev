//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMSwitch) class PMSwitch : NSButton, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
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

  private var mValueController : Controller_PMSwitch_value?

  func bind_value (object:PMStoredProperty_Bool, file:String, line:Int) {
    mValueController = Controller_PMSwitch_value (object:object, outlet:self, file:file, line:line)
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
//   Controller Controller_PMSwitch_value                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMSwitch_value) class Controller_PMSwitch_value : PMOutletEvent {

  private var mOutlet : PMSwitch
  private var mObject : PMStoredProperty_Bool

  //-------------------------------------------------------------------------------------------------------------------*

  init (object:PMStoredProperty_Bool, outlet : PMSwitch, file : String, line:Int) {
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
    switch mObject.prop.1 {
    case .noSelection :
      mOutlet.state = NSOffState
      mOutlet.enabled = false
    case .multipleSelection :
      mOutlet.state = NSMixedState
      mOutlet.enabled = false
    case .singleSelection :
      mOutlet.state = mObject.prop.0 ? NSOnState : NSOffState
      mOutlet.enabled = true
    }
    mOutlet.updateEnabledState ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMSwitch) {
    mObject.setProp (mOutlet.state == NSOnState)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
