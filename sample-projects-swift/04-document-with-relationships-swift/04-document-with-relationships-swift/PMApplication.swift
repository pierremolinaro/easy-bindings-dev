//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

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

class PMEvent_document_2E_PMDocument_2E_canRemoveString : PMTransientEventProtocol {
  weak private var mObserver : PMDocument? = nil

  func userClassName () -> String { return "PMEvent_document.PMDocument.canRemoveString" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_canRemoveString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.document_2E_PMDocument_2E_canRemoveString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.document_2E_PMDocument_2E_canRemoveString_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_document_2E_PMDocument_2E_countItemMessage : PMTransientEventProtocol {
  weak private var mObserver : PMDocument? = nil

  func userClassName () -> String { return "PMEvent_document.PMDocument.countItemMessage" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_countItemMessage } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.document_2E_PMDocument_2E_countItemMessage_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.document_2E_PMDocument_2E_countItemMessage_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_document_2E_PMDocument_2E_total : PMTransientEventProtocol {
  weak private var mObserver : PMDocument? = nil

  func userClassName () -> String { return "PMEvent_document.PMDocument.total" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_total } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.document_2E_PMDocument_2E_total_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.document_2E_PMDocument_2E_total_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_document_2E_PMDocument_2E_nameController : PMTransientEventProtocol {
  weak private var mObserver : PMDocument? = nil

  func userClassName () -> String { return "PMEvent_document.PMDocument.nameController" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_document_2E_PMDocument_2E_nameController } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : PMDocument?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.document_2E_PMDocument_2E_nameController_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.document_2E_PMDocument_2E_nameController_trigger ()
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    P O S T    T R A N S I E N T    E V E N T                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func postTransientEvent (inObject : PMTransientEventProtocol) {
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
//    A P P E N D    T O    T R A N S I E N T    E V E N T    L O G                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func appendToTransientEventLog (message : String) {
  var theApp = NSApp as PMApplication
  theApp.appendToTransientEventLog (message)
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P L I C A T I O N    C L A S S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMApplication) class PMApplication : NSApplication {
  private var mLevel = 0
  private var mFlushLevel = 5
  private var mTriggerOutletDisplaySet : [Int : PMTransientEventProtocol] = [:]
 
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

  private func appendToTransientEventLog (message : String) {
    if logEvents () {
      mTransientEventExplorerTextView?.appendMessageString (message, color:NSColor.blueColor ())
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  private func logEvents () -> Bool {
    return (mTransientEventExplorerWindow == nil) ? false : mTransientEventExplorerWindow!.visible
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mTriggerSet_document_2E_PMDocument_2E_canRemoveString : [Int : PMTransientEventProtocol] = [:] // 1
  private var mTriggerSet_document_2E_PMDocument_2E_countItemMessage : [Int : PMTransientEventProtocol] = [:] // 2
  private var mTriggerSet_document_2E_PMDocument_2E_total : [Int : PMTransientEventProtocol] = [:] // 3
  private var mTriggerSet_document_2E_PMDocument_2E_nameController : [Int : PMTransientEventProtocol] = [:] // 4

  //-------------------------------------------------------------------------------------------------------------------*

  private func postTransientEvent (inObject : PMTransientEventProtocol) {
    let transientIndex = inObject.transientEventIndex
    inObject.noteTransientDidChange ()
    switch transientIndex {
    case PMTransientIndex.kTriggerOutletDisplay :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerOutletDisplaySet [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerOutletDisplaySet [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_document_2E_PMDocument_2E_canRemoveString :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_document_2E_PMDocument_2E_canRemoveString [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_document_2E_PMDocument_2E_canRemoveString [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_document_2E_PMDocument_2E_countItemMessage :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_document_2E_PMDocument_2E_countItemMessage [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_document_2E_PMDocument_2E_countItemMessage [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_document_2E_PMDocument_2E_total :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_document_2E_PMDocument_2E_total [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_document_2E_PMDocument_2E_total [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_document_2E_PMDocument_2E_nameController :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_document_2E_PMDocument_2E_nameController [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_document_2E_PMDocument_2E_nameController [inObject.uniqueIndex] = inObject
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func sendEvent (inEvent : NSEvent) {
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
    var emptyFlush = true ;
    if mTriggerSet_document_2E_PMDocument_2E_nameController.count > 0 { // 4
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 4: document.PMDocument.nameController\n")
      }
      mFlushLevel = 4
      for object in mTriggerSet_document_2E_PMDocument_2E_nameController.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_nameController = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_total.count > 0 { // 3
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 3: document.PMDocument.total\n")
      }
      mFlushLevel = 3
      for object in mTriggerSet_document_2E_PMDocument_2E_total.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_total = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_countItemMessage.count > 0 { // 2
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 2: document.PMDocument.countItemMessage\n")
      }
      mFlushLevel = 2
      for object in mTriggerSet_document_2E_PMDocument_2E_countItemMessage.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_countItemMessage = [:]
    }    
    if mTriggerSet_document_2E_PMDocument_2E_canRemoveString.count > 0 { // 1
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 1: document.PMDocument.canRemoveString\n")
      }
      mFlushLevel = 1
      for object in mTriggerSet_document_2E_PMDocument_2E_canRemoveString.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_document_2E_PMDocument_2E_canRemoveString = [:]
    }    
    if mTriggerOutletDisplaySet.count > 0 {
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 0: display outlets\n")
      }
      mFlushLevel = 0
      for object in mTriggerOutletDisplaySet.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerOutletDisplaySet = [:]
    }
    mFlushLevel = 5
    if !emptyFlush && logEvents () {
       mTransientEventExplorerTextView?.appendMessageString ("————————————————————————————————————————————————————\n")
    }
 }

  //-------------------------------------------------------------------------------------------------------------------*

}

