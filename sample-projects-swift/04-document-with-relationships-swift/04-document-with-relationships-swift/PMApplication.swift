//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

let TRACE_TRANSIENT_TRIGGER = false

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T O P O L O G I C A L    S O R T    O F    P R O P E R T I E S                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// entity.NameEntity.mRoot
// entity.NameEntity.name
// document.PMDocument.canRemoveString
// document.PMDocument.countItemMessage
// document.PMDocument.total
// document.PMDocument.nameController
// entity.MyRootEntity.mNames
// entity.NameEntity.aValue


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    I N D E X E S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

let kTriggerOutletDisplay = 0
let k_document_2E_PMDocument_2E_canRemoveString = 1
let k_document_2E_PMDocument_2E_countItemMessage = 2
let k_document_2E_PMDocument_2E_total = 3
let k_document_2E_PMDocument_2E_nameController = 4

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    C L A S S E S                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTriggerProtocol)
protocol PMTriggerProtocol : NSObjectProtocol {
  var mTransientIndex : Int { get } // Note: we cannot use an enumeration here
  func noteTransientDidChange ()
  func trigger ()
  func unregister ()
  var className : String! { get } // Handled by NSObject
}


//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTrigger_document_2E_PMDocument_2E_canRemoveString)
class PMTrigger_document_2E_PMDocument_2E_canRemoveString : NSObject, PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.canRemoveString" }

  var mTransientIndex : Int { get { return k_document_2E_PMDocument_2E_canRemoveString } }
  
  init (object : PMDocument) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
  }

  func noteTransientDidChange () {
    mTriggerObject?.document_2E_PMDocument_2E_canRemoveString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.document_2E_PMDocument_2E_canRemoveString_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTrigger_document_2E_PMDocument_2E_countItemMessage)
class PMTrigger_document_2E_PMDocument_2E_countItemMessage : NSObject, PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.countItemMessage" }

  var mTransientIndex : Int { get { return k_document_2E_PMDocument_2E_countItemMessage } }
  
  init (object : PMDocument) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
  }

  func noteTransientDidChange () {
    mTriggerObject?.document_2E_PMDocument_2E_countItemMessage_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.document_2E_PMDocument_2E_countItemMessage_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTrigger_document_2E_PMDocument_2E_total)
class PMTrigger_document_2E_PMDocument_2E_total : NSObject, PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.total" }

  var mTransientIndex : Int { get { return k_document_2E_PMDocument_2E_total } }
  
  init (object : PMDocument) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
  }

  func noteTransientDidChange () {
    mTriggerObject?.document_2E_PMDocument_2E_total_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.document_2E_PMDocument_2E_total_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTrigger_document_2E_PMDocument_2E_nameController)
class PMTrigger_document_2E_PMDocument_2E_nameController : NSObject, PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.nameController" }

  var mTransientIndex : Int { get { return k_document_2E_PMDocument_2E_nameController } }
  
  init (object : PMDocument) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
  }

  func noteTransientDidChange () {
    mTriggerObject?.document_2E_PMDocument_2E_nameController_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.document_2E_PMDocument_2E_nameController_trigger ()
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    F U N C T I O N                                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func enterTriggerWithObject (inObject : PMTriggerProtocol) {
  var theApp = NSApp as PMApplication
  theApp.enterTriggerWithObject (inObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    R U N    T R I G G E R S                                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func flushTriggers () {
  var theApp = NSApp as PMApplication
  theApp.runTriggers ()
  displayAllocation ()
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P L I C A T I O N    C L A S S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMApplication) class PMApplication : NSApplication {
  private var mLevel = 0
  private var mTriggerOutletDisplaySet = NSMutableSet ()
 
  //-------------------------------------------------------------------------------------------------------------------*

  private var mTriggerSet_document_2E_PMDocument_2E_canRemoveString = NSMutableSet () // 1
  private var mTriggerSet_document_2E_PMDocument_2E_countItemMessage = NSMutableSet () // 2
  private var mTriggerSet_document_2E_PMDocument_2E_total = NSMutableSet () // 3
  private var mTriggerSet_document_2E_PMDocument_2E_nameController = NSMutableSet () // 4

  //-------------------------------------------------------------------------------------------------------------------*

  private func enterTriggerWithObject (inObject : PMTriggerProtocol) {
    inObject.noteTransientDidChange ()
    let transientIndex = inObject.mTransientIndex
    switch transientIndex {
    case kTriggerOutletDisplay :
      mTriggerOutletDisplaySet.addObject (inObject)
    case k_document_2E_PMDocument_2E_canRemoveString :
      mTriggerSet_document_2E_PMDocument_2E_canRemoveString.addObject (inObject)
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.canRemoveString, %d objects", mTriggerSet_document_2E_PMDocument_2E_canRemoveString.count)
      }
    case k_document_2E_PMDocument_2E_countItemMessage :
      mTriggerSet_document_2E_PMDocument_2E_countItemMessage.addObject (inObject)
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.countItemMessage, %d objects", mTriggerSet_document_2E_PMDocument_2E_countItemMessage.count)
      }
    case k_document_2E_PMDocument_2E_total :
      mTriggerSet_document_2E_PMDocument_2E_total.addObject (inObject)
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.total, %d objects", mTriggerSet_document_2E_PMDocument_2E_total.count)
      }
    case k_document_2E_PMDocument_2E_nameController :
      mTriggerSet_document_2E_PMDocument_2E_nameController.addObject (inObject)
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.nameController, %d objects", mTriggerSet_document_2E_PMDocument_2E_nameController.count)
      }
    default: break
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func sendEvent (inEvent : NSEvent!) {
    mLevel += 1
    // NSLog ("send event %d", mLevel)
    super.sendEvent (inEvent)
    mLevel -= 1
    // NSLog ("send event done %d", mLevel)
    if 0 == mLevel {
      runTriggers ()
      displayAllocation ()
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  override func sendAction (theAction: Selector, to theTarget: AnyObject!, from sender: AnyObject!) -> Bool {
    mLevel += 1
    // NSLog ("send action %d", mLevel)
    let result = super.sendAction (theAction, to:theTarget, from:sender)
    mLevel -= 1
    // NSLog ("send action done %d", mLevel)
    if 0 == mLevel {
      runTriggers ()
      displayAllocation ()
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private func runTriggers () {
    if mTriggerSet_document_2E_PMDocument_2E_nameController.count > 0 { // 4
      for anyObject in mTriggerSet_document_2E_PMDocument_2E_nameController {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_nameController = NSMutableSet ()
    }    
    if mTriggerSet_document_2E_PMDocument_2E_total.count > 0 { // 3
      for anyObject in mTriggerSet_document_2E_PMDocument_2E_total {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_total = NSMutableSet ()
    }    
    if mTriggerSet_document_2E_PMDocument_2E_countItemMessage.count > 0 { // 2
      for anyObject in mTriggerSet_document_2E_PMDocument_2E_countItemMessage {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_countItemMessage = NSMutableSet ()
    }    
    if mTriggerSet_document_2E_PMDocument_2E_canRemoveString.count > 0 { // 1
      for anyObject in mTriggerSet_document_2E_PMDocument_2E_canRemoveString {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_canRemoveString = NSMutableSet ()
    }    
    if mTriggerOutletDisplaySet.count > 0 {
      for anyObject in mTriggerOutletDisplaySet {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerOutletDisplaySet = NSMutableSet ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

