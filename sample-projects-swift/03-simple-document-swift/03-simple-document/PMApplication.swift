//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

let TRACE_TRANSIENT_TRIGGER = false

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

//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_entity_2E_MyRootEntity_2E_myStringConcat : PMTriggerProtocol {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.myStringConcat" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringConcat } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_myStringConcat_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_myStringConcat_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_entity_2E_MyRootEntity_2E_myStringMaj : PMTriggerProtocol {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.myStringMaj" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMaj } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_myStringMaj_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_myStringMaj_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_entity_2E_MyRootEntity_2E_myStringMin : PMTriggerProtocol {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.myStringMin" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMin } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_myStringMin_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_myStringMin_trigger ()
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

  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat : [Int : PMTriggerProtocol] = [:] // 1
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj : [Int : PMTriggerProtocol] = [:] // 2
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin : [Int : PMTriggerProtocol] = [:] // 3

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
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringConcat :
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.myStringConcat, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.count)
      }
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMaj :
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.myStringMaj, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.count)
      }
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_myStringMin :
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.myStringMin, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.count)
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
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.count > 0 { // 3
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 3: entity.MyRootEntity.myStringMin\n")
      }
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.count > 0 { // 2
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 2: entity.MyRootEntity.myStringMaj\n")
      }
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.count > 0 { // 1
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 1: entity.MyRootEntity.myStringConcat\n")
      }
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat = [:]
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

