import Cocoa

//----------------------------------------------------------------------------*

class UserAppDelegate : NSObject {
  var mObject = MyOtherClass ()
  @IBOutlet var window : NSWindow?
  @IBOutlet var mSchmurtzTextField : NSTextField?
  
  //----------------------------------------------------------------------------*

  func applicationDidFinishLaunching (aNotification : NSNotification) {
  }

  //----------------------------------------------------------------------------*

  override func awakeFromNib () {
    mSchmurtzTextField?.bind ("value",
      toObject:mObject,
      withKeyPath:"schmurtz",
      options:nil
    )
  }

  //----------------------------------------------------------------------------*

  @IBAction func incrementMyInteger32 (inSender : NSButton) {
    mObject.myInteger += 1
    mObject.chose = true
  }

//----------------------------------------------------------------------------*

}