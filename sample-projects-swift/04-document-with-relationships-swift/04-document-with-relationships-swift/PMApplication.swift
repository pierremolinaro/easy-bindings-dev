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

enum PMTransientIndex {
  case kTriggerOutletDisplay // 0
  case k_document_2E_PMDocument_2E_canRemoveString // 1
  case k_document_2E_PMDocument_2E_countItemMessage // 2
  case k_document_2E_PMDocument_2E_total // 3
  case k_document_2E_PMDocument_2E_nameController // 4
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    C L A S S E S                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

protocol PMTriggerProtocol {
  var mTransientIndex : PMTransientIndex { get }
  func noteTransientDidChange ()
  func trigger ()
  func unregister ()
  var uniqueIndex : Int { get }
}


//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_document_2E_PMDocument_2E_canRemoveString : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.canRemoveString" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_canRemoveString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
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

class PMTrigger_document_2E_PMDocument_2E_countItemMessage : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.countItemMessage" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_countItemMessage } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
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

class PMTrigger_document_2E_PMDocument_2E_total : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.total" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_total } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
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

class PMTrigger_document_2E_PMDocument_2E_nameController : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : PMDocument? = nil

  func userClassName () -> String { return "PMTrigger_document.PMDocument.nameController" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_nameController } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
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
  private var mTriggerOutletDisplaySet : [Int : PMTriggerProtocol] = [:]
 
  //-------------------------------------------------------------------------------------------------------------------*

  private var mTriggerSet_document_2E_PMDocument_2E_canRemoveString : [Int : PMTriggerProtocol] = [:] // 1
  private var mTriggerSet_document_2E_PMDocument_2E_countItemMessage : [Int : PMTriggerProtocol] = [:] // 2
  private var mTriggerSet_document_2E_PMDocument_2E_total : [Int : PMTriggerProtocol] = [:] // 3
  private var mTriggerSet_document_2E_PMDocument_2E_nameController : [Int : PMTriggerProtocol] = [:] // 4

  //-------------------------------------------------------------------------------------------------------------------*

  private func enterTriggerWithObject (inObject : PMTriggerProtocol) {
    inObject.noteTransientDidChange ()
    let transientIndex = inObject.mTransientIndex
    switch transientIndex {
    case PMTransientIndex.kTriggerOutletDisplay :
      mTriggerOutletDisplaySet [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_document_2E_PMDocument_2E_canRemoveString :
      mTriggerSet_document_2E_PMDocument_2E_canRemoveString [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.canRemoveString, %d objects", mTriggerSet_document_2E_PMDocument_2E_canRemoveString.count)
      }
    case PMTransientIndex.k_document_2E_PMDocument_2E_countItemMessage :
      mTriggerSet_document_2E_PMDocument_2E_countItemMessage [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.countItemMessage, %d objects", mTriggerSet_document_2E_PMDocument_2E_countItemMessage.count)
      }
    case PMTransientIndex.k_document_2E_PMDocument_2E_total :
      mTriggerSet_document_2E_PMDocument_2E_total [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.total, %d objects", mTriggerSet_document_2E_PMDocument_2E_total.count)
      }
    case PMTransientIndex.k_document_2E_PMDocument_2E_nameController :
      mTriggerSet_document_2E_PMDocument_2E_nameController [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger document.PMDocument.nameController, %d objects", mTriggerSet_document_2E_PMDocument_2E_nameController.count)
      }
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
      for object in mTriggerSet_document_2E_PMDocument_2E_nameController.values {
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_nameController = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_total.count > 0 { // 3
      for object in mTriggerSet_document_2E_PMDocument_2E_total.values {
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_total = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_countItemMessage.count > 0 { // 2
      for object in mTriggerSet_document_2E_PMDocument_2E_countItemMessage.values {
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_countItemMessage = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_canRemoveString.count > 0 { // 1
      for object in mTriggerSet_document_2E_PMDocument_2E_canRemoveString.values {
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_canRemoveString = [:]
    }    
    if mTriggerOutletDisplaySet.count > 0 {
      for object in mTriggerOutletDisplaySet.values {
        object.trigger ()
      }
      mTriggerOutletDisplaySet = [:]
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

