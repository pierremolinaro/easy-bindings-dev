//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMButton) class PMButton : NSButton, PMUserClassName {

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
  //  enabled binding                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMButton_enabled?

  func bind_enabled (object:PMReadOnlyProperty_Bool, file:String, line:Int) {
    mValueController = Controller_PMButton_enabled (object:object, outlet:self, file:file, line:line)
  }

  func unbind_enabled () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMButton_enabled                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMButton_enabled) class Controller_PMButton_enabled : PMOutletEvent {

  var mObject : PMReadOnlyProperty_Bool
  var mOutlet : PMButton

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMReadOnlyProperty_Bool, outlet : PMButton, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mObject.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    mOutlet.enabled = mObject.prop
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
