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
//   Controller MyRootEntity mNames_count - PMTextField $value                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_mNames_count_PMTextField_value)
class Controller_MyRootEntity_mNames_count_PMTextField_value : NSObject, PMTriggerProtocol, NSTextFieldDelegate {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
    mObject = object
    mOutlet = outlet
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
    mOutlet?.target = nil
    mOutlet?.action = nil
    mOutlet?.delegate = nil
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

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.integerValue != mObject!.mNames_count) {
      mObject!.mNames_count = mOutlet!.integerValue
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    NSTextFieldDelegate delegate function                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func control (control: NSControl!,
                didFailToFormatString string: String!,
                errorDescription error: String!) -> Bool {
    let alert = NSAlert ()
    alert.messageText = error
    alert.informativeText = "Please provide a valid value."
    alert.addButtonWithTitle ("Ok")
    alert.addButtonWithTitle ("Discard Change")
    alert.beginSheetModalForWindow (mOutlet!.window, completionHandler:{(response : NSModalResponse) -> Void in
      if response == NSAlertSecondButtonReturn { // Discard Change
        self.mOutlet!.integerValue = Int (self.mObject!.mNames_count)
      }
    })
    return false
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
//   Controller PMDocument canRemoveString - PMTextField $value                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDocument_canRemoveString_PMTextField_value)
class Controller_PMDocument_canRemoveString_PMTextField_value : NSObject, PMTriggerProtocol {

  weak var mObject : PMDocument? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMDocument?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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
    mObject?.addObserverOf_canRemoveString (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
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

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.canRemoveString) {
      mObject!.canRemoveString = mOutlet!.stringValue
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
//   Controller PMDocument countItemMessage - PMTextField $value                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDocument_countItemMessage_PMTextField_value)
class Controller_PMDocument_countItemMessage_PMTextField_value : NSObject, PMTriggerProtocol {

  weak var mObject : PMDocument? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMDocument?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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
    mObject?.addObserverOf_countItemMessage (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
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

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.countItemMessage) {
      mObject!.countItemMessage = mOutlet!.stringValue
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

