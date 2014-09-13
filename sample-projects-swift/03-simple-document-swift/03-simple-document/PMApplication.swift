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

let kTriggerOutletDisplay = 0
let k_entity_2E_MyRootEntity_2E_myStringConcat = 1
let k_entity_2E_MyRootEntity_2E_myStringMaj = 2
let k_entity_2E_MyRootEntity_2E_myStringMin = 3

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    C L A S S E S                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTriggerProtocol)
protocol PMTriggerProtocol : NSObjectProtocol {
  var mTransientIndex : Int { get } // Note: we cannot use an enumeration here
  func noteTransientDidChange ()
  func trigger ()
  func unregister ()
  var className : String! { get } // Handled by NSObject
}


//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTrigger_entity_2E_MyRootEntity_2E_myStringConcat)
class PMTrigger_entity_2E_MyRootEntity_2E_myStringConcat : NSObject, PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.myStringConcat" }

  var mTransientIndex : Int { get { return k_entity_2E_MyRootEntity_2E_myStringConcat } }
  
  init (object : MyRootEntity) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
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

@objc(PMTrigger_entity_2E_MyRootEntity_2E_myStringMaj)
class PMTrigger_entity_2E_MyRootEntity_2E_myStringMaj : NSObject, PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.myStringMaj" }

  var mTransientIndex : Int { get { return k_entity_2E_MyRootEntity_2E_myStringMaj } }
  
  init (object : MyRootEntity) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
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

@objc(PMTrigger_entity_2E_MyRootEntity_2E_myStringMin)
class PMTrigger_entity_2E_MyRootEntity_2E_myStringMin : NSObject, PMTriggerProtocol, PMUserClassName {
  weak var mTriggerObject : MyRootEntity? = nil

  func userClassName () -> String { return "PMTrigger_entity.MyRootEntity.myStringMin" }

  var mTransientIndex : Int { get { return k_entity_2E_MyRootEntity_2E_myStringMin } }
  
  init (object : MyRootEntity) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
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
  private var mTriggerOutletDisplaySet = NSMutableSet ()
 
  //-------------------------------------------------------------------------------------------------------------------*

  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat = NSMutableSet () // 1
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj = NSMutableSet () // 2
  private var mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin = NSMutableSet () // 3

  //-------------------------------------------------------------------------------------------------------------------*

  private func enterTriggerWithObject (inObject : PMTriggerProtocol) {
    inObject.noteTransientDidChange ()
    let transientIndex = inObject.mTransientIndex
    switch transientIndex {
    case kTriggerOutletDisplay :
      mTriggerOutletDisplaySet.addObject (inObject)
    case k_entity_2E_MyRootEntity_2E_myStringConcat :
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.addObject (inObject)
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.myStringConcat, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.count)
      }
    case k_entity_2E_MyRootEntity_2E_myStringMaj :
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.addObject (inObject)
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.myStringMaj, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.count)
      }
    case k_entity_2E_MyRootEntity_2E_myStringMin :
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.addObject (inObject)
      if TRACE_TRANSIENT_TRIGGER {
        NSLog ("Trigger entity.MyRootEntity.myStringMin, %d objects", mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin.count)
      }
    default: break
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
      for anyObject in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMin = NSMutableSet ()
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj.count > 0 { // 2
      for anyObject in mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringMaj = NSMutableSet ()
    }    
    if mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat.count > 0 { // 1
      for anyObject in mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerSet_entity_2E_MyRootEntity_2E_myStringConcat = NSMutableSet ()
    }    
    if mTriggerOutletDisplaySet.count > 0 {
      for anyObject in mTriggerOutletDisplaySet {
        let object = anyObject as PMTriggerProtocol
        object.trigger ()
      }
      mTriggerOutletDisplaySet = NSMutableSet ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

