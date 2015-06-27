import Cocoa

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var g_Preferences : Preferences? = nil

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Preferences) class Preferences : EBObject {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var mButton : PMButton? = nil
  @IBOutlet var myHidden1Switch : PMSwitch? = nil
  @IBOutlet var myHidden2Switch : PMSwitch? = nil
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var myHidden1 = EBStoredProperty_Bool (false)
  var myHidden2 = EBStoredProperty_Bool (false)

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
    myHidden1.readInPreferencesWithKey ("Preferences:myHidden1")
    myHidden2.readInPreferencesWithKey ("Preferences:myHidden2")
  //--- Property validation function
  //---
    NSNotificationCenter.defaultCenter ().addObserver (self,
     selector:"applicationWillTerminateAction:",
     name:NSApplicationWillTerminateNotification,
     object:nil
    )
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet private var window : NSWindow?
  let OUTLET_WIDTH = 200.0
  let OUTLET_HEIGHT = 22.0

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    awakeFromNib                                                                                                   *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func awakeFromNib () {
    var y = OUTLET_HEIGHT * 1.5 * 3.0
    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))
    y -= OUTLET_HEIGHT
  //--- Text Hidden1:
  //  createTextFieldForText ("Hidden1:", y:&y, col:0, view:view)
    let tf1 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf1.stringValue = "Hidden1:"
    tf1.editable = false
    tf1.drawsBackground = false
    tf1.bordered = false
    view.addSubview (tf1)
  //--- Outlet myHidden1Switch
    myHidden1Switch = PMSwitch(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    myHidden1Switch?.setAccessibilityIdentifier ("myHidden1Switch")
    view.addSubview (myHidden1Switch!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Hidden2:
  //  createTextFieldForText ("Hidden2:", y:&y, col:0, view:view)
    let tf2 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf2.stringValue = "Hidden2:"
    tf2.editable = false
    tf2.drawsBackground = false
    tf2.bordered = false
    view.addSubview (tf2)
  //--- Outlet myHidden2Switch
    myHidden2Switch = PMSwitch(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    myHidden2Switch?.setAccessibilityIdentifier ("myHidden2Switch")
    view.addSubview (myHidden2Switch!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Hidden1 | Hidden2 
  //  createTextFieldForText ("Hidden1 | Hidden2 ", y:&y, col:0, view:view)
    let tf3 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf3.stringValue = "Hidden1 | Hidden2 "
    tf3.editable = false
    tf3.drawsBackground = false
    tf3.bordered = false
    view.addSubview (tf3)
  //--- Outlet mButton
    mButton = PMButton(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mButton?.setAccessibilityIdentifier ("mButton")
    view.addSubview (mButton!)
    y -= OUTLET_HEIGHT / 2.0
  //--- Set pref window content view
    window?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * 2.0, height:OUTLET_HEIGHT * (1.5 * 3.0 + 0.5)))
    window?.contentView = view
  //--- Check mButton' outlet not nil
    if nil == mButton {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mButton' outlet is nil")
    }
  //--- Check myHidden1Switch' outlet not nil
    if nil == myHidden1Switch {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'myHidden1Switch' outlet is nil")
    }
  //--- Check myHidden2Switch' outlet not nil
    if nil == myHidden2Switch {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'myHidden2Switch' outlet is nil")
    }
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install bindings
    myHidden1Switch?.bind_value (self.myHidden1, file:__FILE__, line:__LINE__)
    myHidden2Switch?.bind_value (self.myHidden2, file:__FILE__, line:__LINE__)
  //--- Install multiple bindings
    mButton?.bind_hidden (
      [self.myHidden1, self.myHidden2],
      computeFunction:{
        return (self.myHidden1.prop || self.myHidden2.prop)
      },
      file:__FILE__, line:__LINE__
    )
  //--------------------------- Set targets / actions
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    applicationWillTerminateAction                                                                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func applicationWillTerminateAction (NSNotification) {
    myHidden1.storeInPreferencesWithKey ("Preferences:myHidden1")
    myHidden2.storeInPreferencesWithKey ("Preferences:myHidden2")
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
