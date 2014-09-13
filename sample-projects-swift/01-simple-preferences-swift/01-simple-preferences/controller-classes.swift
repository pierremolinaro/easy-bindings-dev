import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller PMPrefs mColor - PMColorWell $color                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_mColor_PMColorWell_color)
class Controller_PMPrefs_mColor_PMColorWell_color : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMColorWell? = nil
  var mSendContinously : Bool

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMPrefs.mColor.PMColorWell.color" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMColorWell?, file : String, line : Int, sendContinously : Bool) {
    mPrivateUniqueIndex = getUniqueIndex ()
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

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller PMPrefs mDate - PMDatePicker $date                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_mDate_PMDatePicker_date)
class Controller_PMPrefs_mDate_PMDatePicker_date : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMDatePicker? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMPrefs.mDate.PMDatePicker.date" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMDatePicker?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
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

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller PMPrefs mIntegerValue - PMNumberField $value                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_mIntegerValue_PMNumberField_value)
class Controller_PMPrefs_mIntegerValue_PMNumberField_value : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMNumberField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMPrefs.mIntegerValue.PMNumberField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMNumberField?, file : String, line : Int, sendContinously : Bool) {
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
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
        unwrappedOutlet.setSendContinously(sendContinously)
        if unwrappedOutlet.formatter == nil {
          presentErrorWindow (file, line, "the outlet has no formatter")
        }else if !(unwrappedOutlet.formatter is NSNumberFormatter) {
          presentErrorWindow (file, line, "the formatter should be an NSNumberFormatter")
        }
      }
    }
    mObject?.addObserverOf_mIntegerValue (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
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
      mOutlet!.myIntegerValue = mObject!.mIntegerValue
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.integerValue != mObject!.mIntegerValue) {
      mObject!.mIntegerValue = mOutlet!.integerValue
    }
  }

   //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller PMPrefs myString - PMTextField $value                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMPrefs_myString_PMTextField_value)
class Controller_PMPrefs_myString_PMTextField_value : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : PMPrefs? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.PMPrefs.myString.PMTextField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMPrefs?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

