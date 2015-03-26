import Cocoa

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var g_Preferences : Preferences? = nil

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Preferences) class Preferences : PMObject {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var mColorWell : PMColorWell? = nil
  @IBOutlet var mContinousColorWell : PMColorWell? = nil
  @IBOutlet var mDatePicker : PMDatePicker? = nil
  @IBOutlet var mInteger32ObserverTextField : PMReadOnlyIntField? = nil
  @IBOutlet var mInteger32TextField : PMIntField? = nil
  @IBOutlet var mObserverColorWell : PMColorWell? = nil
  @IBOutlet var myObserverTextField : PMTextField? = nil
  @IBOutlet var myOtherTextField : PMTextField? = nil
  @IBOutlet var myTextField : PMTextField? = nil
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var myString = PMStoredProperty_String ("hello")
  var mColor = PMStoredProperty_NSColor (NSColor.yellowColor ())
  var mDate = PMStoredProperty_NSDate (NSDate ())
  var mIntegerValue = PMStoredProperty_Int (123)

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Arraies                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Init                                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    g_Preferences = self ;
  //--- Read from preferences
    myString.readInPreferencesWithKey ("Preferences:myString")
    mColor.readInPreferencesWithKey ("Preferences:mColor")
    mDate.readInPreferencesWithKey ("Preferences:mDate")
    mIntegerValue.readInPreferencesWithKey ("Preferences:mIntegerValue")
  //--- Property validation function
    mIntegerValue.validationFunction = self.validate_mIntegerValue
  //---
    NSNotificationCenter.defaultCenter ().addObserver (self,
     selector:"applicationWillTerminateAction:",
     name:NSApplicationWillTerminateNotification,
     object:nil
    )
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    awakeFromNib                                                                                                   *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

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
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install bindings
    myTextField?.bind_value (self.myString, file:__FILE__, line:__LINE__, sendContinously:false)
    myOtherTextField?.bind_value (self.myString, file:__FILE__, line:__LINE__, sendContinously:true)
    myObserverTextField?.bind_value (self.myString, file:__FILE__, line:__LINE__, sendContinously:false)
    mContinousColorWell?.bind_color (self.mColor, file:__FILE__, line:__LINE__, sendContinously:true)
    mColorWell?.bind_color (self.mColor, file:__FILE__, line:__LINE__, sendContinously:false)
    mObserverColorWell?.bind_color (self.mColor, file:__FILE__, line:__LINE__, sendContinously:false)
    mDatePicker?.bind_date (self.mDate, file:__FILE__, line:__LINE__)
    mInteger32TextField?.bind_value (self.mIntegerValue, file:__FILE__, line:__LINE__, sendContinously:true)
    mInteger32ObserverTextField?.bind_readOnlyValue (self.mIntegerValue, file:__FILE__, line:__LINE__)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    applicationWillTerminateAction                                                                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func applicationWillTerminateAction (NSNotification) {
    myString.storeInPreferencesWithKey ("Preferences:myString")
    mColor.storeInPreferencesWithKey ("Preferences:mColor")
    mDate.storeInPreferencesWithKey ("Preferences:mDate")
    mIntegerValue.storeInPreferencesWithKey ("Preferences:mIntegerValue")
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
