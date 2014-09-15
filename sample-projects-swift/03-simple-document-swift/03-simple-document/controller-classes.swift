import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller MyRootEntity myColor - PMColorWell $color                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myColor_PMColorWell_color)
class Controller_MyRootEntity_myColor_PMColorWell_color : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMColorWell? = nil
  var mSendContinously : Bool

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.myColor.PMColorWell.color" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMColorWell?, file : String, line : Int, sendContinously : Bool) {
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
    mObject?.addObserverOf_myColor (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_myColor (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.color != mObject!.myColor) {
      mOutlet!.color = mObject!.myColor
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.color != mObject!.myColor) {
      mObject!.myColor = mOutlet!.color
      if mSendContinously {
        flushTriggers ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMColorWell) {
    if let outlet = mOutlet {
      if let object = mObject {
        let validationResult = object.validate_myColor (outlet.color)
        switch validationResult {
        case PMValidationResult.ok :
          object.myColor = outlet.color
          if mSendContinously {
            flushTriggers ()
          }
        case PMValidationResult.rejectWithBeep :
          NSBeep ()
        case PMValidationResult.rejectWithAlert (let informativeText) :
          let alert = NSAlert ()
          alert.messageText = NSString (format:"The color “%@” is invalid.", outlet.color)
          alert.informativeText = informativeText
          alert.addButtonWithTitle ("Ok")
          alert.addButtonWithTitle ("Discard Change")
          alert.beginSheetModalForWindow (sender.window, completionHandler:{(response : NSModalResponse) -> Void in
            if response == NSAlertSecondButtonReturn { // Discard Change
              outlet.color = object.myColor
            }
          })
        }
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
//   Controller MyRootEntity myEnumeration - PMMatrix $selectedIndex                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myEnumeration_PMMatrix_selectedIndex)
class Controller_MyRootEntity_myEnumeration_PMMatrix_selectedIndex : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMMatrix? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.myEnumeration.PMMatrix.selectedIndex" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMMatrix?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMMatrix) {
        presentErrorWindow (file, line, "outlet is not an instance of PMMatrix")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
      }
    }
    mObject?.addObserverOf_myEnumeration (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_myEnumeration (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.selectedRow != mObject!.myEnumeration.toRaw ()) {
      mOutlet!.selectCellAtRow (mObject!.myEnumeration.toRaw (), column:0)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.selectedRow != mObject!.myEnumeration.toRaw ()) {
      mObject!.myEnumeration = mObject!.myEnumeration.enumfromRawValue (mOutlet!.selectedRow)
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
//   Controller MyRootEntity myString - PMTextField $value                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myString_PMTextField_value)
class Controller_MyRootEntity_myString_PMTextField_value : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.myString.PMTextField.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMTextField?, file : String, line : Int, sendContinously : Bool) {
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

  func action (sender : PMTextField) {
    if let outlet = mOutlet {
      if let object = mObject {
        let validationResult = object.validate_myString (outlet.stringValue)
        switch validationResult {
        case PMValidationResult.ok :
          object.myString = outlet.stringValue
        case PMValidationResult.rejectWithBeep :
          NSBeep ()
        case PMValidationResult.rejectWithAlert (let informativeText) :
          let alert = NSAlert ()
          alert.messageText = NSString (format:"The value “%@” is invalid.", outlet.stringValue)
          alert.informativeText = informativeText
          alert.addButtonWithTitle ("Ok")
          alert.addButtonWithTitle ("Discard Change")
          alert.beginSheetModalForWindow (sender.window, completionHandler:{(response : NSModalResponse) -> Void in
            if response == NSAlertSecondButtonReturn { // Discard Change
              outlet.stringValue = object.myString
            }
          })
        }
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
//   Controller MyRootEntity myStringConcat - PMTextField $rvalue                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myStringConcat_PMTextField_rvalue)
class Controller_MyRootEntity_myStringConcat_PMTextField_rvalue : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.myStringConcat.PMTextField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMTextField?, file : String, line : Int) {
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
    mObject?.addObserverOf_myStringConcat (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_myStringConcat (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.myStringConcat) {
      mOutlet!.stringValue = mObject!.myStringConcat
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
//   Controller MyRootEntity myStringMaj - PMTextField $rvalue                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myStringMaj_PMTextField_rvalue)
class Controller_MyRootEntity_myStringMaj_PMTextField_rvalue : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.myStringMaj.PMTextField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMTextField?, file : String, line : Int) {
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
    mObject?.addObserverOf_myStringMaj (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_myStringMaj (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.myStringMaj) {
      mOutlet!.stringValue = mObject!.myStringMaj
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
//   Controller MyRootEntity myStringMin - PMTextField $rvalue                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myStringMin_PMTextField_rvalue)
class Controller_MyRootEntity_myStringMin_PMTextField_rvalue : NSObject, PMTriggerProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak var mOutlet: PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.myStringMin.PMTextField.rvalue" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMTextField?, file : String, line : Int) {
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
    mObject?.addObserverOf_myStringMin (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.removeObserverOf_myStringMin (self, inTrigger:false)
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
    if (mOutlet != nil) && (mObject != nil) && (mOutlet!.stringValue != mObject!.myStringMin) {
      mOutlet!.stringValue = mObject!.myStringMin
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

