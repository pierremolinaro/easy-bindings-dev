//-----------------------------------------------------------------------------*
//                                                                             *
//                          File 'MyDocument.swift'                            *
//                     Generated by version 0.0.1 [debug]                      *
//                       august 6th, 2014, at 10h19'1"                         *
//                                                                             *
//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1


import Cocoa

//-----------------------------------------------------------------------------*

@objc(MyDocument) class MyDocument : PMManagedDocument {

  //---------------------------------------------------------------------------*
  //    Outlets                                                                *
  //---------------------------------------------------------------------------*

  @IBOutlet var docStringTextField : NSTextField?
  @IBOutlet var prefStringTextField : NSTextField?
  @IBOutlet var prefTransientStringTextField : NSTextField?
  @IBOutlet var transientConcatStringTextField : NSTextField?

  //---------------------------------------------------------------------------*
  //    Controllers                                                            *
  //---------------------------------------------------------------------------*


  //---------------------------------------------------------------------------*
  //    Documents attributes                                                   *
  //---------------------------------------------------------------------------*


  //---------------------------------------------------------------------------*
  //    init                                                                   *
  //---------------------------------------------------------------------------*

  init () {
    let em = PMObjectManager ()
    super.init (inEntityManager:em)
  }
  
  //---------------------------------------------------------------------------*
  //    windowNibName                                                          *
  //---------------------------------------------------------------------------*

  override var windowNibName: String {
    return "MyDocument"
  }

  //---------------------------------------------------------------------------*
  //    rootEntityClassName                                                    *
  //---------------------------------------------------------------------------*

  override func rootEntityClassName () -> String {
    return "MyRootEntity"
  }

  //---------------------------------------------------------------------------*
  //    rootObject                                                             *
  //---------------------------------------------------------------------------*

  var rootObject : MyRootEntity {
    get {
      return mRootObject as MyRootEntity
    }
  }

  //---------------------------------------------------------------------------*
  //    windowControllerDidLoadNib                                             *
  //---------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--------------------------- Controller bindings
  //--------------------------- Outlet bindings
  //--- Outlet docStringTextField
    if nil == docStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'docStringTextField' outlet is nil") ;
    }
    docStringTextField?.bind ("value",
      toObject:mRootObject,
      withKeyPath:"docString",
      options:nil
    )
  //--- Outlet prefStringTextField
    if nil == prefStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefStringTextField' outlet is nil") ;
    }
    prefStringTextField?.bind ("value",
      toObject:g_MyPrefs,
      withKeyPath:"myPrefString",
      options:nil
    )
  //--- Outlet prefTransientStringTextField
    if nil == prefTransientStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefTransientStringTextField' outlet is nil") ;
    }
    prefTransientStringTextField?.bind ("value",
      toObject:g_MyPrefs,
      withKeyPath:"prefTransientString",
      options:nil
    )
  //--- Outlet transientConcatStringTextField
    if nil == transientConcatStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'transientConcatStringTextField' outlet is nil") ;
    }
    transientConcatStringTextField?.bind ("value",
      toObject:mRootObject,
      withKeyPath:"transientConcatString",
      options:nil
    )
  //--------------------------- Add Transient observers
  //--------------------------- Add Signature observer
}

  //---------------------------------------------------------------------------*
  //   R E M O V E    W I N D O W    C O N T R O L L E R                       *
  //---------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
  //--------------------------- Add Signature observer
  //--- Unbind Outlets
    docStringTextField?.unbind ("value")
    prefStringTextField?.unbind ("value")
    prefTransientStringTextField?.unbind ("value")
    transientConcatStringTextField?.unbind ("value")
  //--- Unbind Controllers
  //--- Remove Transient observers
  //--- Release controllers
  //--- Remove circularities in outlets
  //---
    super.removeWindowController (inWindowController)
  }

}

//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

