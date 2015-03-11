
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyDocument) class MyDocument : PMManagedDocument, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var docBoolCheckBox : PMSwitch?
  @IBOutlet var myButton : PMButton?

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Array Controllers                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    windowNibName                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  override var windowNibName: String {
    return "MyDocument"
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    rootEntityClassName                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func rootEntityClassName () -> String {
    return "MyRootEntity"
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    rootObject                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var rootObject : MyRootEntity { get { return mRootObject as! MyRootEntity } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowControllerDidLoadNib                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
  //--------------------------- Outlet checking
    if nil == docBoolCheckBox {
      presentErrorWindow (__FILE__, __LINE__, "the 'docBoolCheckBox' outlet is nil") ;
    }else if !docBoolCheckBox!.isKindOfClass (PMSwitch) {
      presentErrorWindow (__FILE__, __LINE__, "the 'docBoolCheckBox' outlet is not an instance of 'PMSwitch'") ;
    }
    if nil == myButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'myButton' outlet is nil") ;
    }else if !myButton!.isKindOfClass (PMButton) {
      presentErrorWindow (__FILE__, __LINE__, "the 'myButton' outlet is not an instance of 'PMButton'") ;
    }
  //--------------------------- Array controller
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install bindings
    docBoolCheckBox?.bind_value (rootObject.docBool, file:__FILE__, line:__LINE__)
    myButton?.bind_enabled (
     [rootObject.docBool, g_MyPrefs!.prefBoolean],
     computeFunction: { !self.rootObject.docBool.prop && g_MyPrefs!.prefBoolean.prop},
     file:__FILE__,
     line:__LINE__
  )
  //--------------------------- Array controller as observers
  //--------------------------- Set targets / actions
  //--------------------------- Update display
    super.windowControllerDidLoadNib (aController)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
    undoManager?.removeAllActions ()
    undoManager = nil
  //--- Unbind
    docBoolCheckBox?.unbind_value ()
    myButton?.unbind_enabled ()
  //--- Uninstall compute functions for transients
  //--------------------------- Unbind array controllers
  //--- Uninstall property observers for transients
  //--------------------------- Remove targets / actions
  //---
    super.removeWindowController (inWindowController)
  }

//---------------------------------------------------------------------------------------------------------------------*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

