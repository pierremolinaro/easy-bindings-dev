
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

  @IBOutlet var docStringTextField : PMTextField?
  @IBOutlet var prefStringTextField : PMTextField?
  @IBOutlet var prefTransientStringTextField : PMTextField?
  @IBOutlet var transientConcatStringTextField : PMTextField?

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

  var rootObject : MyRootEntity { get { return mRootObject as MyRootEntity } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowControllerDidLoadNib                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var mControllerArray : [PMTransientEventProtocol] = []

  //-------------------------------------------------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--------------------------- Outlet checking
    if nil == docStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'docStringTextField' outlet is nil") ;
    }
    if nil == prefStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefStringTextField' outlet is nil") ;
    }
    if nil == prefTransientStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefTransientStringTextField' outlet is nil") ;
    }
    if nil == transientConcatStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'transientConcatStringTextField' outlet is nil") ;
    }
  //--------------------------- Array controller
  //--------------------------- Transient observers
  //--------------------------- Array controller as observers
  //--------------------------- Simple controller
    mControllerArray.append (Controller_MyRootEntity_docString_PMTextField_value (object:rootObject, outlet:docStringTextField, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.append (Controller_MyPrefs_myPrefString_PMTextField_value (object:g_MyPrefs, outlet:prefStringTextField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.append (Controller_MyPrefs_prefTransientString_PMTextField_rvalue (object:g_MyPrefs, outlet:prefTransientStringTextField, file:__FILE__, line:__LINE__))
    mControllerArray.append (Controller_MyRootEntity_transientConcatString_PMTextField_rvalue (object:rootObject, outlet:transientConcatStringTextField, file:__FILE__, line:__LINE__))
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

