//-----------------------------------------------------------------------------*
//                                                                             *
//                            File 'PMPrefs.swift'                             *
//                     Generated by version 0.0.1 [debug]                      *
//                       august 7th, 2014, at 14h37'4"                         *
//                                                                             *
//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//-------------------------------------------------------------------------------------------------------------------*

import Cocoa

//-------------------------------------------------------------------------------------------------------------------*

var g_PMPrefs : PMPrefs? = nil

//----------------------------------------------------------------------------*

@objc (PMPrefs) class PMPrefs : NSObject {
  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var myTextField : PMTextField?
  @IBOutlet var myOtherTextField : PMTextField?
  @IBOutlet var mStringObserverTextField : PMTextField?
  @IBOutlet var mColorWell : NSColorWell?
  @IBOutlet var mDatePicker : NSDatePicker?
  @IBOutlet var mInteger32TextField : NSTextField?
  @IBOutlet var mEnableButton : NSButton?

  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: myString                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  var myString_observers = NSMutableSet ()
  var myString : String = "hello" {
    didSet {
      if myString != oldValue {
        for anyObject in myString_observers {
          let object = anyObject as PMTriggerProtocol
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_myString (inObserver : PMTriggerProtocol) {
    myString_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_myString (inObserver : PMTriggerProtocol) {
    myString_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mColor                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  var mColor_observers = NSMutableSet ()
  var mColor : NSColor = NSColor.yellowColor () {
    didSet {
      if mColor != oldValue {
        for anyObject in mColor_observers {
          let object = anyObject as PMTriggerProtocol
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_mColor (inObserver : PMTriggerProtocol) {
    mColor_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_mColor (inObserver : PMTriggerProtocol) {
    mColor_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mDate                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  var mDate_observers = NSMutableSet ()
  var mDate : NSDate = NSDate () {
    didSet {
      if mDate != oldValue {
        for anyObject in mDate_observers {
          let object = anyObject as PMTriggerProtocol
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_mDate (inObserver : PMTriggerProtocol) {
    mDate_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_mDate (inObserver : PMTriggerProtocol) {
    mDate_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mIntegerValue                                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

  var mIntegerValue_observers = NSMutableSet ()
  var mIntegerValue : Int64 = 123 {
    didSet {
      if mIntegerValue != oldValue {
        for anyObject in mIntegerValue_observers {
          let object = anyObject as PMTriggerProtocol
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_mIntegerValue (inObserver : PMTriggerProtocol) {
    mIntegerValue_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_mIntegerValue (inObserver : PMTriggerProtocol) {
    mIntegerValue_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: mIntegerValue                                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

  var myEnable_observers = NSMutableSet ()
  var myEnable : Bool = true {
    didSet {
      if myEnable != oldValue {
        for anyObject in myEnable_observers {
          let object = anyObject as PMTriggerProtocol
          enterTriggerWithObject (object)
        }
      }
    }
  }

  func addObserverOf_myEnable (inObserver : PMTriggerProtocol) {
    myEnable_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
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
    g_PMPrefs = self ;
     var ud = NSUserDefaults.standardUserDefaults ()
  //---
    var value : AnyObject?
    value = ud.objectForKey ("PMPrefs:myString")
    if (value != nil) {
      myString = value as NSString
    }
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
      mIntegerValue = (value as NSNumber).longLongValue
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
  //    Controllers                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  var mControllerArray = NSMutableArray ()
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    awakeFromNib                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*
  
  override func awakeFromNib () {
  //--- check mEnableButton' outlet not nil
    if nil == mEnableButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'mEnableButton' outlet is nil") ;
    }
    mControllerArray.addObject (Controller_PMPrefs_myEnable_NSButton_ckecked (object:self, outlet:mEnableButton))
  //--- check mStringObserverTextField' outlet not nil
    if nil == mStringObserverTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mStringObserverTextField' outlet is nil") ;
    }
    mControllerArray.addObject (Controller_PMPrefs_myString_NSTextField_stringValue (object:self, outlet:mStringObserverTextField, actionKind:.noAction))
  //--- check myTextField' outlet not nil mStringObserverTextField
    if nil == myTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextField' outlet is nil") ;
    }
    mControllerArray.addObject (Controller_PMPrefs_myString_NSTextField_stringValue (object:self, outlet:myTextField, actionKind:.onEndEditing))
    mControllerArray.addObject (Controller_PMPrefs_myEnable_NSTextField_enabled (object:self, outlet:myTextField))
  //--- check myOtherTextField' outlet not nil
    if nil == myOtherTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myOtherTextField' outlet is nil") ;
    }
    mControllerArray.addObject (Controller_PMPrefs_myString_NSTextField_stringValue (object:self, outlet:myOtherTextField, actionKind:.sendContinously))
  //--- check mColorWell' outlet not nil
    if nil == mColorWell {
      presentErrorWindow (__FILE__, __LINE__, "the 'mColorWell' outlet is nil") ;
    }
    mColorWell?.bind ("value",
      toObject:self,
      withKeyPath:"mColor",
      options:nil
    )
  //--- check mDatePicker' outlet not nil
    if nil == mDatePicker {
      presentErrorWindow (__FILE__, __LINE__, "the 'mDatePicker' outlet is nil") ;
    }
    mDatePicker?.bind ("value",
      toObject:self,
      withKeyPath:"mDate",
      options:nil
    )
  //--- check mInteger32TextField' outlet not nil
    if nil == mInteger32TextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mInteger32TextField' outlet is nil") ;
    }
    if (nil != mInteger32TextField) && (mInteger32TextField?.formatter == nil) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mInteger32TextField' outlet has no formatter, it should have an NSNumberFormatter") ;
    }else if (nil != mInteger32TextField) && !((mInteger32TextField?.formatter?.isKindOfClass (NSNumberFormatter))!) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mInteger32TextField outlet has a formatter that is not kind of NSNumberFormatter class") ;
    }
    mInteger32TextField?.bind ("value",
      toObject:self,
      withKeyPath:"mIntegerValue",
      options:nil
    )
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
    ud.setObject (myString, forKey:"PMPrefs:myString")
    ud.setObject (NSArchiver.archivedDataWithRootObject (mColor), forKey:"PMPrefs:mColor")
    ud.setObject (mDate, forKey:"PMPrefs:mDate")
    ud.setObject (NSNumber.numberWithLongLong (mIntegerValue), forKey:"PMPrefs:mIntegerValue")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


