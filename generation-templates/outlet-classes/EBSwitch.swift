import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBSwitch) class EBSwitch : NSButton, EBUserClassName {

  //···················································································································* 

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
    self.setButtonType(.SwitchButton)
  }

  //···················································································································* 

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
    self.setButtonType(.SwitchButton)
  }
  
  //···················································································································* 

  deinit {
    noteObjectDeallocation (self)
  }
  
  //···················································································································* 

  override func sendAction (inAction : Selector, to : AnyObject?) -> Bool {
    mValueController?.updateModel ()
    return super.sendAction (inAction, to:to)
  }

  //···················································································································* 
  //  value binding                                                                                                    *
  //···················································································································* 

  private var mValueController : Controller_EBSwitch_value?

  func bind_value (object:EBReadWriteProperty_Bool, file:String, line:Int) {
    mValueController = Controller_EBSwitch_value (object:object, outlet:self, file:file, line:line)
  }

  func unbind_value () {
    mValueController?.unregister ()
    mValueController = nil
  }

  //···················································································································* 
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBSwitch_value                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBSwitch_value) final class Controller_EBSwitch_value : EBOutletEvent {

  private var mOutlet : EBSwitch
  private var mObject : EBReadWriteProperty_Bool

  //···················································································································* 

  init (object:EBReadWriteProperty_Bool, outlet : EBSwitch, file : String, line:Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    object.addObserver (self, postEvent:true)
  }

  //···················································································································* 
  
  func unregister () {
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //···················································································································* 

  override func sendUpdateEvent () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.state = NSOffState
      mOutlet.enableFromValue (false)
    case .multipleSelection :
      mOutlet.state = NSMixedState
      mOutlet.enableFromValue (false)
    case .singleSelection (let v) :
      mOutlet.state = v ? NSOnState : NSOffState
      mOutlet.enableFromValue (true)
    }
    mOutlet.updateEnabledState ()
  }

  //···················································································································* 

  func updateModel () {
    mObject.setProp (mOutlet.state == NSOnState)
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   EBSwitch_Cell                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBSwitch_Cell) class EBSwitch_Cell : NSTableCellView {
  @IBOutlet private var cellOutlet : EBSwitch?
  private weak var mProperty : EBReadWriteProperty_Bool?

  //···················································································································*

  func outletIsDefined () -> Bool {
    return cellOutlet != nil
  }

  //···················································································································*

  func configureWithProperty (inProperty : EBReadWriteProperty_Bool) {
    mProperty = inProperty
    switch inProperty.prop {
    case .noSelection :
      cellOutlet?.stringValue = "No Selection"
      cellOutlet?.enabled = false
      cellOutlet?.target = nil
      cellOutlet?.action = ""
    case .singleSelection (let v) :
      cellOutlet?.state = v ? NSOnState : NSOffState
      cellOutlet?.enabled = true
      cellOutlet?.target = self
      cellOutlet?.action = "myAction:"
     case .multipleSelection :
      cellOutlet?.stringValue = "Multiple Selection"
      cellOutlet?.enabled = false
      cellOutlet?.target = nil
      cellOutlet?.action = ""
    }
  }

  //···················································································································*
  
  func myAction (sender : EBSwitch) {
    mProperty?.validateAndSetProp (sender.state == NSOnState, windowForSheet:sender.window)
  }

  //···················································································································* 
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
