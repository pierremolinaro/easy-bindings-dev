//-----------------------------------------------------------------------------*
//                                                                             *
//                         File 'PMApplication.swift'                          *
//                     Generated by version 0.0.1 [debug]                      *
//                        august 4th, 2014, at 15h6'8"                         *
//                                                                             *
//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//-----------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------*
//                                                                           *
//    T O P O L O G I C A L    S O R T    O F    P R O P E R T I E S         *
//                                                                           *
//---------------------------------------------------------------------------*

// preference.MyPrefs.prefBoolean
// controller.PMEntityController.canRemove
// controller.PMEntityController.canAdd
// controller.PMEntityArrayController.canRemove
// controller.PMEntityArrayController.canAdd
// controller.NSTreeController.canRemove
// controller.NSTreeController.canAdd
// controller.NSObjectController.canRemove
// controller.NSObjectController.canAdd
// controller.NSArrayController.canRemove
// controller.NSArrayController.canAdd
// entity.MyRootEntity.docBool


//---------------------------------------------------------------------------*
//                                                                           *
//    T R A N S I E N T    I N D E X E S                                     *
//                                                                           *
//---------------------------------------------------------------------------*



//---------------------------------------------------------------------------*
//                                                                           *
//    T R A N S I E N T    P R O T O C O L S                                 *
//                                                                           *
//---------------------------------------------------------------------------*

//---------------------------------------------------------------------------*
//                                                                           *
//    T R A N S I E N T    T R I G G E R    F U N C T I O N S                *
//                                                                           *
//---------------------------------------------------------------------------*

//-----------------------------------------------------------------------------*

@objc(PMApplication) class PMApplication : NSApplication {

  //---------------------------------------------------------------------------*

  //---------------------------------------------------------------------------*
 
  override func sendEvent (inEvent : NSEvent!) {
    super.sendEvent (inEvent)
    triggerChange ()
    displayAllocation ()
  }
  
  //---------------------------------------------------------------------------*

  override func sendAction (theAction: Selector, to theTarget: AnyObject!, from sender: AnyObject!) -> Bool {
    let result = super.sendAction (theAction, to:theTarget, from:sender)
    triggerChange ()
    displayAllocation ()
    return result
  }

  //---------------------------------------------------------------------------*
  
  func triggerChange () {
  }

  //---------------------------------------------------------------------------*

}
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2
