
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyDocument) class MyDocument : PMManagedDocument {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var docBoolCheckBox : EBSwitch?
  @IBOutlet var myButton : EBButton?

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Array Controllers                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Selection Controllers                                                                                          *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    windowNibName                                                                                                  *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override var windowNibName: String {
    return "MyDocument"
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    rootEntityClassName                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func rootEntityClassName () -> String {
    return "MyRootEntity"
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    rootObject                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var rootObject : MyRootEntity { get { return mRootObject as! MyRootEntity } }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    windowControllerDidLoadNib                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
  //--------------------------- Outlet checking
    if nil == docBoolCheckBox {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'docBoolCheckBox' outlet is nil") ;
    }else if !docBoolCheckBox!.isKindOfClass (EBSwitch) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'docBoolCheckBox' outlet is not an instance of 'EBSwitch'") ;
    }
    if nil == myButton {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myButton' outlet is nil") ;
    }else if !myButton!.isKindOfClass (EBButton) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myButton' outlet is not an instance of 'EBButton'") ;
    }
  //--------------------------- Array controller
  //--------------------------- Selection controller
  //--- Transient compute functions
  //--- Install property observers for transients
  //--- Install regular bindings
    docBoolCheckBox?.bind_value (self.rootObject.docBool, file:__FILE__, line:__LINE__)
  //--- Install multiple bindings
    myButton?.bind_enabled (
      [g_Preferences!.prefBoolean, self.rootObject.docBool],
      computeFunction:{
        return (!self.rootObject.docBool.prop && g_Preferences!.prefBoolean.prop)
      },
      file:__FILE__, line:__LINE__
    )
  //--------------------------- Set targets / actions
  //--------------------------- Update display
    super.windowControllerDidLoadNib (aController)
    flushOutletEvents ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //   removeWindowController                                                                                          *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func removeUserInterface () {
  //--- Unbind regular bindings
    docBoolCheckBox?.unbind_value ()
  //--- Unbind multiple bindings
    myButton?.unbind_enabled ()
  //--- Uninstall compute functions for transients
  //--------------------------- Unbind array controllers
  //--------------------------- Unbind selection controllers
  //--- Uninstall property observers for transients
  //--------------------------- Remove targets / actions
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

