import Cocoa

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var g_Preferences : Preferences? = nil

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Preferences) class Preferences : PMObject {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var myPrefStringTextField : PMTextField? = nil
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var myPrefString = PMStoredProperty_String ("pref string")

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var prefTransientString = PMTransientProperty_String ()

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
    myPrefString.readInPreferencesWithKey ("Preferences:myPrefString")
  //--- Property validation function
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
  //--- Check myPrefStringTextField' outlet not nil
    if nil == myPrefStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myPrefStringTextField' outlet is nil")
    }
  //--- Install compute functions for transients
    prefTransientString.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.myPrefString.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_Preferences_prefTransientString (v1))
        }
      }else{
        return .noSelection
      }
    }
  //--- Install property observers for transients
    self.myPrefString.addObserver (prefTransientString, postEvent:true)
  //--- Install bindings
    myPrefStringTextField?.bind_value (self.myPrefString, file:__FILE__, line:__LINE__, sendContinously:false)
  //--- Install multiple bindings
  //--------------------------- Set targets / actions
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    applicationWillTerminateAction                                                                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func applicationWillTerminateAction (NSNotification) {
    myPrefString.storeInPreferencesWithKey ("Preferences:myPrefString")
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
