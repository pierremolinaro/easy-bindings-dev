import Cocoa

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var g_Preferences : Preferences? = nil

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Preferences) class Preferences : EBObject {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var mFirstNameTextField : EBTextField? = nil
  @IBOutlet var mFullNameTextField : EBTextFieldObserver? = nil
  @IBOutlet var mLastNameTextField : EBTextField? = nil
  @IBOutlet var mUpperCaseFullNameTextField : EBTextFieldObserver? = nil
  @IBOutlet var myButton : EBButton? = nil
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Simple Stored Properties                                                                                       *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mFirstName = EBStoredProperty_String ("Amédée")
  var mLastName = EBStoredProperty_String ("Schmurtz")

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Stored Array Properties                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var mFullName = EBTransientProperty_String ()
  var mUpperCaseFullName = EBTransientProperty_String ()


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Array Controllers                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*



  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Init                                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    g_Preferences = self ;
  //--- Read from preferences
    mFirstName.readInPreferencesWithKey ("Preferences:mFirstName")
    mLastName.readInPreferencesWithKey ("Preferences:mLastName")
  //--- Property validation function
  //---
    NSNotificationCenter.defaultCenter ().addObserver (self,
     selector:"applicationWillTerminateAction:",
     name:NSApplicationWillTerminateNotification,
     object:nil
    )
  //--- Extern functions
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet private var window : NSWindow?
  let OUTLET_WIDTH = 200.0
  let OUTLET_HEIGHT = 22.0

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    awakeFromNib                                                                                                   *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func awakeFromNib () {
    var y = OUTLET_HEIGHT * 1.5 * 5.0
    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))
    y -= OUTLET_HEIGHT
  //--- Text First Name:
  //  createTextFieldForText ("First Name:", y:&y, col:0, view:view)
    let tf1 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf1.stringValue = "First Name:"
    tf1.editable = false
    tf1.drawsBackground = false
    tf1.bordered = false
    view.addSubview (tf1)
  //--- Outlet mFirstNameTextField
    mFirstNameTextField = EBTextField(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mFirstNameTextField?.setAccessibilityIdentifier ("mFirstNameTextField")
    view.addSubview (mFirstNameTextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Name: 
  //  createTextFieldForText ("Name: ", y:&y, col:0, view:view)
    let tf2 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf2.stringValue = "Name: "
    tf2.editable = false
    tf2.drawsBackground = false
    tf2.bordered = false
    view.addSubview (tf2)
  //--- Outlet mLastNameTextField
    mLastNameTextField = EBTextField(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mLastNameTextField?.setAccessibilityIdentifier ("mLastNameTextField")
    view.addSubview (mLastNameTextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Full Name:
  //  createTextFieldForText ("Full Name:", y:&y, col:0, view:view)
    let tf3 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf3.stringValue = "Full Name:"
    tf3.editable = false
    tf3.drawsBackground = false
    tf3.bordered = false
    view.addSubview (tf3)
  //--- Outlet mFullNameTextField
    mFullNameTextField = EBTextFieldObserver(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mFullNameTextField?.setAccessibilityIdentifier ("mFullNameTextField")
    view.addSubview (mFullNameTextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Uppercase full Name:
  //  createTextFieldForText ("Uppercase full Name:", y:&y, col:0, view:view)
    let tf4 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf4.stringValue = "Uppercase full Name:"
    tf4.editable = false
    tf4.drawsBackground = false
    tf4.bordered = false
    view.addSubview (tf4)
  //--- Outlet mUpperCaseFullNameTextField
    mUpperCaseFullNameTextField = EBTextFieldObserver(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mUpperCaseFullNameTextField?.setAccessibilityIdentifier ("mUpperCaseFullNameTextField")
    view.addSubview (mUpperCaseFullNameTextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Outlet myButton
    myButton = EBButton(frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    myButton?.setAccessibilityIdentifier ("myButton")
    view.addSubview (myButton!)
    y -= OUTLET_HEIGHT / 2.0
  //--- Set pref window content view
    window?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * 2.0, height:OUTLET_HEIGHT * (1.5 * 5.0 + 0.5)))
    window?.contentView = view
  //--- Check mFirstNameTextField' outlet not nil
    if nil == mFirstNameTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mFirstNameTextField' outlet is nil")
    }
  //--- Check mFullNameTextField' outlet not nil
    if nil == mFullNameTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mFullNameTextField' outlet is nil")
    }
  //--- Check mLastNameTextField' outlet not nil
    if nil == mLastNameTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mLastNameTextField' outlet is nil")
    }
  //--- Check mUpperCaseFullNameTextField' outlet not nil
    if nil == mUpperCaseFullNameTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mUpperCaseFullNameTextField' outlet is nil")
    }
  //--- Check myButton' outlet not nil
    if nil == myButton {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'myButton' outlet is nil")
    }
  //--- Install compute functions for transients
    mFullName.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.mFirstName.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          switch unwSelf.mLastName.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection, .singleSelection :
            return .multipleSelection
          }
        case .singleSelection (let v1) :
          switch unwSelf.mLastName.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection :
            return .multipleSelection
          case .singleSelection (let v2) :
            return .singleSelection (compute_Preferences_mFullName (v1, v2))
          }
        }
      }else{
        return .noSelection
      }
    }
    mUpperCaseFullName.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.mFullName.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_Preferences_mUpperCaseFullName (v1))
        }
      }else{
        return .noSelection
      }
    }
  //--- Install property observers for transients
    self.mFirstName.addEBObserver (mFullName)
    self.mLastName.addEBObserver (mFullName)
    self.mFullName.addEBObserver (mUpperCaseFullName)
  //--- Install bindings
    mLastNameTextField?.bind_value (self.mLastName, file:__FILE__, line:__LINE__, sendContinously:true)
    mFirstNameTextField?.bind_value (self.mFirstName, file:__FILE__, line:__LINE__, sendContinously:false)
    mFullNameTextField?.bind_valueObserver (self.mFullName, file:__FILE__, line:__LINE__)
    mUpperCaseFullNameTextField?.bind_valueObserver (self.mUpperCaseFullName, file:__FILE__, line:__LINE__)
  //--- Install multiple bindings
  //--------------------------- Array controller
  //--------------------------- Set targets / actions
    myButton?.target = self
    myButton?.action = "monAction:"
  //--- Extern functions
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    applicationWillTerminateAction                                                                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func applicationWillTerminateAction (_ : NSNotification) {
    mFirstName.storeInPreferencesWithKey ("Preferences:mFirstName")
    mLastName.storeInPreferencesWithKey ("Preferences:mLastName")
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*