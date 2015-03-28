import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMReadOnlyColorWell) class PMReadOnlyColorWell : NSColorWell, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
    self.enabled = false
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
    self.enabled = false
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  color binding                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMReadOnlyColorWell_color?

  func bind_readOnlyColor (object:PMReadWriteProperty_NSColor, file:String, line:Int) {
    mValueController = Controller_PMReadOnlyColorWell_color (object:object, outlet:self, file:file, line:line)
  }

  func unbind_readOnlyColor () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMColorWell_color                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_PMReadOnlyColorWell_color : PMOutletEvent {

  var mObject : PMReadWriteProperty_NSColor
  var mOutlet: PMReadOnlyColorWell

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMReadWriteProperty_NSColor, outlet : PMReadOnlyColorWell, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mObject.addObserver (self, postEvent:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject.removeObserver (self, postEvent:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection, .multipleSelection :
      mOutlet.color = NSColor.whiteColor ()
    case .singleSelection (let v) :
      mOutlet.color = v
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
