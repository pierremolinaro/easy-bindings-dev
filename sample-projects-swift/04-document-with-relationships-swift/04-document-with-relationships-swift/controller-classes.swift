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

