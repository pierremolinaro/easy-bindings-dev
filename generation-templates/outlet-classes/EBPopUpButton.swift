import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBPopUpButton) class EBPopUpButton : NSPopUpButton, EBUserClassName {

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
    mSelectedTagController?.updateModel (self)
    return super.sendAction (inAction, to:to)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  selectedTag binding                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mSelectedTagController : Controller_EBPopUpButton_selectedTag?

  func bind_selectedTag (object:EBReadWriteProperty_Int, file:String, line:Int) {
    mSelectedTagController = Controller_EBPopUpButton_selectedTag (object:object, outlet:self, file:file, line:line)
  }

  func unbind_selectedTag () {
    mSelectedTagController?.unregister ()
    mSelectedTagController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBPopUpButton_selectedTag                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_EBPopUpButton_selectedTag : EBOutletEvent {

  var mObject : EBReadWriteProperty_Int
  var mOutlet : EBPopUpButton

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : EBReadWriteProperty_Int, outlet : EBPopUpButton, file : String, line : Int) {
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

  func updateModel (sender : EBPopUpButton) {
    mObject.validateAndSetProp (mOutlet.selectedTag (), windowForSheet:sender.window)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
