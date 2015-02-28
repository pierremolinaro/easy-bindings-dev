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
    mObject?.addObserverOf_mFirstName (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_mFirstName (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mFirstName {
      outlet.stringValue = object.mFirstName
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMTextField) {
    if let outlet = mOutlet, object = mObject {
      let validationResult = object.validate_mFirstName (outlet.stringValue)
      switch validationResult {
      case PMValidationResult.ok :
        object.mFirstName = outlet.stringValue
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
              outlet.stringValue = object.mFirstName
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
    mObject?.addObserverOf_mFullName (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_mFullName (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mFullName {
      outlet.stringValue = object.mFullName
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
    mObject?.addObserverOf_mName (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_mName (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mName {
      outlet.stringValue = object.mName
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMTextField) {
    if let outlet = mOutlet, object = mObject {
      let validationResult = object.validate_mName (outlet.stringValue)
      switch validationResult {
      case PMValidationResult.ok :
        object.mName = outlet.stringValue
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
              outlet.stringValue = object.mName
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
    mObject?.addObserverOf_mUpperCaseFullName (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_mUpperCaseFullName (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.mUpperCaseFullName {
      outlet.stringValue = object.mUpperCaseFullName
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

