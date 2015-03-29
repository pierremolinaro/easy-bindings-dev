import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private var gEnabledBindingControllerDictionary = [NSControl : Controller_NSControl_enabled] ()
private var gEnabledBindingValueDictionary = [NSControl : Bool] ()

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enabled binding                                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSControl {

  func bind_enabled (object:[PMAbstractProperty], computeFunction: () -> PMProperty <Bool>, file:String, line:Int) {
    let controller = Controller_NSControl_enabled (
      objectArray:object,
      outlet:self,
      computeFunction:computeFunction,
      file:file,
      line:line
    )
    gEnabledBindingControllerDictionary [self] = controller
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func unbind_enabled () {
    if let controller = gEnabledBindingControllerDictionary [self] {
      controller.unregister ()
      gEnabledBindingControllerDictionary [self] = nil
      gEnabledBindingValueDictionary [self] = nil
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enable control                                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private var gEnabledFromValueBindingDictionary = [NSControl : Bool] ()

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSControl {

  func enableFromValue (inValue : Bool) {
    gEnabledFromValueBindingDictionary [self] = inValue
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func removeFromEnabledFromValueDictionary () {
    gEnabledFromValueBindingDictionary [self] = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   updateEnabledState                                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSControl {

  func updateEnabledState () {
    var result = true
    self.enabled = (gEnabledBindingValueDictionary [self] ?? true) && (gEnabledFromValueBindingDictionary [self] ?? true)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_NSControl_enabled                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_NSControl_enabled) class Controller_NSControl_enabled : PMOutletEvent {

  var mObjectArray : [PMAbstractProperty]
  var mOutlet : NSControl
  var mComputeFunction : Optional <() -> PMProperty <Bool> >

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (objectArray : [PMAbstractProperty], outlet : NSControl, computeFunction: () -> PMProperty <Bool>, file : String, line : Int) {
    mObjectArray = objectArray
    mOutlet = outlet
    mComputeFunction = computeFunction
    super.init ()
    for object in mObjectArray {
      object.addObserver (self, postEvent:true)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func unregister () {
    mComputeFunction = nil
    for object in mObjectArray {
      object.removeObserver (self, postEvent:false)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func updateOutlet () {
    let result : PMProperty <Bool>
    if let computeFunction = mComputeFunction {
      result = computeFunction ()
    }else{
      result = .noSelection
    }
    switch result {
    case .noSelection :
      gEnabledBindingValueDictionary [mOutlet] = false
    case .multipleSelection :
      gEnabledBindingValueDictionary [mOutlet] = false
    case .singleSelection (let v) :
      gEnabledBindingValueDictionary [mOutlet] = v
    }
    mOutlet.updateEnabledState ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
