//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T O P O L O G I C A L    S O R T    O F    P R O P E R T I E S                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// entity.MyRootEntity.myColor
// entity.MyRootEntity.myEnumeration
// entity.MyRootEntity.myStringConcat
// entity.MyRootEntity.myStringMaj
// entity.MyRootEntity.myStringMin
// entity.MyRootEntity.myString


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    I N D E X E S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum PMTransientIndex : Int {
  case kTriggerOutletDisplay // 0
  case k_entity_2E_MyRootEntity_2E_myStringConcat // 1
  case k_entity_2E_MyRootEntity_2E_myStringMaj // 2
  case k_entity_2E_MyRootEntity_2E_myStringMin // 3
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    C L A S S E S                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_entity_2E_MyRootEntity_2E_myStringConcat : PMTransientEventProtocol {
  weak private var mObserver : MyRootEntity? = nil

  func userClassName () -> String { return "PMEvent_entity.MyRootEntity.myStringConcat" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringConcat } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.entity_2E_MyRootEntity_2E_myStringConcat_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.entity_2E_MyRootEntity_2E_myStringConcat_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_entity_2E_MyRootEntity_2E_myStringMaj : PMTransientEventProtocol {
  weak private var mObserver : MyRootEntity? = nil

  func userClassName () -> String { return "PMEvent_entity.MyRootEntity.myStringMaj" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMaj } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.entity_2E_MyRootEntity_2E_myStringMaj_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.entity_2E_MyRootEntity_2E_myStringMaj_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_entity_2E_MyRootEntity_2E_myStringMin : PMTransientEventProtocol {
  weak private var mObserver : MyRootEntity? = nil

  func userClassName () -> String { return "PMEvent_entity.MyRootEntity.myStringMin" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMin } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.entity_2E_MyRootEntity_2E_myStringMin_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.entity_2E_MyRootEntity_2E_myStringMin_trigger ()
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
  displayAllocation ()
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

  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat : [Int : PMTransientEventProtocol] = [:] // 1
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj : [Int : PMTransientEventProtocol] = [:] // 2
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin : [Int : PMTransientEventProtocol] = [:] // 3

  //-------------------------------------------------------------------------------------------------------------------*

  private func postTransientEvent (inObject : PMTransientEventProtocol) {
    let transientIndex = inObject.transientEventIndex
    inObject.noteTransientDidChange ()
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
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringConcat :
      if logEvents () {
        let str = String (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMaj :
      if logEvents () {
        let str = String (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMin :
      if logEvents () {
        let str = String (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin [inObject.uniqueIndex] = inObject
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
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.count > 0 { // 3
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 3: entity.MyRootEntity.myStringMin\n")
      }
      mFlushLevel = 3
      for (key, object) in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.count > 0 { // 2
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 2: entity.MyRootEntity.myStringMaj\n")
      }
      mFlushLevel = 2
      for (key, object) in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.count > 0 { // 1
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 1: entity.MyRootEntity.myStringConcat\n")
      }
      mFlushLevel = 1
      for (key, object) in mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat = [:]
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

