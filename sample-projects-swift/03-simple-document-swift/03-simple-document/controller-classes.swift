import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller MyRootEntity myColor - PMColorWell $color                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myColor_PMColorWell_color)
class Controller_MyRootEntity_myColor_PMColorWell_color : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak  var mOutlet: PMColorWell? = nil
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
    mObject?.myColor.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.myColor.removeObserver (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.color != object.myColor.value {
      outlet.color = object.myColor.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMColorWell) {
    if let outlet = mOutlet, object = mObject {
      let validationResult = object.myColor.validate (outlet.color)
      switch validationResult {
      case PMValidationResult.ok :
        object.myColor.value = outlet.color
        if mSendContinously {
          flushTriggers ()
        }
      case PMValidationResult.rejectWithBeep :
         NSBeep ()
      case PMValidationResult.rejectWithAlert (let informativeText) :
        if let window = sender.window {
          let alert = NSAlert ()
          alert.messageText = String (format:"The color “%@” is invalid.", outlet.color)
          alert.informativeText = informativeText
          alert.addButtonWithTitle ("Ok")
          alert.addButtonWithTitle ("Discard Change")
          alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
          if response == NSAlertSecondButtonReturn { // Discard Change
            outlet.color = object.myColor.value
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
//   Controller MyRootEntity myEnumeration - PMMatrix $selectedIndex                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myEnumeration_PMMatrix_selectedIndex)
class Controller_MyRootEntity_myEnumeration_PMMatrix_selectedIndex : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak  var mOutlet: PMMatrix? = nil

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
    mObject?.myEnumeration.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.myEnumeration.removeObserver (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.selectedRow != object.myEnumeration.value.rawValue {
      outlet.selectCellAtRow (object.myEnumeration.value.rawValue, column:0)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if let outlet = mOutlet, object = mObject where outlet.selectedRow != object.myEnumeration.value.rawValue {
      object.myEnumeration.value = object.myEnumeration.value.enumfromRawValue (outlet.selectedRow)
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
//   Controller MyRootEntity myString - PMTextField $value                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myString_PMTextField_value)
class Controller_MyRootEntity_myString_PMTextField_value : NSObject, PMTransientEventProtocol, PMUserClassName {

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
    mObject?.myString.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.myString.removeObserver (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.myString.value {
      outlet.stringValue = object.myString.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMTextField) {
    if let outlet = mOutlet, object = mObject {
      let validationResult = object.myString.validate (outlet.stringValue)
      switch validationResult {
      case PMValidationResult.ok :
        object.myString.value = outlet.stringValue
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
              outlet.stringValue = object.myString.value
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
//   Controller MyRootEntity myStringConcat - PMTextField $rvalue                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myStringConcat_PMTextField_rvalue)
class Controller_MyRootEntity_myStringConcat_PMTextField_rvalue : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak  var mOutlet: PMTextField? = nil

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
    mObject?.myStringConcat.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.myStringConcat.removeObserver (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.myStringConcat.value {
      outlet.stringValue = object.myStringConcat.value
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
//   Controller MyRootEntity myStringMaj - PMTextField $rvalue                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myStringMaj_PMTextField_rvalue)
class Controller_MyRootEntity_myStringMaj_PMTextField_rvalue : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak  var mOutlet: PMTextField? = nil

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
    mObject?.myStringMaj.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.myStringMaj.removeObserver (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.myStringMaj.value {
      outlet.stringValue = object.myStringMaj.value
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
//   Controller MyRootEntity myStringMin - PMTextField $rvalue                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_myStringMin_PMTextField_rvalue)
class Controller_MyRootEntity_myStringMin_PMTextField_rvalue : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak  var mOutlet: PMTextField? = nil

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
    mObject?.myStringMin.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject?.myStringMin.removeObserver (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject where outlet.stringValue != object.myStringMin.value {
      outlet.stringValue = object.myStringMin.value
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

