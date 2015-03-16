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
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    if (mOutlet.state == NSOnState) != mObject.prop {
      mOutlet.state = mObject.prop ? NSOnState : NSOffState
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMSwitch) {
    mObject.setProp (mOutlet.state == NSOnState)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
