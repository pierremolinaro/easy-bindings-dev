//-----------------------------------------------------------------------------*
//                                                                             *
//                             File 'Prefs.swift'                              *
//                     Generated by version 0.0.1 [debug]                      *
//                        june 8th, 2014, at 20h45'35"                         *
//                                                                             *
//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//----------------------------------------------------------------------------*

import Cocoa

//----------------------------------------------------------------------------*

var g_Prefs : Prefs? = nil

//----------------------------------------------------------------------------*

@objc (Prefs) class Prefs : NSObject {
  //------------------------------------------------------- Outlets
  @IBOutlet var mNameTextField : NSTextField
  @IBOutlet var mFirstNameTextField : NSTextField
  @IBOutlet var mFullNameTextField : NSTextField
  @IBOutlet var mUpperCaseFullNameTextField : NSTextField

  //------------------------------------- Attribute mName
  var mName_observers = NSMutableSet ()
  var mName : String = "Amédée" {
    didSet {
      if mName != oldValue {
        mName_observers.makeObjectsPerformSelector ("preference_2E_Prefs_2E_mName_didChange")
      //--- Trigger 'mFullName transient'
        if mFullName__computed {
          mFullName__computed = false ;
          enterTriggerForObject_preference_2E_Prefs_2E_mFullName (self)
        }
      //--- Trigger 'mUpperCaseFullName transient'
        if mUpperCaseFullName__computed {
          mUpperCaseFullName__computed = false ;
          enterTriggerForObject_preference_2E_Prefs_2E_mUpperCaseFullName (self)
        }
      }
    }
  }
  func addObserverOf_mName (inObserver : AnyObject) {
    mName_observers.addObject (inObserver)
    NSApp.sendAction ("preference_2E_Prefs_2E_mName_didChange", to:inObserver, from:self)
  }
  func removeObserverOf_mName (inObserver : AnyObject) {
    mName_observers.removeObject (inObserver)
    NSApp.sendAction ("preference_2E_Prefs_2E_mName_didChange", to:inObserver, from:self)
  }

  //------------------------------------- Attribute mFirstName
  var mFirstName_observers = NSMutableSet ()
  var mFirstName : String = "Schmurtz" {
    didSet {
      if mFirstName != oldValue {
        mFirstName_observers.makeObjectsPerformSelector ("preference_2E_Prefs_2E_mFirstName_didChange")
      //--- Trigger 'mFullName transient'
        if mFullName__computed {
          mFullName__computed = false ;
          enterTriggerForObject_preference_2E_Prefs_2E_mFullName (self)
        }
      //--- Trigger 'mUpperCaseFullName transient'
        if mUpperCaseFullName__computed {
          mUpperCaseFullName__computed = false ;
          enterTriggerForObject_preference_2E_Prefs_2E_mUpperCaseFullName (self)
        }
      }
    }
  }
  func addObserverOf_mFirstName (inObserver : AnyObject) {
    mFirstName_observers.addObject (inObserver)
    NSApp.sendAction ("preference_2E_Prefs_2E_mFirstName_didChange", to:inObserver, from:self)
  }
  func removeObserverOf_mFirstName (inObserver : AnyObject) {
    mFirstName_observers.removeObject (inObserver)
    NSApp.sendAction ("preference_2E_Prefs_2E_mFirstName_didChange", to:inObserver, from:self)
  }

  //------------------------------------------------------- Controllers
  //------------------------------------------------- Transient mFullName
  var mFullName__cache : String = ""
  var mFullName__computed = false
  var mFullName : String {
    if !mFullName__computed {
      mFullName__cache = compute_Prefs_mFullName (self.mName, self.mFirstName) ;
      mFullName__computed = true
    }
    return mFullName__cache
  }

  //------------------------------------------------- Transient mUpperCaseFullName
  var mUpperCaseFullName__cache : String = ""
  var mUpperCaseFullName__computed = false
  var mUpperCaseFullName : String {
    if !mUpperCaseFullName__computed {
      mUpperCaseFullName__cache = compute_Prefs_mUpperCaseFullName (self.mFullName) ;
      mUpperCaseFullName__computed = true
    }
    return mUpperCaseFullName__cache
  }


  //------------------------------------------------------- Arraies


  //------------------------------------------------------- Init
  init () {
    super.init ()
    noteObjectAllocation (self) ;
    g_Prefs = self ;
     var ud = NSUserDefaults.standardUserDefaults ()
  //---
    var value : AnyObject?
    value = ud.objectForKey ("Prefs:mName")
    if (nil != value) {
      mName = value as NSString
    }
    value = ud.objectForKey ("Prefs:mFirstName")
    if (nil != value) {
      mFirstName = value as NSString
    }
  //---
    NSNotificationCenter.defaultCenter ().addObserver (self,
     selector:"applicationWillTerminateAction:",
     name:NSApplicationWillTerminateNotification,
     object:nil
    )
  }

  //------------------------------------------------------- awakeFromNib
  override func awakeFromNib () {
  //--- check mNameTextField' outlet not nil
    if nil == mNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mNameTextField' outlet is nil") ;
    }
    mNameTextField.bind ("value",
      toObject:self,
      withKeyPath:"mName",
      options:nil
    )
  //--- check mFirstNameTextField' outlet not nil
    if nil == mFirstNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mFirstNameTextField' outlet is nil") ;
    }
    mFirstNameTextField.bind ("value",
      toObject:self,
      withKeyPath:"mFirstName",
      options:nil
    )
  //--- check mFullNameTextField' outlet not nil
    if nil == mFullNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mFullNameTextField' outlet is nil") ;
    }
    mFullNameTextField.bind ("value",
      toObject:self,
      withKeyPath:"mFullName",
      options:nil
    )
  //--- check mUpperCaseFullNameTextField' outlet not nil
    if nil == mUpperCaseFullNameTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mUpperCaseFullNameTextField' outlet is nil") ;
    }
    mUpperCaseFullNameTextField.bind ("value",
      toObject:self,
      withKeyPath:"mUpperCaseFullName",
      options:nil
    )
  }
  
  //------------------------------------------------------- deinit
  deinit {
    noteObjectDeallocation (self) ;
  }
  
   //------------------------------------------------------- applicationWillTerminateAction
  func applicationWillTerminateAction (NSNotification) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (mName, forKey:"Prefs:mName")
    ud.setObject (mFirstName, forKey:"Prefs:mFirstName")
  }

}

//----------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


