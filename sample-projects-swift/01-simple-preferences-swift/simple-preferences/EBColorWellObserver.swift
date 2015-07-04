import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBColorWellObserver) class EBColorWellObserver : NSColorWell, EBUserClassName {

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

  private var mValueController : Controller_EBReadOnlyColorWell_color?

  func bind_colorObserver (object:EBReadWriteProperty_NSColor, file:String, line:Int) {
    mValueController = Controller_EBReadOnlyColorWell_color (object:object, outlet:self, file:file, line:line)
  }

  func unbind_colorObserver () {
    mValueController?.unregister ()
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBColorWell_color                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_EBReadOnlyColorWell_color : EBOutletEvent {

  var mObject : EBReadWriteProperty_NSColor
  var mOutlet : EBColorWellObserver

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : EBReadWriteProperty_NSColor, outlet : EBColorWellObserver, file : String, line : Int) {
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

  override func sendUpdateEvent () {
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
