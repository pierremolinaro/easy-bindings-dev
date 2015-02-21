import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller MyPrefs prefBoolean - PMSwitch $value                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyPrefs_prefBoolean_PMSwitch_value)
class Controller_MyPrefs_prefBoolean_PMSwitch_value : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : MyPrefs? = nil
  weak  var mOutlet: PMSwitch? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyPrefs.prefBoolean.PMSwitch.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyPrefs?, outlet : PMSwitch?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMSwitch) {
        presentErrorWindow (file, line, "outlet is not an instance of PMSwitch")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
        if unwrappedOutlet.formatter != nil {
          presentErrorWindow (file, line, "the outlet has a formatter")
        }
      }
    }
    mObject?.addObserverOf_prefBoolean (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_prefBoolean (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject {
      outlet.state = object.prefBoolean ? 1 : 0
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMSwitch) {
    if let outlet = mOutlet, object = mObject {
      object.prefBoolean = outlet.state != 0
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
//   Controller MyRootEntity docBool - PMSwitch $value                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_MyRootEntity_docBool_PMSwitch_value)
class Controller_MyRootEntity_docBool_PMSwitch_value : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject : MyRootEntity? = nil
  weak  var mOutlet: PMSwitch? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "Controller.MyRootEntity.docBool.PMSwitch.value" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity?, outlet : PMSwitch?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject = object
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      if !unwrappedOutlet.isKindOfClass (PMSwitch) {
        presentErrorWindow (file, line, "outlet is not an instance of PMSwitch")
      }else{
        mOutlet = unwrappedOutlet
        unwrappedOutlet.target = self
        unwrappedOutlet.action = "action:"
        if unwrappedOutlet.formatter != nil {
          presentErrorWindow (file, line, "the outlet has a formatter")
        }
      }
    }
    mObject?.addObserverOf_docBool (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet?.target = nil
    mOutlet?.action = nil
    mObject?.removeObserverOf_docBool (self, inTrigger:false)
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
    if let outlet = mOutlet, object = mObject {
      outlet.state = object.docBool ? 1 : 0
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : PMSwitch) {
    if let outlet = mOutlet, object = mObject {
      object.docBool = outlet.state != 0
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
}

@objc(EnableController_MyDocument_myButton)
class EnableController_MyDocument_myButton : NSObject, PMTransientEventProtocol, PMUserClassName {

  weak var mObject0 : MyRootEntity? = nil
  weak var mObject1 : MyPrefs? = nil
  weak var mOutlet : PMEnableProtocol? = nil

  //-------------------------------------------------------------------------------------------------------------------*
 
  func userClassName () -> String { return "EnableController_MyDocument_myButton" }

  //-------------------------------------------------------------------------------------------------------------------*

  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object0 : MyRootEntity?, object1 : MyPrefs?, outlet : PMEnableProtocol?, file : String, line : Int) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObject0 = object0
    mObject1 = object1
    super.init ()
    noteObjectAllocation (self)
    if let unwrappedOutlet = outlet {
      mOutlet = unwrappedOutlet
    }
    mObject0?.addObserverOf_docBool (self, inTrigger:true)
    mObject1?.addObserverOf_prefBoolean (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mObject0?.removeObserverOf_docBool (self, inTrigger:true)
    mObject1?.removeObserverOf_prefBoolean (self, inTrigger:true)
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
      if let object0 = mObject0 {
      if let object1 = mObject1 {
        outlet.setEnableFromBinding ((!(object0.docBool) && object1.prefBoolean))
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

