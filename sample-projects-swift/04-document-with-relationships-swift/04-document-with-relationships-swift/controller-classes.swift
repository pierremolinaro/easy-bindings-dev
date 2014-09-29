import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller MyRootEntity mNames_count - PMNumberField $rvalue                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_mNames_count_PMNumberField_rvalue)
class Controller_MyRootEntity_mNames_count_PMNumberField_rvalue : NSObject, PMTransientEventProtocol, NSTextFieldDelegate, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMNumberField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.mNames_count.PMNumberField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMNumberField?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    mOutlet = outlet
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMNumberField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMNumberField")
      }else{
        mOutlet = unwrappedOutlet
        if unwrappedOutlet.formatter == nil {
          presentErrorWindow (file, line, "the outlet has no formatter")
        }else if !(unwrappedOutlet.formatter is NSNumberFormatter) {
          presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
        }
      }
    }
    mObject?.addObserverOf_mNames_count (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_mNames_count (self, inTrigger:false)
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
      mOutlet!.integerValue = mObject!.mNames_count
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
//   Controller PMDocument canRemoveString - PMTextField $rvalue                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDocument_canRemoveString_PMTextField_rvalue)
class Controller_PMDocument_canRemoveString_PMTextField_rvalue : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : PMDocument? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMDocument.canRemoveString.PMTextField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMDocument?, outlet : PMTextField?, file : String, line : Int) {
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
    mObject?.addObserverOf_canRemoveString (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_canRemoveString (self, inTrigger:false)
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

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller PMDocument countItemMessage - PMTextField $rvalue                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDocument_countItemMessage_PMTextField_rvalue)
class Controller_PMDocument_countItemMessage_PMTextField_rvalue : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : PMDocument? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMDocument.countItemMessage.PMTextField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMDocument?, outlet : PMTextField?, file : String, line : Int) {
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
    mObject?.addObserverOf_countItemMessage (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_countItemMessage (self, inTrigger:false)
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

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller PMDocument total - PMNumberField $rvalue                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDocument_total_PMNumberField_rvalue)
class Controller_PMDocument_total_PMNumberField_rvalue : NSObject, PMTransientEventProtocol, NSTextFieldDelegate, PMUserClassName {

  weak var mObject : PMDocument? = nil
  weak var mOutlet: PMNumberField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMDocument.total.PMNumberField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMDocument?, outlet : PMNumberField?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    mOutlet = outlet
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMNumberField) {
        presentErrorWindow (file, line, "outlet is not an instance of PMNumberField")
      }else{
        mOutlet = unwrappedOutlet
        if unwrappedOutlet.formatter == nil {
          presentErrorWindow (file, line, "the outlet has no formatter")
        }else if !(unwrappedOutlet.formatter is NSNumberFormatter) {
          presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
        }
      }
    }
    mObject?.addObserverOf_total (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_total (self, inTrigger:false)
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
      mOutlet!.integerValue = mObject!.total
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

@objc(EnableController_PMDocument_removePathButton)
class EnableController_PMDocument_removePathButton : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : ArrayController_MyRootEntity_mNames? = nil
  weak var mOutlet : PMEnableProtocol? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "EnableController_PMDocument_removePathButton" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : ArrayController_MyRootEntity_mNames?, outlet : PMEnableProtocol?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      mOutlet = unwrappedOutlet
    }
    mObject?.addObserverOf_canRemove (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_canRemove (self, inTrigger:false)
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
    if let outlet = mOutlet {
      if let object = mObject {
        outlet.setEnableFromBinding (object.canRemove)
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

