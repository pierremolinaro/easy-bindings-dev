//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

var g_Prefs : Prefs? = nil

//---------------------------------------------------------------------------------------------------------------------*

@objc (Prefs) class Prefs : NSObject, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "Prefs" }
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var mFirstNameTextField : PMTextField? = nil
  @IBOutlet var mFullNameTextField : PMTextField? = nil
  @IBOutlet var mNameTextField : PMTextField? = nil
  @IBOutlet var mUpperCaseFullNameTextField : PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mFirstName                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  var mFirstName_observers : [Int : PMTransientEventProtocol] = [:]
  var mFirstName : String = "Schmurtz" {
    didSet {
      if mFirstName != oldValue {
        for object in mFirstName_observers.values {
          postTransientEvent (object)
        }
      }
    }
  }

  func addObserverOf_mFirstName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mFirstName_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_mFirstName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mFirstName_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func validate_mFirstName (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mName                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  var mName_observers : [Int : PMTransientEventProtocol] = [:]
  var mName : String = "Amédée" {
    didSet {
      if mName != oldValue {
        for object in mName_observers.values {
          postTransientEvent (object)
        }
      }
    }
  }

  func addObserverOf_mName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mName_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_mName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mName_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func validate_mName (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: mFullName                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mFullName_observers : [Int : PMTransientEventProtocol] = [:]
  private var mFullName_cache : String?
  var mFullName : String {
    get {
      if mFullName_cache == nil {
        mFullName_cache = compute_Prefs_mFullName (mName, mFirstName)
      }
      return mFullName_cache!
    }
  }

  func preference_2E_Prefs_2E_mFullName_noteDidChange () {
    mFullName_cache = nil
  }
  

  func preference_2E_Prefs_2E_mFullName_trigger () {
    for object in mFullName_observers.values {
      postTransientEvent (object)
    }
  }
 
   func addObserverOf_mFullName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mFullName_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_mFullName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mFullName_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  var event_preference_2E_Prefs_2E_mFullName_cache : PMEvent_preference_2E_Prefs_2E_mFullName? = nil
  var event_preference_2E_Prefs_2E_mFullName : PMEvent_preference_2E_Prefs_2E_mFullName {
    if event_preference_2E_Prefs_2E_mFullName_cache == nil {
      event_preference_2E_Prefs_2E_mFullName_cache = PMEvent_preference_2E_Prefs_2E_mFullName (object:self)
    }
    return event_preference_2E_Prefs_2E_mFullName_cache!
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: mUpperCaseFullName                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mUpperCaseFullName_observers : [Int : PMTransientEventProtocol] = [:]
  private var mUpperCaseFullName_cache : String?
  var mUpperCaseFullName : String {
    get {
      if mUpperCaseFullName_cache == nil {
        mUpperCaseFullName_cache = compute_Prefs_mUpperCaseFullName (mFullName)
      }
      return mUpperCaseFullName_cache!
    }
  }

  func preference_2E_Prefs_2E_mUpperCaseFullName_noteDidChange () {
    mUpperCaseFullName_cache = nil
  }
  

  func preference_2E_Prefs_2E_mUpperCaseFullName_trigger () {
    for object in mUpperCaseFullName_observers.values {
      postTransientEvent (object)
    }
  }
 
   func addObserverOf_mUpperCaseFullName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mUpperCaseFullName_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_mUpperCaseFullName (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mUpperCaseFullName_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  var event_preference_2E_Prefs_2E_mUpperCaseFullName_cache : PMEvent_preference_2E_Prefs_2E_mUpperCaseFullName? = nil
  var event_preference_2E_Prefs_2E_mUpperCaseFullName : PMEvent_preference_2E_Prefs_2E_mUpperCaseFullName {
    if event_preference_2E_Prefs_2E_mUpperCaseFullName_cache == nil {
      event_preference_2E_Prefs_2E_mUpperCaseFullName_cache = PMEvent_preference_2E_Prefs_2E_mUpperCaseFullName (object:self)
    }
    return event_preference_2E_Prefs_2E_mUpperCaseFullName_cache!
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
    g_Prefs = self ;
     var ud = NSUserDefaults.standardUserDefaults ()
  //---
    var value : AnyObject?
    value = ud.objectForKey ("Prefs:mFirstName")
    if value != nil {
      mFirstName = value as! String
    }
    value = ud.objectForKey ("Prefs:mName")
    if value != nil {
      mName = value as! String
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
  //--- Check mFirstNameTextField' outlet not nil
    if nil == mFirstNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mFirstNameTextField' outlet is nil")
    }
  //--- Check mFullNameTextField' outlet not nil
    if nil == mFullNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mFullNameTextField' outlet is nil")
    }
  //--- Check mNameTextField' outlet not nil
    if nil == mNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mNameTextField' outlet is nil")
    }
  //--- Check mUpperCaseFullNameTextField' outlet not nil
    if nil == mUpperCaseFullNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mUpperCaseFullNameTextField' outlet is nil")
    }
    addObserverOf_mName (event_preference_2E_Prefs_2E_mFullName, inTrigger:true)
    addObserverOf_mFirstName (event_preference_2E_Prefs_2E_mFullName, inTrigger:true)
    addObserverOf_mFullName (event_preference_2E_Prefs_2E_mUpperCaseFullName, inTrigger:true)
    mControllerArray.addObject (Controller_Prefs_mName_PMTextField_value (object:self, outlet:mNameTextField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_Prefs_mFirstName_PMTextField_value (object:self, outlet:mFirstNameTextField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_Prefs_mFullName_PMTextField_rvalue (object:self, outlet:mFullNameTextField, file:__FILE__, line:__LINE__))
    mControllerArray.addObject (Controller_Prefs_mUpperCaseFullName_PMTextField_rvalue (object:self, outlet:mUpperCaseFullNameTextField, file:__FILE__, line:__LINE__))
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
    ud.setObject (mFirstName, forKey:"Prefs:mFirstName")
    ud.setObject (mName, forKey:"Prefs:mName")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
