import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller ArrayController_MyRootEntity_mNames canRemove - PMButton $enabled                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_ArrayController_MyRootEntity_mNames_canRemove_PMButton_enabled)
class Controller_ArrayController_MyRootEntity_mNames_canRemove_PMButton_enabled : NSObject, PMTriggerProtocol {

  weak var mObject : ArrayController_MyRootEntity_mNames? = nil
  weak var mOutlet : PMButton? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : ArrayController_MyRootEntity_mNames?, outlet : PMButton?, file : String, line : Int) {
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMButton) {
        presentErrorWindow (file, line, "outlet is not an instance of PMButton")
      }else{
        mOutlet = unwrappedOutlet
      }
    }
    mObject?.addObserverOf_canRemove (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_canRemove (self)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.enabled != mObject!.canRemove) {
      mOutlet!.enabled = mObject!.canRemove
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
//   Controller MyRootEntity mNames_count - PMTextField $rvalue                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_mNames_count_PMTextField_rvalue)
class Controller_MyRootEntity_mNames_count_PMTextField_rvalue : NSObject, PMTriggerProtocol, NSTextFieldDelegate {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMTextField?, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMTextField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMTextField")
      }else{
        mOutlet = unwrappedOutlet
        if unwrappedOutlet.formatter == nil {
          presentErrorWindow (file, line, "the outlet has no formatter")
        }else{
          let formatter : NSFormatter = unwrappedOutlet.formatter as NSFormatter
          if !formatter.isKindOfClass (NSNumberFormatter) {
            presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
          }
        }
      }
    }
    mObject?.addObserverOf_mNames_count (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_mNames_count (self)
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
    if (mOutlet != nil) && (mObject != nil) {
      mOutlet!.integerValue = Int (mObject!.mNames_count)
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
//   Controller PMDocument canRemoveString - PMTextField $rvalue                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDocument_canRemoveString_PMTextField_rvalue)
class Controller_PMDocument_canRemoveString_PMTextField_rvalue : NSObject, PMTriggerProtocol {

  weak var mObject : PMDocument? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMDocument?, outlet : PMTextField?, file : String, line : Int) {
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
    mObject?.addObserverOf_canRemoveString (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_canRemoveString (self)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.canRemoveString) {
      mOutlet!.stringValue = mObject!.canRemoveString
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
//   Controller PMDocument countItemMessage - PMTextField $rvalue                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDocument_countItemMessage_PMTextField_rvalue)
class Controller_PMDocument_countItemMessage_PMTextField_rvalue : NSObject, PMTriggerProtocol {

  weak var mObject : PMDocument? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMDocument?, outlet : PMTextField?, file : String, line : Int) {
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
    mObject?.addObserverOf_countItemMessage (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_countItemMessage (self)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.countItemMessage) {
      mOutlet!.stringValue = mObject!.countItemMessage
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

