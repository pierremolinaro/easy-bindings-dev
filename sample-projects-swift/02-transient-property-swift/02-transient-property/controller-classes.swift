import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Prefs mFirstName - PMTextField $value                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mFirstName_PMTextField_value)
class Controller_Prefs_mFirstName_PMTextField_value : NSObject, PMTriggerProtocol {

  weak var mObject : Prefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.mFirstName) {
      mOutlet!.stringValue = mObject!.mFirstName
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.mFirstName) {
      mObject!.mFirstName = mOutlet!.stringValue
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex : Int {
    get {
      return kTriggerOutletDisplay
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Prefs mFullName - PMTextField $rvalue                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mFullName_PMTextField_rvalue)
class Controller_Prefs_mFullName_PMTextField_rvalue : NSObject, PMTriggerProtocol {

  weak var mObject : Prefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int) {
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.mFullName) {
      mOutlet!.stringValue = mObject!.mFullName
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex : Int { get { return kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Prefs mName - PMTextField $value                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mName_PMTextField_value)
class Controller_Prefs_mName_PMTextField_value : NSObject, PMTriggerProtocol {

  weak var mObject : Prefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.mName) {
      mOutlet!.stringValue = mObject!.mName
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.mName) {
      mObject!.mName = mOutlet!.stringValue
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex : Int {
    get {
      return kTriggerOutletDisplay
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Prefs mUpperCaseFullName - PMTextField $rvalue                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_Prefs_mUpperCaseFullName_PMTextField_rvalue)
class Controller_Prefs_mUpperCaseFullName_PMTextField_rvalue : NSObject, PMTriggerProtocol {

  weak var mObject : Prefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : Prefs?, outlet : PMTextField?, file : String, line : Int) {
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.mUpperCaseFullName) {
      mOutlet!.stringValue = mObject!.mUpperCaseFullName
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex : Int { get { return kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

