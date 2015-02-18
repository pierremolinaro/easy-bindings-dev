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

  @IBOutlet var prefBoolCheckBox : PMSwitch? = nil

  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: prefBoolean                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  var prefBoolean_observers : [Int : PMTransientEventProtocol] = [:]
  var prefBoolean : Bool = true {
    didSet {
      if prefBoolean != oldValue {
        for object in prefBoolean_observers.values {
          postTransientEvent (object)
        }
      }
    }
  }

  func addObserverOf_prefBoolean (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    prefBoolean_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_prefBoolean (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    prefBoolean_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func validate_prefBoolean (proposedValue : Bool) -> PMValidationResult { return PMValidationResult.ok }


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
    value = ud.objectForKey ("MyPrefs:prefBoolean")
    if value != nil {
      prefBoolean = (value as! NSNumber).boolValue
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
  //--- Check prefBoolCheckBox' outlet not nil
    if nil == prefBoolCheckBox {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefBoolCheckBox' outlet is nil")
    }
    mControllerArray.addObject (Controller_MyPrefs_prefBoolean_PMSwitch_value (object:self, outlet:prefBoolCheckBox, file:__FILE__, line:__LINE__))
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
    ud.setObject (NSNumber (bool:prefBoolean), forKey:"MyPrefs:prefBoolean")
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*
