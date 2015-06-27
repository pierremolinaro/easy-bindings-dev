import Cocoa

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

var g_Preferences : Preferences? = nil

//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Preferences) class Preferences : EBObject {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var mColorWell : EBColorWell? = nil
  @IBOutlet var mContinousColorWell : EBColorWell? = nil
  @IBOutlet var mDatePicker : EBDatePicker? = nil
  @IBOutlet var mInteger32ObserverTextField : EBIntFieldObserver? = nil
  @IBOutlet var mInteger32TextField : EBIntField? = nil
  @IBOutlet var mObserverColorWell : EBColorWellObserver? = nil
  @IBOutlet var myObserverTextField : EBTextFieldObserver? = nil
  @IBOutlet var myOtherTextField : EBTextField? = nil
  @IBOutlet var myTextField : EBTextField? = nil
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var myString = EBStoredProperty_String ("hello")
  var mColor = EBStoredProperty_NSColor (NSColor.yellowColor ())
  var mDate = EBStoredProperty_NSDate (NSDate ())
  var mIntegerValue = EBStoredProperty_Int (12)

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

  @IBOutlet private var window : NSWindow?
  let OUTLET_WIDTH = 200.0
  let OUTLET_HEIGHT = 22.0

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    awakeFromNib                                                                                                   *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func awakeFromNib () {
    var y = OUTLET_HEIGHT * 1.5 * 9.0
    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))
    y -= OUTLET_HEIGHT
  //--- Text String:
  //  createTextFieldForText ("String:", y:&y, col:0, view:view)
    let tf1 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf1.stringValue = "String:"
    tf1.editable = false
    tf1.drawsBackground = false
    tf1.bordered = false
    view.addSubview (tf1)
  //--- Outlet myTextField
    myTextField = EBTextField(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    myTextField?.setAccessibilityIdentifier ("myTextField")
    view.addSubview (myTextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text String (send continously): 
  //  createTextFieldForText ("String (send continously): ", y:&y, col:0, view:view)
    let tf2 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf2.stringValue = "String (send continously): "
    tf2.editable = false
    tf2.drawsBackground = false
    tf2.bordered = false
    view.addSubview (tf2)
  //--- Outlet myOtherTextField
    myOtherTextField = EBTextField(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    myOtherTextField?.setAccessibilityIdentifier ("myOtherTextField")
    view.addSubview (myOtherTextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text String observer:
  //  createTextFieldForText ("String observer:", y:&y, col:0, view:view)
    let tf3 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf3.stringValue = "String observer:"
    tf3.editable = false
    tf3.drawsBackground = false
    tf3.bordered = false
    view.addSubview (tf3)
  //--- Outlet myObserverTextField
    myObserverTextField = EBTextFieldObserver(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    myObserverTextField?.setAccessibilityIdentifier ("myObserverTextField")
    view.addSubview (myObserverTextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Color:
  //  createTextFieldForText ("Color:", y:&y, col:0, view:view)
    let tf4 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf4.stringValue = "Color:"
    tf4.editable = false
    tf4.drawsBackground = false
    tf4.bordered = false
    view.addSubview (tf4)
  //--- Outlet mColorWell
    mColorWell = EBColorWell(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mColorWell?.setAccessibilityIdentifier ("mColorWell")
    view.addSubview (mColorWell!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Color (send continously):
  //  createTextFieldForText ("Color (send continously):", y:&y, col:0, view:view)
    let tf5 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf5.stringValue = "Color (send continously):"
    tf5.editable = false
    tf5.drawsBackground = false
    tf5.bordered = false
    view.addSubview (tf5)
  //--- Outlet mContinousColorWell
    mContinousColorWell = EBColorWell(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mContinousColorWell?.setAccessibilityIdentifier ("mContinousColorWell")
    view.addSubview (mContinousColorWell!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Color Observer:
  //  createTextFieldForText ("Color Observer:", y:&y, col:0, view:view)
    let tf6 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf6.stringValue = "Color Observer:"
    tf6.editable = false
    tf6.drawsBackground = false
    tf6.bordered = false
    view.addSubview (tf6)
  //--- Outlet mObserverColorWell
    mObserverColorWell = EBColorWellObserver(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mObserverColorWell?.setAccessibilityIdentifier ("mObserverColorWell")
    view.addSubview (mObserverColorWell!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Date:
  //  createTextFieldForText ("Date:", y:&y, col:0, view:view)
    let tf7 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf7.stringValue = "Date:"
    tf7.editable = false
    tf7.drawsBackground = false
    tf7.bordered = false
    view.addSubview (tf7)
  //--- Outlet mDatePicker
    mDatePicker = EBDatePicker(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mDatePicker?.setAccessibilityIdentifier ("mDatePicker")
    view.addSubview (mDatePicker!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Even Integer:
  //  createTextFieldForText ("Even Integer:", y:&y, col:0, view:view)
    let tf8 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf8.stringValue = "Even Integer:"
    tf8.editable = false
    tf8.drawsBackground = false
    tf8.bordered = false
    view.addSubview (tf8)
  //--- Outlet mInteger32TextField
    mInteger32TextField = EBIntField(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mInteger32TextField?.setAccessibilityIdentifier ("mInteger32TextField")
    view.addSubview (mInteger32TextField!)
    y -= OUTLET_HEIGHT / 2.0
    y -= OUTLET_HEIGHT
  //--- Text Even Integer Observer:
  //  createTextFieldForText ("Even Integer Observer:", y:&y, col:0, view:view)
    let tf9 = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * 0.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    tf9.stringValue = "Even Integer Observer:"
    tf9.editable = false
    tf9.drawsBackground = false
    tf9.bordered = false
    view.addSubview (tf9)
  //--- Outlet mInteger32ObserverTextField
    mInteger32ObserverTextField = EBIntFieldObserver(frame:NSRect (x:10.0 + OUTLET_WIDTH * 1.0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))
    mInteger32ObserverTextField?.setAccessibilityIdentifier ("mInteger32ObserverTextField")
    view.addSubview (mInteger32ObserverTextField!)
    y -= OUTLET_HEIGHT / 2.0
  //--- Set pref window content view
    window?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * 2.0, height:OUTLET_HEIGHT * (1.5 * 9.0 + 0.5)))
    window?.contentView = view
  //--- Check mColorWell' outlet not nil
    if nil == mColorWell {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mColorWell' outlet is nil")
    }
  //--- Check mContinousColorWell' outlet not nil
    if nil == mContinousColorWell {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mContinousColorWell' outlet is nil")
    }
  //--- Check mDatePicker' outlet not nil
    if nil == mDatePicker {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mDatePicker' outlet is nil")
    }
  //--- Check mInteger32ObserverTextField' outlet not nil
    if nil == mInteger32ObserverTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mInteger32ObserverTextField' outlet is nil")
    }
  //--- Check mInteger32TextField' outlet not nil
    if nil == mInteger32TextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mInteger32TextField' outlet is nil")
    }
  //--- Check mObserverColorWell' outlet not nil
    if nil == mObserverColorWell {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'mObserverColorWell' outlet is nil")
    }
  //--- Check myObserverTextField' outlet not nil
    if nil == myObserverTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'myObserverTextField' outlet is nil")
    }
  //--- Check myOtherTextField' outlet not nil
    if nil == myOtherTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'myOtherTextField' outlet is nil")
    }
  //--- Check myTextField' outlet not nil
    if nil == myTextField {
      presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"the 'myTextField' outlet is nil")
    }
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install bindings
    myTextField?.bind_value (self.myString, file:__FILE__, line:__LINE__, sendContinously:false)
    myOtherTextField?.bind_value (self.myString, file:__FILE__, line:__LINE__, sendContinously:true)
    myObserverTextField?.bind_valueObserver (self.myString, file:__FILE__, line:__LINE__)
    mContinousColorWell?.bind_color (self.mColor, file:__FILE__, line:__LINE__, sendContinously:true)
    mColorWell?.bind_color (self.mColor, file:__FILE__, line:__LINE__, sendContinously:false)
    mObserverColorWell?.bind_colorObserver (self.mColor, file:__FILE__, line:__LINE__)
    mDatePicker?.bind_date (self.mDate, file:__FILE__, line:__LINE__)
    mInteger32TextField?.bind_value (self.mIntegerValue, file:__FILE__, line:__LINE__, sendContinously:true, autoFormatter:true)
    mInteger32ObserverTextField?.bind_valueObserver (self.mIntegerValue, file:__FILE__, line:__LINE__, autoFormatter:true)
  //--- Install multiple bindings
  //--------------------------- Set targets / actions
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
