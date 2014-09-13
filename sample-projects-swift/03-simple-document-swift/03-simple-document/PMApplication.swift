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

enum PMTransientIndex {
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

protocol PMTriggerProtocol {
  var mTransientIndex : PMTransientIndex { get }
  func noteTransientDidChange ()
  func trigger ()
  func unregister ()
  var uniqueIndex : Int { get }
}


//---------------------------------------------------------------------------------------------------------------------*

class PMTrigger_entity_2E_MyRootEntity_2E_myStringConcat : PMTriggerProtocol, PMUserClassName {
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

class PMTrigger_entity_2E_MyRootEntity_2E_myStringMaj : PMTriggerProtocol, PMUserClassName {
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

class PMTrigger_entity_2E_MyRootEntity_2E_myStringMin : PMTriggerProtocol, PMUserClassName {
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

  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat : [Int : PMTriggerProtocol] = [:] // 1
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj : [Int : PMTriggerProtocol] = [:] // 2
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin : [Int : PMTriggerProtocol] = [:] // 3

  //-------------------------------------------------------------------------------------------------------------------*

  private func enterTriggerWithObject (inObject : PMTriggerProtocol) {
    inObject.noteTransientDidChange ()
    let transientIndex = inObject.mTransientIndex
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
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.count > 0 { // 3
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.values {
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.count > 0 { // 2
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.values {
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj = [:]
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.count > 0 { // 1
      for object in mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.values {
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat = [:]
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

