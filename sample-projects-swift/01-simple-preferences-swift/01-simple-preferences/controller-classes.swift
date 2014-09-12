import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller PMPrefs mColor - PMColorWell $color                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_mColor_PMColorWell_color)
class Controller_PMPrefs_mColor_PMColorWell_color : NSObject, PMTriggerProtocol {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMColorWell? = nil
  var mSendContinously : Bool

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMColorWell?, file : String, line : Int, sendContinously : Bool) {
    mObject = object
    mSendContinously = sendContinously
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMColorWell) {
        presentErrorWindow (file, line, "outlet is not an instance of PMColorWell")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
        unwrappedOutlet.continuous = true
      }
    }
    mObject?.addObserverOf_mColor (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_mColor (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.color != mObject!.mColor) {
      mOutlet!.color = mObject!.mColor
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.color != mObject!.mColor) {
      mObject!.mColor = mOutlet!.color
      if mSendContinously {
        flushTriggers ()
      }
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
//   Controller PMPrefs mDate - PMDatePicker $date                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_mDate_PMDatePicker_date)
class Controller_PMPrefs_mDate_PMDatePicker_date : NSObject, PMTriggerProtocol {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMDatePicker? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMDatePicker?, file : String, line : Int) {
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMDatePicker) {
        presentErrorWindow (file, line, "outlet is not an instance of PMDatePicker")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
      }
    }
    mObject?.addObserverOf_mDate (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_mDate (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && !mOutlet!.dateValue.isEqualToDate (mObject!.mDate) {
      mOutlet!.dateValue = mObject!.mDate
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && !mOutlet!.dateValue.isEqualToDate (mObject!.mDate) {
      mObject!.mDate = mOutlet!.dateValue
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
//   Controller PMPrefs mIntegerValue - PMTextField $value                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_mIntegerValue_PMTextField_value)
class Controller_PMPrefs_mIntegerValue_PMTextField_value : NSObject, PMTriggerProtocol, NSTextFieldDelegate {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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
    mObject?.addObserverOf_mIntegerValue (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mOutlet?.delegate = nil
    mObject?.removeObserverOf_mIntegerValue (self, inTrigger:false)
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
      mOutlet!.integerValue = Int (mObject!.mIntegerValue)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.integerValue != mObject!.mIntegerValue) {
      mObject!.mIntegerValue = mOutlet!.integerValue
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
        self.mOutlet!.integerValue = Int (self.mObject!.mIntegerValue)
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
//   Controller PMPrefs myString - PMTextField $value                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_myString_PMTextField_value)
class Controller_PMPrefs_myString_PMTextField_value : NSObject, PMTriggerProtocol {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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
    mObject?.addObserverOf_myString (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_myString (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.myString) {
      mOutlet!.stringValue = mObject!.myString
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.myString) {
      mObject!.myString = mOutlet!.stringValue
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

