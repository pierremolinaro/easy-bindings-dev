import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMColorWell) class PMColorWell : NSColorWell, PMUserClassName {

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
  //  color binding                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMColorWell_color?
  var mSendContinously = false

  func bind_color (object:PMStoredProperty_NSColor, file:String, line:Int, sendContinously:Bool) {
    mSendContinously = sendContinously
    mValueController = Controller_PMColorWell_color (object:object, outlet:self, file:file, line:line, sendContinously:sendContinously)
  }

  func unbind_color () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMColorWell_color                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_PMColorWell_color : PMOutletEvent {

  var mObject : PMStoredProperty_NSColor
  var mOutlet: PMColorWell
  var mSendContinously : Bool

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMStoredProperty_NSColor, outlet : PMColorWell, file : String, line : Int, sendContinously : Bool) {
    mObject = object
    mOutlet = outlet
    mSendContinously = sendContinously
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
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "No Selection"
    case .singleSelection (let v) :
      mOutlet.enableFromValue (true)
      mOutlet.color = v
    case .multipleSelection :
      mOutlet.enableFromValue (false)
      mOutlet.stringValue = "Multiple Selection"
    }
    mOutlet.updateEnabledState()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMColorWell) {
    let validationResult = mObject.validate (mOutlet.color)
    switch validationResult {
    case PMValidationResult.ok :
      mObject.setProp (mOutlet.color)
      if mSendContinously {
        flushOutletEvents ()
      }
    case PMValidationResult.rejectWithBeep :
      NSBeep ()
    case PMValidationResult.rejectWithAlert (let informativeText) :
      if let window = sender.window {
        let alert = NSAlert ()
        alert.messageText = String (format:"The color “%@” is invalid.", mOutlet.color)
        alert.informativeText = informativeText
        alert.addButtonWithTitle ("Ok")
        alert.addButtonWithTitle ("Discard Change")
        alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            self.mObject.postEvent ()
          }
        })
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
