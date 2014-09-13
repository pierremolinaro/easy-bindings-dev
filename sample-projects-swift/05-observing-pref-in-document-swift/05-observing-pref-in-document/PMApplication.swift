//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

let TRACE_TRANSIENT_TRIGGER = false

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

enum PMTransientIndex {
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

protocol PMTriggerProtocol {
  var mTransientIndex : PMTransientIndex { get }
  func noteTransientDidChange ()
  func trigger ()
  func unregister ()
  var uniqueIndex : Int { get }
}


//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_entity_2E_MyRootEntity_2E_otherTransientConcatString : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.otherTransientConcatString" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_otherTransientConcatString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_otherTransientConcatString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_otherTransientConcatString_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_entity_2E_MyRootEntity_2E_transientConcatString : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.transientConcatString" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_entity_2E_MyRootEntity_2E_transientConcatString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyRootEntity) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_transientConcatString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.entity_2E_MyRootEntity_2E_transientConcatString_trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_preference_2E_MyPrefs_2E_prefTransientString : PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : MyPrefs? = nil

  func userClassName () -> String { return "PMTrigger_preference.MyPrefs.prefTransientString" }

  var mTransientIndex : PMTransientIndex { get { return PMTransientIndex.k_preference_2E_MyPrefs_2E_prefTransientString } }

  private let mPrivateUniqueIndex : Int
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (object : MyPrefs) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mTriggerObject = object
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mTriggerObject?.preference_2E_MyPrefs_2E_prefTransientString_noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mTriggerObject?.preference_2E_MyPrefs_2E_prefTransientString_trigger ()
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

  private var mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString : [Int : PMTriggerProtocol] = [:] // 1
  private var mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString : [Int : PMTriggerProtocol] = [:] // 2
  private var mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString : [Int : PMTriggerProtocol] = [:] // 3

  //-------------------------------------------------------------------------------------------------------------------*

  private func enterTriggerWithObject (inObject : PMTriggerProtocol) {
    inObject.noteTransientDidChange ()
    let transientIndex = inObject.mTransientIndex
    switch transientIndex {
    case PMTransientIndex.kTriggerOutletDisplay :
      mTriggerOutletDisplaySet [inObject.uniqueIndex] = inObject
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_otherTransientConcatString :
      mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.otherTransientConcatString, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString.count)
      }
    case PMTransientIndex.k_entity_2E_MyRootEntity_2E_transientConcatString :
      mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.transientConcatString, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString.count)
      }
    case PMTransientIndex.k_preference_2E_MyPrefs_2E_prefTransientString :
      mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString [inObject.uniqueIndex] = inObject
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger preference.MyPrefs.prefTransientString, %d objects", mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString.count)
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
    if mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString.count > 0 { // 3
      for object in mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString.values {
        object.trigger ()
      }
      mTriggerSet_preference_2E_MyPrefs_2E_prefTransientString = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString.count > 0 { // 2
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString.values {
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_transientConcatString = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString.count > 0 { // 1
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString.values {
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_otherTransientConcatString = [:]
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

