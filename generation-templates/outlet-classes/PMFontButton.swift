import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMFontButton) class PMFontButton : NSButton, PMUserClassName {
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

  private var mValueController : Controller_PMFontButton_fontValue?

  func bind_fontValue (object:PMReadWriteProperty_NSFont, file:String, line:Int) {
    mValueController = Controller_PMFontButton_fontValue (object:object, outlet:self, file:file, line:line)
  }

  func unbind_fontValue () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMFontButton_fontValue                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_PMFontButton_fontValue : PMOutletEvent {

  var mObject : PMReadWriteProperty_NSFont
  var mOutlet : PMFontButton

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : PMReadWriteProperty_NSFont, outlet : PMFontButton, file : String, line : Int) {
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

  func updateModel (sender : PMFontButton) {
//    mObject.validateAndSetProp (mOutlet.tag, windowForSheet:sender.window)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
