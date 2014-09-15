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
  //    Attribute: mColor                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  var mColor_observers : [Int : PMTriggerProtocol] = [:]
  var mColor : NSColor = NSColor.yellowColor () {
    didSet {
      if mColor != oldValue {
        for object in mColor_observers.values {
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_mColor (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    mColor_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_mColor (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    mColor_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  func validate_mColor (proposedValue : NSColor) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mDate                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  var mDate_observers : [Int : PMTriggerProtocol] = [:]
  var mDate : NSDate = NSDate () {
    didSet {
      if mDate != oldValue {
        for object in mDate_observers.values {
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_mDate (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    mDate_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_mDate (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    mDate_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  func validate_mDate (proposedValue : NSDate) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mIntegerValue                                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

  var mIntegerValue_observers : [Int : PMTriggerProtocol] = [:]
  var mIntegerValue : Int = 123 {
    didSet {
      if mIntegerValue != oldValue {
        for object in mIntegerValue_observers.values {
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_mIntegerValue (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    mIntegerValue_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_mIntegerValue (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    mIntegerValue_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  func validate_mIntegerValue (proposedValue : Int) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myString                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  var myString_observers : [Int : PMTriggerProtocol] = [:]
  var myString : String = "hello" {
    didSet {
      if myString != oldValue {
        for object in myString_observers.values {
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_myString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    myString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_myString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    myString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  func validate_myString (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }


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
      mColor = NSUnarchiver.unarchiveObjectWithData (value as NSData) as NSColor
    }
    value = ud.objectForKey ("PMPrefs:mDate")
    if value != nil {
      mDate = value as NSDate
    }
    value = ud.objectForKey ("PMPrefs:mIntegerValue")
    if value != nil {
      mIntegerValue = (value as NSNumber).integerValue
    }
    value = ud.objectForKey ("PMPrefs:myString")
    if value != nil {
      myString = value as String
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
    mControllerArray.addObject (Controller_PMPrefs_myString_PMTextField_value (object:self, outlet:myTextField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_PMPrefs_myString_PMTextField_value (object:self, outlet:myOtherTextField, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.addObject (Controller_PMPrefs_myString_PMTextField_value (object:self, outlet:myObserverTextField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_PMPrefs_mColor_PMColorWell_color (object:self, outlet:mContinousColorWell, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.addObject (Controller_PMPrefs_mColor_PMColorWell_color (object:self, outlet:mColorWell, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_PMPrefs_mColor_PMColorWell_color (object:self, outlet:mObserverColorWell, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_PMPrefs_mDate_PMDatePicker_date (object:self, outlet:mDatePicker, file:__FILE__, line:__LINE__))
    mControllerArray.addObject (Controller_PMPrefs_mIntegerValue_PMNumberField_value (object:self, outlet:mInteger32TextField, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.addObject (Controller_PMPrefs_mIntegerValue_PMNumberField_rvalue (object:self, outlet:mInteger32ObserverTextField, file:__FILE__, line:__LINE__))
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
    ud.setObject (NSArchiver.archivedDataWithRootObject (mColor), forKey:"PMPrefs:mColor")
    ud.setObject (mDate, forKey:"PMPrefs:mDate")
    ud.setObject (NSNumber (integer:mIntegerValue), forKey:"PMPrefs:mIntegerValue")
    ud.setObject (myString, forKey:"PMPrefs:myString")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
