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

  func bind_enabled (object:[PMReadOnlyProperty_Bool], computeFunction: () -> Bool, file:String, line:Int) {
    mValueController = Controller_PMButton_enabled (objectArray:object, outlet:self, computeFunction:computeFunction, file:file, line:line)
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

  var mObjectArray : [PMReadOnlyProperty_Bool]
  var mOutlet : PMButton
  var mComputeFunction : Optional <() -> Bool>

  //-------------------------------------------------------------------------------------------------------------------*

  init (objectArray : [PMReadOnlyProperty_Bool], outlet : PMButton, computeFunction: () -> Bool, file : String, line : Int) {
    mObjectArray = objectArray
    mOutlet = outlet
    mComputeFunction = computeFunction
    super.init ()
    for object in mObjectArray {
      object.addObserver (self, inTrigger:true)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mComputeFunction = nil
    for object in mObjectArray {
      object.removeObserver (self, inTrigger:false)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    if let computeFunction = mComputeFunction {
      mOutlet.enabled = computeFunction ()
    }else{
      mOutlet.enabled = false
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
