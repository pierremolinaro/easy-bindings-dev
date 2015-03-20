
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
  //--- Install property observers for transients
  //--- Install regular bindings
    docBoolCheckBox?.bind_value (self.rootObject.docBool, file:__FILE__, line:__LINE__)
  //--- Install multiple bindings
    myButton?.bind_enabled (
      [g_MyPrefs!.prefBoolean, self.rootObject.docBool],
      computeFunction:{
        let selection = g_MyPrefs!.prefBoolean.prop.1 & self.rootObject.docBool.prop.1
        if selection == .singleSelection {
          return ((!self.rootObject.docBool.prop.0 && g_MyPrefs!.prefBoolean.prop.0), .singleSelection)
        }else{
          return (false, selection)
        }
      },
      file:__FILE__, line:__LINE__
    )
  //--------------------------- Set targets / actions
  //--------------------------- Update display
    super.windowControllerDidLoadNib (aController)
    flushOutletEvents ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
    undoManager?.removeAllActions ()
    undoManager = nil
  //--- Unbind regular bindings
    docBoolCheckBox?.unbind_value ()
  //--- Unbind multiple bindings
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

