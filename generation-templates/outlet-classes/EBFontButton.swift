import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBFontButton) class EBFontButton : NSButton, EBUserClassName {
  private var mFont : NSFont?
  
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
    showFontManager ()
    return super.sendAction (inAction, to:to)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func showFontManager () {
    if let font = mFont {
      self.window?.makeFirstResponder (self)
      let fontManager = NSFontManager.sharedFontManager ()
      fontManager.delegate = self
      fontManager.setSelectedFont (font, isMultiple:false)
      fontManager.orderFrontFontPanel (self)
    }
  }

//---------------------------------------------------------------------------*

  override func changeFont (sender : AnyObject?) {
    if let valueController = mValueController, fontManager = sender as! NSFontManager? {
      let newFont = fontManager.convertFont (mFont!)
      valueController.mObject.setProp (newFont)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func mySetFont (font : NSFont) {
    mFont = font
    let newTitle = String (format:"%@ — %g pt.", font.displayName!, font.pointSize)
    self.title = newTitle
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  color binding                                                                                                    *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mValueController : Controller_EBFontButton_fontValue?

  func bind_fontValue (object:EBReadWriteProperty_NSFont, file:String, line:Int) {
    mValueController = Controller_EBFontButton_fontValue (object:object, outlet:self, file:file, line:line)
  }

  func unbind_fontValue () {
    mValueController?.unregister ()
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBFontButton_fontValue                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_EBFontButton_fontValue : EBOutletEvent {

  var mObject : EBReadWriteProperty_NSFont
  var mOutlet : EBFontButton

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : EBReadWriteProperty_NSFont, outlet : EBFontButton, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mObject.addObserver (self, postEvent:true)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.enableFromValue (false)
      mOutlet.title = ""
    case .singleSelection (let v) :
      mOutlet.enableFromValue (true)
      mOutlet.mySetFont (v)
    case .multipleSelection :
      mOutlet.enableFromValue (false)
      mOutlet.title = ""
    }
    mOutlet.updateEnabledState ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func updateModel (sender : EBFontButton) {
//    mObject.validateAndSetProp (mOutlet.tag, windowForSheet:sender.window)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*