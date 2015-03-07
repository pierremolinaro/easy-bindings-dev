import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMColorWell) class PMColorWell : NSColorWell, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMColorWell" }
 
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
  //  color binding                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMColorWell_color?
  var mSendContinously = false

  func bind_color (object:PMStoredProperty <NSColor>, file:String, line:Int, sendContinously:Bool) {
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

@objc(Controller_PMColorWell_color)
class Controller_PMColorWell_color : NSObject, PMTransientEventProtocol, PMUserClassName {

  var mObject : PMStoredProperty <NSColor>
  var mOutlet: PMColorWell
  var mSendContinously : Bool

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMColorWell.color" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMStoredProperty <NSColor>, outlet : PMColorWell, file : String, line : Int, sendContinously : Bool) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    mOutlet = outlet
    mSendContinously = sendContinously
    super.init ()
    noteObjectAllocation (self)
    mOutlet.target = self
    mOutlet.action = "action:"
    mOutlet.continuous = true
    mObject.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func noteModelDidChange () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if mOutlet.color != mObject.value {
      mOutlet.color = mObject.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMColorWell) {
    let validationResult = mObject.validate (mOutlet.color)
    switch validationResult {
    case PMValidationResult.ok :
      mObject.setValue (mOutlet.color)
      if mSendContinously {
        flushTriggers ()
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
            self.mOutlet.color = self.mObject.value
          }
        })
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
