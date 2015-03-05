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
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var mFirstName = PMPreferencesProperty <String> ("Schmurtz")
  var mName = PMPreferencesProperty <String> ("Amédée")


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var mFullName = PMTransientProperty <String> (PMTransientIndex.k_preference_2E_Prefs_2E_mFullName)
  var mUpperCaseFullName = PMTransientProperty <String> (PMTransientIndex.k_preference_2E_Prefs_2E_mUpperCaseFullName)

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
      mFirstName.value = value as! String
    }
    value = ud.objectForKey ("Prefs:mName")
    if value != nil {
      mName.value = value as! String
    }
  //--- Property validation function
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
  //--- Install compute functions for transients
    mFullName.setComputeFunction ({return compute_Prefs_mFullName (self.mName.value, self.mFirstName.value)})
    mUpperCaseFullName.setComputeFunction ({return compute_Prefs_mUpperCaseFullName (self.mFullName.value)})
  //--- Install property observers for transients
    mName.addObserver (mFullName.event, inTrigger:true)
    mFirstName.addObserver (mFullName.event, inTrigger:true)
    mFullName.addObserver (mUpperCaseFullName.event, inTrigger:true)
  //--- Install controller for transients
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
    ud.setObject (mFirstName.value, forKey:"Prefs:mFirstName")
    ud.setObject (mName.value, forKey:"Prefs:mName")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
