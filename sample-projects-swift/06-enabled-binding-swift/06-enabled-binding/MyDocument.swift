
import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(MyDocument) class MyDocument : PMManagedDocument, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*
  //    userClassName                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  override func userClassName () -> String { return "MyDocument" }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var docBoolCheckBox : PMSwitch?
  @IBOutlet var myButton : PMButton?

  //-------------------------------------------------------------------------------------------------------------------*
  //    Controllers                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  //-------------------------------------------------------------------------------------------------------------------*
  //    Document attributes                                                                                            *
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

  var mControllerArray : [PMTransientEventProtocol] = []

  //-------------------------------------------------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--------------------------- Outlet checking
    if nil == docBoolCheckBox {
      presentErrorWindow (__FILE__, __LINE__, "the 'docBoolCheckBox' outlet is nil") ;
    }
    if nil == myButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'myButton' outlet is nil") ;
    }
  //--------------------------- Array controller
  //--------------------------- Transient observers
  //--------------------------- Array controller as observers
  //--------------------------- Simple controllers
    mControllerArray.append (EnableController_MyDocument_myButton (object0:rootObject, object1:g_MyPrefs, outlet:myButton, file:__FILE__, line:__LINE__))
    mControllerArray.append (Controller_MyRootEntity_docBool_PMSwitch_value (object:rootObject, outlet:docBoolCheckBox, file:__FILE__, line:__LINE__))
  //--------------------------- Set targets / actions
  //--------------------------- Update display
    flushTriggers ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
  //--------------------------- Remove controllers
    for controller in mControllerArray {
      controller.unregister ()
    }
    mControllerArray = []
  //--------------------------- Remove targets / actions
  //---
    super.removeWindowController (inWindowController)
  }



//---------------------------------------------------------------------------------------------------------------------*

}

