//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

var g_MyPrefs : MyPrefs? = nil

//---------------------------------------------------------------------------------------------------------------------*

@objc (MyPrefs) class MyPrefs : NSObject, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "MyPrefs" }
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var myPrefStringTextField : PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myPrefString                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  var myPrefString_observers : [Int : PMTriggerProtocol] = [:]
  var myPrefString : String = "pref string" {
    didSet {
      if myPrefString != oldValue {
        for object in myPrefString_observers.values {
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_myPrefString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    myPrefString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_myPrefString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    myPrefString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  func validate_myPrefString (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: prefTransientString                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  private var prefTransientString_observers : [Int : PMTriggerProtocol] = [:]
  private var prefTransientString_cache : String?
  var prefTransientString : String {
    get {
      if prefTransientString_cache == nil {
        prefTransientString_cache = compute_MyPrefs_prefTransientString (myPrefString)
      }
      return prefTransientString_cache!
    }
  }

  func preference_2E_MyPrefs_2E_prefTransientString_noteDidChange () {
    prefTransientString_cache = nil
  }
  

  func preference_2E_MyPrefs_2E_prefTransientString_trigger () {
    for object in prefTransientString_observers.values {
      enterTriggerWithObject (object)
    }
  }
 
   func addObserverOf_prefTransientString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    prefTransientString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_prefTransientString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    prefTransientString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  var triggerObjectFor_preference_2E_MyPrefs_2E_prefTransientString_cache : PMTrigger_preference_2E_MyPrefs_2E_prefTransientString? = nil
  var triggerObjectFor_preference_2E_MyPrefs_2E_prefTransientString : PMTrigger_preference_2E_MyPrefs_2E_prefTransientString {
    if triggerObjectFor_preference_2E_MyPrefs_2E_prefTransientString_cache == nil {
      triggerObjectFor_preference_2E_MyPrefs_2E_prefTransientString_cache = PMTrigger_preference_2E_MyPrefs_2E_prefTransientString (object:self)
    }
    return triggerObjectFor_preference_2E_MyPrefs_2E_prefTransientString_cache!
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Arraies                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
    noteObjectAllocation (self) ;
    g_MyPrefs = self ;
     var ud = NSUserDefaults.standardUserDefaults ()
  //---
    var value : AnyObject?
    value = ud.objectForKey ("MyPrefs:myPrefString")
    if value != nil {
      myPrefString = value as String
    }
  //---
    NSNotificationCenter.defaultCenter ().addObserver (self,
     selector:"applicationWillTerminateAction:",
     name:NSApplicationWillTerminateNotification,
     object:nil
    )
  //--- Register trigger objects
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    awakeFromNib                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

  var mControllerArray = NSMutableArray ()

  //-------------------------------------------------------------------------------------------------------------------*

  override func awakeFromNib () {
  //--- Check myPrefStringTextField' outlet not nil
    if nil == myPrefStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myPrefStringTextField' outlet is nil")
    }
    addObserverOf_myPrefString (triggerObjectFor_preference_2E_MyPrefs_2E_prefTransientString, inTrigger:true)
    mControllerArray.addObject (Controller_MyPrefs_myPrefString_PMTextField_value (object:self, outlet:myPrefStringTextField, file:__FILE__, line:__LINE__, sendContinously:false))
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self) ;
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    applicationWillTerminateAction                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  func applicationWillTerminateAction (NSNotification) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (myPrefString, forKey:"MyPrefs:myPrefString")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
