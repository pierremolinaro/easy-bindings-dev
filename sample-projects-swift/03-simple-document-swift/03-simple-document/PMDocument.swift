
import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMDocument) class PMDocument : PMManagedDocument {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var myColorWell : PMColorWell?
  @IBOutlet var myMatrix : PMMatrix?
  @IBOutlet var myTextConcatField : PMTextField?
  @IBOutlet var myTextField : PMTextField?
  @IBOutlet var myTextMajField : PMTextField?
  @IBOutlet var myTextMinField : PMTextField?

  //-------------------------------------------------------------------------------------------------------------------*
  //    Controllers                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  //-------------------------------------------------------------------------------------------------------------------*
  //    Document attributes                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    windowNibName                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  override var windowNibName: String {
    return "PMDocument"
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

  var rootObject : MyRootEntity {
    get {
      return mRootObject as MyRootEntity
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowControllerDidLoadNib                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*
  var mControllerArray = NSMutableArray ()

  //-------------------------------------------------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--------------------------- Outlet checking
    if nil == myColorWell {
      presentErrorWindow (__FILE__, __LINE__, "the 'myColorWell' outlet is nil") ;
    }
    if nil == myMatrix {
      presentErrorWindow (__FILE__, __LINE__, "the 'myMatrix' outlet is nil") ;
    }
    if nil == myTextConcatField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextConcatField' outlet is nil") ;
    }
    if nil == myTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextField' outlet is nil") ;
    }
    if nil == myTextMajField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextMajField' outlet is nil") ;
    }
    if nil == myTextMinField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextMinField' outlet is nil") ;
    }
  //--------------------------- Transient observers
  //--------------------------- Simple controller
    mControllerArray.addObject (Controller_MyRootEntity_myString_PMTextField_value (object:rootObject, outlet:myTextField, file:__FILE__, line:__LINE__, sendContinously:true))
    mControllerArray.addObject (Controller_MyRootEntity_myStringMaj_PMTextField_value (object:rootObject, outlet:myTextMajField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_MyRootEntity_myStringMin_PMTextField_value (object:rootObject, outlet:myTextMinField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_MyRootEntity_myStringConcat_PMTextField_value (object:rootObject, outlet:myTextConcatField, file:__FILE__, line:__LINE__, sendContinously:false))
    mControllerArray.addObject (Controller_MyRootEntity_myEnumeration_PMMatrix_selectedIndex (object:rootObject, outlet:myMatrix, file:__FILE__, line:__LINE__))
    mControllerArray.addObject (Controller_MyRootEntity_myColor_PMColorWell_color (object:rootObject, outlet:myColorWell, file:__FILE__, line:__LINE__, sendContinously:false))
  //--------------------------- Array controller
  //--------------------------- Update display
    flushTriggers ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
  //--------------------------- Remove controllers
    for object in mControllerArray {
      let controller = object as PMTriggerProtocol
      controller.unregister ()
    }
    mControllerArray.removeAllObjects ()
  //---
    super.removeWindowController (inWindowController)
  }



//---------------------------------------------------------------------------------------------------------------------*

}

