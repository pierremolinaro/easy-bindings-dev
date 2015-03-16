//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

var g_MyPrefs : MyPrefs? = nil

//---------------------------------------------------------------------------------------------------------------------*

@objc (MyPrefs) class MyPrefs : PMObject {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var myPrefStringTextField : PMTextField? = nil
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var myPrefString = PMStoredProperty_String ("pref string")

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var prefTransientString = PMTransientProperty_String ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    Arraies                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
    g_MyPrefs = self ;
    var ud = NSUserDefaults.standardUserDefaults ()
  //---
    var value : AnyObject?
    value = ud.objectForKey ("MyPrefs:myPrefString")
    if value != nil {
      myPrefString.setProp (value as! String)
    }
  //--- Property validation function
  //---
    NSNotificationCenter.defaultCenter ().addObserver (self,
     selector:"applicationWillTerminateAction:",
     name:NSApplicationWillTerminateNotification,
     object:nil
    )
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    awakeFromNib                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

  override func awakeFromNib () {
  //--- Check myPrefStringTextField' outlet not nil
    if nil == myPrefStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myPrefStringTextField' outlet is nil")
    }
  //--- Install compute functions for transients
    prefTransientString.computeFunction = {return compute_MyPrefs_prefTransientString (self.myPrefString.prop)}
  //--- Install property observers for transients
    self.myPrefString.addObserver (prefTransientString, postEvent:true)
  //--- Install bindings
    myPrefStringTextField?.bind_value (self.myPrefString, file:__FILE__, line:__LINE__, sendContinously:false)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    applicationWillTerminateAction                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  func applicationWillTerminateAction (NSNotification) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setObject (myPrefString.prop, forKey:"MyPrefs:myPrefString")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
