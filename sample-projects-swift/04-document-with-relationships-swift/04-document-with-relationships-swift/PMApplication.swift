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

enum PMTransientIndex : Int {
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

//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_document_2E_PMDocument_2E_canRemoveString : PMTriggerProtocol {
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

class PMTrigger_document_2E_PMDocument_2E_countItemMessage : PMTriggerProtocol {
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

class PMTrigger_document_2E_PMDocument_2E_total : PMTriggerProtocol {
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

class PMTrigger_document_2E_PMDocument_2E_nameController : PMTriggerProtocol {
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
  theApp.postTransientEvent (inObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    R U N    T R I G G E R S                                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func flushTriggers () {
  var theApp = NSApp as PMApplication
  theApp.flushTransientEvents ()
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

  @IBOutlet var mTransientEventExplorerWindow : NSWindow?
  @IBOutlet var mTransientEventExplorerTextView : NSTextView?
 
  //-------------------------------------------------------------------------------------------------------------------*

  override func awakeFromNib () {
    var menuItem = NSMenuItem (
      title:"Show Transient Event Log Window",
      action:"showTransientEventLogWindow:",
      keyEquivalent:""
    )
    addItemToDebugMenu (menuItem)
  }

  //-------------------------------------------------------------------------------------------------------------------*
 
  @IBAction func showTransientEventLogWindow (sender : NSObject) {
    mTransientEventExplorerTextView?.string = ""
    mTransientEventExplorerWindow?.makeKeyAndOrderFront (sender)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
 
  @IBAction func clearTransientEventLogWindow (sender : NSObject) {
    mTransientEventExplorerTextView?.string = ""
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  private func logEvents () -> Bool {
    return (mTransientEventExplorerWindow == nil) ? false : mTransientEventExplorerWindow!.visible
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mTriggerSet_document_2E_PMDocument_2E_canRemoveString : [Int : PMTriggerProtocol] = [:] // 1
  private var mTriggerSet_document_2E_PMDocument_2E_countItemMessage : [Int : PMTriggerProtocol] = [:] // 2
  private var mTriggerSet_document_2E_PMDocument_2E_total : [Int : PMTriggerProtocol] = [:] // 3
  private var mTriggerSet_document_2E_PMDocument_2E_nameController : [Int : PMTriggerProtocol] = [:] // 4

  //-------------------------------------------------------------------------------------------------------------------*

  private func postTransientEvent (inObject : PMTriggerProtocol) {
    let transientIndex = inObject.mTransientIndex
    if logEvents () {
      let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
      mTransientEventExplorerTextView?.appendMessageString (str)
    }
    inObject.noteTransientDidChange ()
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
      flushTransientEvents ()
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
      flushTransientEvents ()
      displayAllocation ()
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private func flushTransientEvents () {
    if mTriggerSet_document_2E_PMDocument_2E_nameController.count > 0 { // 4
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 4: document.PMDocument.nameController\n")
      }
      for object in mTriggerSet_document_2E_PMDocument_2E_nameController.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_nameController = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_total.count > 0 { // 3
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 3: document.PMDocument.total\n")
      }
      for object in mTriggerSet_document_2E_PMDocument_2E_total.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_total = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_countItemMessage.count > 0 { // 2
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 2: document.PMDocument.countItemMessage\n")
      }
      for object in mTriggerSet_document_2E_PMDocument_2E_countItemMessage.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_countItemMessage = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_canRemoveString.count > 0 { // 1
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 1: document.PMDocument.canRemoveString\n")
      }
      for object in mTriggerSet_document_2E_PMDocument_2E_canRemoveString.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_canRemoveString = [:]
    }    
    if mTriggerOutletDisplaySet.count > 0 {
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 0: display outlets\n")
      }
      for object in mTriggerOutletDisplaySet.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerOutletDisplaySet = [:]
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

