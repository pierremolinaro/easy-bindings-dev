import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBMatrix) class EBMatrix : NSMatrix, EBUserClassName {

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
  //  selectedIndex binding                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_EBMatrix_selectedIndex?

  func bind_selectedIndex (object:EBEnumPropertyProtocol, file:String, line:Int) {
    mValueController = Controller_EBMatrix_selectedIndex (object:object, outlet:self, file:file, line:line)
  }

  func unbind_selectedIndex () {
    mValueController?.unregister ()
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBMatrix_selectedIndex                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBMatrix_selectedIndex)
class Controller_EBMatrix_selectedIndex : EBOutletEvent {

  var mObject : EBEnumPropertyProtocol
  var mOutlet: EBMatrix

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : EBEnumPropertyProtocol, outlet : EBMatrix, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mOutlet.target = self
    mOutlet.action = "action:"
    mOutlet.continuous = true
    mObject.addObserver (self, postEvent:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, postEvent:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    if mOutlet.selectedRow != mObject.rawValue () {
      mOutlet.selectCellAtRow (mObject.rawValue (), column:0)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : EBMatrix) {
    mObject.setFromRawValue (mOutlet.selectedRow)
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*