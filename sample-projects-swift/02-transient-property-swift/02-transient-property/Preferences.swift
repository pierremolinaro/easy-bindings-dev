import Cocoa

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var g_Preferences : Preferences? = nil

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Preferences) class Preferences : PMObject {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var mFirstNameTextField : PMTextField? = nil
  @IBOutlet var mFullNameTextField : PMReadOnlyTextField? = nil
  @IBOutlet var mNameTextField : PMTextField? = nil
  @IBOutlet var mUpperCaseFullNameTextField : PMReadOnlyTextField? = nil
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mName = PMStoredProperty_String ("Amédée")
  var mFirstName = PMStoredProperty_String ("Schmurtz")

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mFullName = PMTransientProperty_String ()
  var mUpperCaseFullName = PMTransientProperty_String ()

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
    mName.readInPreferencesWithKey ("Preferences:mName")
    mFirstName.readInPreferencesWithKey ("Preferences:mFirstName")
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
    mFullName.computeFunction = {
      switch self.mName.prop {
      case .noSelection :
        return .noSelection
      case .multipleSelection :
        switch self.mFirstName.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection, .singleSelection :
          return .multipleSelection
        }
      case .singleSelection (let v1) :
        switch self.mFirstName.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v2) :
          return .singleSelection (compute_Preferences_mFullName (v1, v2))
        }
      }
    }
    mUpperCaseFullName.computeFunction = {
      switch self.mFullName.prop {
      case .noSelection :
        return .noSelection
      case .multipleSelection :
        return .multipleSelection
      case .singleSelection (let v1) :
        return .singleSelection (compute_Preferences_mUpperCaseFullName (v1))
      }
    }
  //--- Install property observers for transients
    self.mName.addObserver (mFullName, postEvent:true)
    self.mFirstName.addObserver (mFullName, postEvent:true)
    self.mFullName.addObserver (mUpperCaseFullName, postEvent:true)
  //--- Install bindings
    mNameTextField?.bind_value (self.mName, file:__FILE__, line:__LINE__, sendContinously:false)
    mFirstNameTextField?.bind_value (self.mFirstName, file:__FILE__, line:__LINE__, sendContinously:false)
    mFullNameTextField?.bind_readOnlyValue (self.mFullName, file:__FILE__, line:__LINE__)
    mUpperCaseFullNameTextField?.bind_readOnlyValue (self.mUpperCaseFullName, file:__FILE__, line:__LINE__)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    applicationWillTerminateAction                                                                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func applicationWillTerminateAction (NSNotification) {
    mName.storeInPreferencesWithKey ("Preferences:mName")
    mFirstName.storeInPreferencesWithKey ("Preferences:mFirstName")
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
