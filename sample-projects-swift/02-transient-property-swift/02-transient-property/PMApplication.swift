//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

let TRACE_TRANSIENT_TRIGGER = false

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

enum PMTransientIndex {
  case kTriggerOutletDisplay // 0
  case k_preference_2E_Prefs_2E_mUpperCaseFullName // 1
  case k_preference_2E_Prefs_2E_mFullName // 2
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

class PMTrigger_preference_2E_Prefs_2E_mUpperCaseFullName : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : Prefs? = nil

  func userClassName () -> String { return "PMTrigger_preference.Prefs.mUpperCaseFullName" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_preference_2E_Prefs_2E_mUpperCaseFullName } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : Prefs) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.preference_2E_Prefs_2E_mUpperCaseFullName_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.preference_2E_Prefs_2E_mUpperCaseFullName_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_preference_2E_Prefs_2E_mFullName : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : Prefs? = nil

  func userClassName () -> String { return "PMTrigger_preference.Prefs.mFullName" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_preference_2E_Prefs_2E_mFullName } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : Prefs) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.preference_2E_Prefs_2E_mFullName_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.preference_2E_Prefs_2E_mFullName_trigger ()
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

  private var mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName : [Int : PMTriggerProtocol] = [:] // 1
  private var mTriggerSet_preference_2E_Prefs_2E_mFullName : [Int : PMTriggerProtocol] = [:] // 2

  //-------------------------------------------------------------------------------------------------------------------*

  private func enterTriggerWithObject (inObject : PMTriggerProtocol) {
    inObject.noteTransientDidChange ()
    let transientIndex = inObject.mTransientIndex
    switch transientIndex {
    case PMTransientIndex.kTriggerOutletDisplay :
      mTriggerOutletDisplaySet [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_preference_2E_Prefs_2E_mUpperCaseFullName :
      mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger preference.Prefs.mUpperCaseFullName, %d objects", mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName.count)
      }
    case PMTransientIndex.k_preference_2E_Prefs_2E_mFullName :
      mTriggerSet_preference_2E_Prefs_2E_mFullName [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger preference.Prefs.mFullName, %d objects", mTriggerSet_preference_2E_Prefs_2E_mFullName.count)
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
    if mTriggerSet_preference_2E_Prefs_2E_mFullName.count > 0 { // 2
      for object in mTriggerSet_preference_2E_Prefs_2E_mFullName.values {
        object.trigger ()
      }
      mTriggerSet_preference_2E_Prefs_2E_mFullName = [:]
    }    
    if mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName.count > 0 { // 1
      for object in mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName.values {
        object.trigger ()
      }
      mTriggerSet_preference_2E_Prefs_2E_mUpperCaseFullName = [:]
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

