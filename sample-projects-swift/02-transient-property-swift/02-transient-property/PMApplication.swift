//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T O P O L O G I C A L    S O R T    O F    P R O P E R T I E S                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// preference.Prefs.mUpperCaseFullName
// preference.Prefs.mFullName
// preference.Prefs.mName
// preference.Prefs.mFirstName


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    I N D E X E S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum PMTransientIndex : Int {
  case kTriggerOutletDisplay // 0
  case k_preference_2E_Prefs_2E_mUpperCaseFullName // 1
  case k_preference_2E_Prefs_2E_mFullName // 2
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    C L A S S E S                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_preference_2E_Prefs_2E_mUpperCaseFullName : PMTransientEventProtocol {
  weak private var mObserver : Prefs? = nil

  func userClassName () -> String { return "PMEvent_preference.Prefs.mUpperCaseFullName" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_preference_2E_Prefs_2E_mUpperCaseFullName } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : Prefs?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.preference_2E_Prefs_2E_mUpperCaseFullName_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.preference_2E_Prefs_2E_mUpperCaseFullName_trigger ()
  }
}
//---------------------------------------------------------------------------------------------------------------------*

class PMEvent_preference_2E_Prefs_2E_mFullName : PMTransientEventProtocol {
  weak private var mObserver : Prefs? = nil

  func userClassName () -> String { return "PMEvent_preference.Prefs.mFullName" }

  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.k_preference_2E_Prefs_2E_mFullName } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : Prefs?) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.preference_2E_Prefs_2E_mFullName_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.preference_2E_Prefs_2E_mFullName_trigger ()
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
  private var mFlushLevel = 3
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

  private var mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName : [Int : PMTransientEventProtocol] = [:] // 1
  private var mTriggerSet_preference_2E_Prefs_2E_mFullName : [Int : PMTransientEventProtocol] = [:] // 2

  //-------------------------------------------------------------------------------------------------------------------*

  private func postTransientEvent (inObject : PMTransientEventProtocol) {
    let transientIndex = inObject.transientEventIndex
    inObject.noteTransientDidChange ()
    switch transientIndex {
    case PMTransientIndex.kTriggerOutletDisplay :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str as! String)
        }else if mTriggerOutletDisplaySet [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str as! String)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str as! String, color:NSColor.brownColor ())
        }
      }
      mTriggerOutletDisplaySet [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_preference_2E_Prefs_2E_mUpperCaseFullName :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str as! String)
        }else if mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str as! String)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str as! String, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_preference_2E_Prefs_2E_mFullName :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str as! String)
        }else if mTriggerSet_preference_2E_Prefs_2E_mFullName [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str as! String)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str as! String, color:NSColor.brownColor ())
        }
      }
      mTriggerSet_preference_2E_Prefs_2E_mFullName [inObject.uniqueIndex] = inObject
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
    if mTriggerSet_preference_2E_Prefs_2E_mFullName.count > 0 { // 2
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 2: preference.Prefs.mFullName\n")
      }
      mFlushLevel = 2
      for object in mTriggerSet_preference_2E_Prefs_2E_mFullName.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()) as! String)
        }
        object.trigger ()
      }
      mTriggerSet_preference_2E_Prefs_2E_mFullName = [:]
    }    
    if mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName.count > 0 { // 1
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 1: preference.Prefs.mUpperCaseFullName\n")
      }
      mFlushLevel = 1
      for object in mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()) as! String)
        }
        object.trigger ()
      }
      mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName = [:]
    }    
    if mTriggerOutletDisplaySet.count > 0 {
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 0: display outlets\n")
      }
      mFlushLevel = 0
      for object in mTriggerOutletDisplaySet.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()) as! String)
        }
        object.trigger ()
      }
      mTriggerOutletDisplaySet = [:]
    }
    mFlushLevel = 3
    if !emptyFlush && logEvents () {
       mTransientEventExplorerTextView?.appendMessageString ("————————————————————————————————————————————————————\n")
    }
 }

  //-------------------------------------------------------------------------------------------------------------------*

}

