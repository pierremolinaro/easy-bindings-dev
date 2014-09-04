
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

  init () {
    let em = PMObjectManager ()
    super.init (inEntityManager:em)
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

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--------------------------- Controller bindings
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
  //--------------------------- Add Transient observers
  //--------------------------- Add Signature observer
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
  //--------------------------- Add Signature observer
  //---
    super.removeWindowController (inWindowController)
  }



//---------------------------------------------------------------------------------------------------------------------*

}

