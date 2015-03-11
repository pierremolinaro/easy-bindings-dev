import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var gEnabledBindingDictionary = [NSControl : Controller_NSControl_enabled] ()

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSControl {

  //-------------------------------------------------------------------------------------------------------------------*
  //  enabled binding                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  func bind_enabled (object:[PMReadOnlyProperty_Bool], computeFunction: () -> Bool, file:String, line:Int) {
    let controller = Controller_NSControl_enabled (objectArray:object, outlet:self, computeFunction:computeFunction, file:file, line:line)
    gEnabledBindingDictionary [self] = controller
  }

  func unbind_enabled () {
    if let controller = gEnabledBindingDictionary [self] {
      controller.unregister ()
      gEnabledBindingDictionary [self] = nil
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_NSControl_enabled                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_NSControl_enabled) class Controller_NSControl_enabled : PMOutletEvent {

  var mObjectArray : [PMReadOnlyProperty_Bool]
  var mOutlet : NSControl
  var mComputeFunction : Optional <() -> Bool>

  //-------------------------------------------------------------------------------------------------------------------*

  init (objectArray : [PMReadOnlyProperty_Bool], outlet : NSControl, computeFunction: () -> Bool, file : String, line : Int) {
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
