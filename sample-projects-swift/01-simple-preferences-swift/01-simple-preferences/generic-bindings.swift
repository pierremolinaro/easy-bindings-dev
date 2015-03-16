import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var gEnabledBindingControllerDictionary = [NSControl : Controller_NSControl_enabled] ()
var gEnabledBindingValueDictionary = [NSControl : Bool] ()

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enabled binding                                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSControl {

  func bind_enabled (object:[PMAbstractProperty], computeFunction: () -> Bool, file:String, line:Int) {
    let controller = Controller_NSControl_enabled (
      objectArray:object,
      outlet:self,
      computeFunction:computeFunction,
      file:file,
      line:line
    )
    gEnabledBindingControllerDictionary [self] = controller
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func unbind_enabled () {
    if let controller = gEnabledBindingControllerDictionary [self] {
      controller.unregister ()
      gEnabledBindingControllerDictionary [self] = nil
      gEnabledBindingValueDictionary [self] = nil
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_NSControl_enabled                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_NSControl_enabled) class Controller_NSControl_enabled : PMOutletEvent {

  var mObjectArray : [PMAbstractProperty]
  var mOutlet : NSControl
  var mComputeFunction : Optional <() -> Bool>

  //-------------------------------------------------------------------------------------------------------------------*

  init (objectArray : [PMAbstractProperty], outlet : NSControl, computeFunction: () -> Bool, file : String, line : Int) {
    mObjectArray = objectArray
    mOutlet = outlet
    mComputeFunction = computeFunction
    super.init ()
    for object in mObjectArray {
      object.addObserver (self, postEvent:true)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mComputeFunction = nil
    for object in mObjectArray {
      object.removeObserver (self, postEvent:false)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    let result : Bool
    if let computeFunction = mComputeFunction {
      result = computeFunction ()
    }else{
      result = false
    }
    gEnabledBindingValueDictionary [mOutlet] = result
    mOutlet.enabled = result
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
