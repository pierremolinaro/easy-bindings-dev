import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Prefs mFirstName - PMTextField $value                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mFirstName_PMTextField_value)
class Controller_Prefs_mFirstName_PMTextField_value : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : Prefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.Prefs.mFirstName.PMTextField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMTextField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMTextField")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
        unwrappedOutlet.setSendContinously(sendContinously)
        if unwrappedOutlet.formatter != nil {
          presentErrorWindow (file, line, "the outlet has a formatter")
        }
      }
    }
    mObject?.mFirstName.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.mFirstName.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientDidChange () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mFirstName.value {
      outlet.stringValue = object.mFirstName.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMTextField) {
    if let outlet = mOutlet, object = mObject {
      let validationResult = object.mFirstName.validate (outlet.stringValue)
      switch validationResult {
      case PMValidationResult.ok :
        object.mFirstName.value = outlet.stringValue
      case PMValidationResult.rejectWithBeep :
        NSBeep ()
      case PMValidationResult.rejectWithAlert (let informativeText) :
        if let window = sender.window {
          let alert = NSAlert ()
          alert.messageText = String (format:"The value “%@” is invalid.", outlet.stringValue)
          alert.informativeText = informativeText
          alert.addButtonWithTitle ("Ok")
          alert.addButtonWithTitle ("Discard Change")
          alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
            if response == NSAlertSecondButtonReturn { // Discard Change
              outlet.stringValue = object.mFirstName.value
            }
          })
        }
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
//   Controller Prefs mFullName - PMTextField $rvalue                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mFullName_PMTextField_rvalue)
class Controller_Prefs_mFullName_PMTextField_rvalue : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : Prefs? = nil
  weak  var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.Prefs.mFullName.PMTextField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMTextField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMTextField")
      }else{
        mOutlet = unwrappedOutlet
        if unwrappedOutlet.formatter != nil {
          presentErrorWindow (file, line, "the outlet has a formatter")
        }
      }
    }
    mObject?.mFullName.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.mFullName.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientDidChange () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mFullName.value {
      outlet.stringValue = object.mFullName.value
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
//   Controller Prefs mName - PMTextField $value                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mName_PMTextField_value)
class Controller_Prefs_mName_PMTextField_value : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : Prefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.Prefs.mName.PMTextField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMTextField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMTextField")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
        unwrappedOutlet.setSendContinously(sendContinously)
        if unwrappedOutlet.formatter != nil {
          presentErrorWindow (file, line, "the outlet has a formatter")
        }
      }
    }
    mObject?.mName.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.mName.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientDidChange () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mName.value {
      outlet.stringValue = object.mName.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMTextField) {
    if let outlet = mOutlet, object = mObject {
      let validationResult = object.mName.validate (outlet.stringValue)
      switch validationResult {
      case PMValidationResult.ok :
        object.mName.value = outlet.stringValue
      case PMValidationResult.rejectWithBeep :
        NSBeep ()
      case PMValidationResult.rejectWithAlert (let informativeText) :
        if let window = sender.window {
          let alert = NSAlert ()
          alert.messageText = String (format:"The value “%@” is invalid.", outlet.stringValue)
          alert.informativeText = informativeText
          alert.addButtonWithTitle ("Ok")
          alert.addButtonWithTitle ("Discard Change")
          alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
            if response == NSAlertSecondButtonReturn { // Discard Change
              outlet.stringValue = object.mName.value
            }
          })
        }
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
//   Controller Prefs mUpperCaseFullName - PMTextField $rvalue                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mUpperCaseFullName_PMTextField_rvalue)
class Controller_Prefs_mUpperCaseFullName_PMTextField_rvalue : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : Prefs? = nil
  weak  var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.Prefs.mUpperCaseFullName.PMTextField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMTextField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMTextField")
      }else{
        mOutlet = unwrappedOutlet
        if unwrappedOutlet.formatter != nil {
          presentErrorWindow (file, line, "the outlet has a formatter")
        }
      }
    }
    mObject?.mUpperCaseFullName.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.mUpperCaseFullName.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  deinit {
    noteObjectDeallocation (self)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientDidChange () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func trigger () {
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mUpperCaseFullName.value {
      outlet.stringValue = object.mUpperCaseFullName.value
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

