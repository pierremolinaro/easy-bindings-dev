//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

var g_PMPrefs : PMPrefs? = nil

//---------------------------------------------------------------------------------------------------------------------*

@objc (PMPrefs) class PMPrefs : NSObject, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMPrefs" }
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var mColorWell : PMColorWell? = nil
  @IBOutlet var mContinousColorWell : PMColorWell? = nil
  @IBOutlet var mDatePicker : PMDatePicker? = nil
  @IBOutlet var mInteger32ObserverTextField : PMNumberField? = nil
  @IBOutlet var mInteger32TextField : PMNumberField? = nil
  @IBOutlet var mObserverColorWell : PMColorWell? = nil
  @IBOutlet var myObserverTextField : PMTextField? = nil
  @IBOutlet var myOtherTextField : PMTextField? = nil
  @IBOutlet var myTextField : PMTextField? = nil

  //-------------------------------------------------------------------------------------------------------------------*
  //    Attributes                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var mColor = PMProperty<NSColor> (NSColor.yellowColor ())
  var mDate = PMProperty<NSDate> (NSDate ())
  var mIntegerValue = PMProperty<Int> (123)
  var myString = PMProperty<String> ("hello")

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transients                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Arraies                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
    noteObjectAllocation (self) ;
    g_PMPrefs = self ;
     var ud = NSUserDefaults.standardUserDefaults ()
  //---
    var value : AnyObject?
    value = ud.objectForKey ("PMPrefs:mColor")
    if value != nil {
      mColor.value = NSUnarchiver.unarchiveObjectWithData (value as! NSData) as! NSColor
    }
    value = ud.objectForKey ("PMPrefs:mDate")
    if value != nil {
      mDate.value = value as! NSDate
    }
    value = ud.objectForKey ("PMPrefs:mIntegerValue")
    if value != nil {
      mIntegerValue.value = (value as! NSNumber).integerValue
    }
    value = ud.objectForKey ("PMPrefs:myString")
    if value != nil {
      myString.value = value as! String
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

  var mControllerArray = [AnyObject] ()

  //-------------------------------------------------------------------------------------------------------------------*

  override func awakeFromNib () {
  //--- Check mColorWell' outlet not nil
    if nil == mColorWell {
      presentErrorWindow (__FILE__, __LINE__, "the 'mColorWell' outlet is nil")
    }
  //--- Check mContinousColorWell' outlet not nil
    if nil == mContinousColorWell {
      presentErrorWindow (__FILE__, __LINE__, "the 'mContinousColorWell' outlet is nil")
    }
  //--- Check mDatePicker' outlet not nil
    if nil == mDatePicker {
      presentErrorWindow (__FILE__, __LINE__, "the 'mDatePicker' outlet is nil")
    }
  //--- Check mInteger32ObserverTextField' outlet not nil
    if nil == mInteger32ObserverTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mInteger32ObserverTextField' outlet is nil")
    }
  //--- Check mInteger32TextField' outlet not nil
    if nil == mInteger32TextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mInteger32TextField' outlet is nil")
    }
  //--- Check mObserverColorWell' outlet not nil
    if nil == mObserverColorWell {
      presentErrorWindow (__FILE__, __LINE__, "the 'mObserverColorWell' outlet is nil")
    }
  //--- Check myObserverTextField' outlet not nil
    if nil == myObserverTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myObserverTextField' outlet is nil")
    }
  //--- Check myOtherTextField' outlet not nil
    if nil == myOtherTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myOtherTextField' outlet is nil")
    }
  //--- Check myTextField' outlet not nil
    if nil == myTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextField' outlet is nil")
    }

  //--- Property validation functions
    mIntegerValue.setValidationFunction ({ (proposedValue : Int) -> PMValidationResult in return self.validate_mIntegerValue (proposedValue)})
  //--- Transition compute functions
  //--- Property observers
  //--- Outlet triggers
    mControllerArray.append (Controller_PMPrefs_myString_PMTextField_value (object:self, outlet:myTextField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.append (Controller_PMPrefs_myString_PMTextField_value (object:self, outlet:myOtherTextField, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.append (Controller_PMPrefs_myString_PMTextField_value (object:self, outlet:myObserverTextField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.append (Controller_PMPrefs_mColor_PMColorWell_color (object:self, outlet:mContinousColorWell, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.append (Controller_PMPrefs_mColor_PMColorWell_color (object:self, outlet:mColorWell, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.append (Controller_PMPrefs_mColor_PMColorWell_color (object:self, outlet:mObserverColorWell, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.append (Controller_PMPrefs_mDate_PMDatePicker_date (object:self, outlet:mDatePicker, file:__FILE__, line:__LINE__))
    mControllerArray.append (Controller_PMPrefs_mIntegerValue_PMNumberField_value (object:self, outlet:mInteger32TextField, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.append (Controller_PMPrefs_mIntegerValue_PMNumberField_rvalue (object:self, outlet:mInteger32ObserverTextField, file:__FILE__, line:__LINE__))
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
    ud.setObject (NSArchiver.archivedDataWithRootObject (mColor.value), forKey:"PMPrefs:mColor")
    ud.setObject (mDate.value, forKey:"PMPrefs:mDate")
    ud.setObject (NSNumber (integer:mIntegerValue.value), forKey:"PMPrefs:mIntegerValue")
    ud.setObject (myString.value, forKey:"PMPrefs:myString")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
