import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMPopUpButton) class PMPopUpButton : NSPopUpButton, PMUserClassName {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func sendAction (inAction : Selector, to : AnyObject?) -> Bool {
    mValueController?.updateModel (self)
    return super.sendAction (inAction, to:to)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  color binding                                                                                                    *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mValueController : Controller_PMPopUpButton_selectedTag?

  func bind_selectedTag (object:PMReadWriteProperty_Int, file:String, line:Int) {
    mValueController = Controller_PMPopUpButton_selectedTag (object:object, outlet:self, file:file, line:line)
  }

  func unbind_selectedIndex () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMPopUpButton_selectedTag                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_PMPopUpButton_selectedTag : PMOutletEvent {

  var mObject : PMReadWriteProperty_Int
  var mOutlet : PMPopUpButton

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : PMReadWriteProperty_Int, outlet : PMPopUpButton, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mObject.addObserver (self, postEvent:true)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func unregister () {
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.enableFromValue (false)
    case .singleSelection (let v) :
      mOutlet.enableFromValue (true)
      let result = mOutlet.selectItemWithTag (v)
      if !result {
        presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"no item with tag: " + String (v))
      }
    case .multipleSelection :
      mOutlet.enableFromValue (false)
    }
    mOutlet.updateEnabledState ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func updateModel (sender : PMPopUpButton) {
    mObject.validateAndSetProp (mOutlet.selectedTag (), windowForSheet:sender.window)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
