//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T O P O L O G I C A L    S O R T    O F    P R O P E R T I E S                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// entity.MyRootEntity.otherTransientConcatString
// entity.MyRootEntity.transientConcatString
// preference.MyPrefs.prefTransientString
// entity.MyRootEntity.docString
// preference.MyPrefs.myPrefString


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    I N D E X E S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum PMTransientIndex : Int {
  case kTriggerOutletDisplay // 0
  case k_entity_2E_MyRootEntity_2E_otherTransientConcatString // 1
  case k_entity_2E_MyRootEntity_2E_transientConcatString // 2
  case k_preference_2E_MyPrefs_2E_prefTransientString // 3
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    C L A S S E S                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_entity_2E_MyRootEntity_2E_otherTransientConcatString : PMTransientEventProtocol {
  weak private var mObserver : MyRootEntity? = nil

  func userClassName () -> String { return "PMEvent_entity.MyRootEntity.otherTransientConcatString" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_otherTransientConcatString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteModelDidChange () {
    mObserver?.entity_2E_MyRootEntity_2E_otherTransientConcatString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.entity_2E_MyRootEntity_2E_otherTransientConcatString_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_entity_2E_MyRootEntity_2E_transientConcatString : PMTransientEventProtocol {
  weak private var mObserver : MyRootEntity? = nil

  func userClassName () -> String { return "PMEvent_entity.MyRootEntity.transientConcatString" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_transientConcatString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteModelDidChange () {
    mObserver?.entity_2E_MyRootEntity_2E_transientConcatString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.entity_2E_MyRootEntity_2E_transientConcatString_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_preference_2E_MyPrefs_2E_prefTransientString : PMTransientEventProtocol {
  weak private var mObserver : MyPrefs? = nil

  func userClassName () -> String { return "PMEvent_preference.MyPrefs.prefTransientString" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_preference_2E_MyPrefs_2E_prefTransientString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyPrefs?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteModelDidChange () {
    mObserver?.preference_2E_MyPrefs_2E_prefTransientString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.preference_2E_MyPrefs_2E_prefTransientString_trigger ()
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    P O S T    T R A N S I E N T    E V E N T                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func postTransientEvent (inObject : PMTransientEventProtocol) {
  var theApp = NSApp as! PMApplication
  theApp.postTransientEvent (inObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    R U N    T R I G G E R S                                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func flushTriggers () {
  var theApp = NSApp as! PMApplication
  theApp.flushTransientEvents ()
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P E N D    T O    T R A N S I E N T    E V E N T    L O G                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func appendToTransientEventLog (message : String) {
  var theApp = NSApp as! PMApplication
  theApp.appendToTransientEventLog (message)
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P L I C A T I O N    C L A S S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMApplication) class PMApplication : NSApplication {
  private var mLevel = 0
  private var mFlushLevel = 4
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

  private var mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString : [Int : PMTransientEventProtocol] = [:] // 1
  private var mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString : [Int : PMTransientEventProtocol] = [:] // 2
  private var mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString : [Int : PMTransientEventProtocol] = [:] // 3

  //-------------------------------------------------------------------------------------------------------------------*

  private func postTransientEvent (inObject : PMTransientEventProtocol) {
    let transientIndex = inObject.transientEventIndex
    inObject.noteModelDidChange ()
    switch transientIndex {
    case PMTransientIndex.kTriggerOutletDisplay :
      if logEvents () {
        let str = String (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerOutletDisplaySet [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerOutletDisplaySet [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_otherTransientConcatString :
      if logEvents () {
        let str = String (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_transientConcatString :
      if logEvents () {
        let str = String (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_preference_2E_MyPrefs_2E_prefTransientString :
      if logEvents () {
        let str = String (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString [inObject.uniqueIndex] = inObject
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
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private func flushTransientEvents () {
    var emptyFlush = true ;
    if mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString.count > 0 { // 3
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 3: preference.MyPrefs.prefTransientString\n")
      }
      mFlushLevel = 3
      for (key, object) in mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString.count > 0 { // 2
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 2: entity.MyRootEntity.transientConcatString\n")
      }
      mFlushLevel = 2
      for (key, object) in mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString.count > 0 { // 1
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 1: entity.MyRootEntity.otherTransientConcatString\n")
      }
      mFlushLevel = 1
      for (key, object) in mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString = [:]
    }    
    if mTriggerOutletDisplaySet.count > 0 {
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 0: display outlets\n")
      }
      mFlushLevel = 0
      for (key, object) in mTriggerOutletDisplaySet {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerOutletDisplaySet = [:]
    }
    mFlushLevel = 4
    if !emptyFlush && logEvents () {
       mTransientEventExplorerTextView?.appendMessageString ("————————————————————————————————————————————————————\n")
    }
 }

  //-------------------------------------------------------------------------------------------------------------------*

}

