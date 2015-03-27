import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMMatrix) class PMMatrix : NSMatrix, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  selectedIndex binding                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMMatrix_selectedIndex?

  func bind_selectedIndex (object:PMEnumPropertyProtocol, file:String, line:Int) {
    mValueController = Controller_PMMatrix_selectedIndex (object:object, outlet:self, file:file, line:line)
  }

  func unbind_selectedIndex () {
    mValueController?.unregister ()
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMMatrix_selectedIndex                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMMatrix_selectedIndex)
class Controller_PMMatrix_selectedIndex : PMOutletEvent {

  var mObject : PMEnumPropertyProtocol
  var mOutlet: PMMatrix

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMEnumPropertyProtocol, outlet : PMMatrix, file : String, line : Int) {
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

  func action (sender : PMMatrix) {
    mObject.setFromRawValue (mOutlet.selectedRow)
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
