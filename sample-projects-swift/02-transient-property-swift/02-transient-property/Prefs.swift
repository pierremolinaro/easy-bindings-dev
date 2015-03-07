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
  @IBOutlet var mFullNameTextField : PMReadOnlyTextField? = nil
  @IBOutlet var mNameTextField : PMTextField? = nil
  @IBOutlet var mUpperCaseFullNameTextField : PMReadOnlyTextField? = nil
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var mFirstName = PMStoredProperty <String> ("Schmurtz")
  var mName = PMStoredProperty <String> ("Amédée")


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var mFullName = PMTransientProperty <String> (PMTransientIndex.k_preference_2E_Prefs_2E_mFullName, defaultValue:"")
  var mUpperCaseFullName = PMTransientProperty <String> (PMTransientIndex.k_preference_2E_Prefs_2E_mUpperCaseFullName, defaultValue:"")

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
      mFirstName.setValue (value as! String)
    }
    value = ud.objectForKey ("Prefs:mName")
    if value != nil {
      mName.setValue (value as! String)
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
    mFullName.computeFunction = {return compute_Prefs_mFullName (self.mName.value, self.mFirstName.value)}
    mUpperCaseFullName.computeFunction = {return compute_Prefs_mUpperCaseFullName (self.mFullName.value)}
  //--- Install property observers for transients
    mName.addObserver (mFullName.event, inTrigger:true)
    mFirstName.addObserver (mFullName.event, inTrigger:true)
    mFullName.addObserver (mUpperCaseFullName.event, inTrigger:true)
  //--- Install bindings
    mFirstNameTextField?.bind_value (self.mFirstName, file:__FILE__, line:__LINE__, sendContinously:false)
    mFullNameTextField?.bind_readOnlyValue (self.mFullName, file:__FILE__, line:__LINE__)
    mNameTextField?.bind_value (self.mName, file:__FILE__, line:__LINE__, sendContinously:false)
    mUpperCaseFullNameTextField?.bind_readOnlyValue (self.mUpperCaseFullName, file:__FILE__, line:__LINE__)
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
