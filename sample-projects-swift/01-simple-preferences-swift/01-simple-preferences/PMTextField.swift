//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              File 'PMTextField.swift'                                               *
//                                             Generated by version 0.0.1                                              *
//                                          august 17th, 2014, at 11h46'23"                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTextField) class PMTextField : NSTextField {
  var enableFromEnableBinding : Bool = true {
    didSet {
      self.enabled = enableFromEnableBinding & enableFromValueBinding
    }
  }
  var enableFromValueBinding : Bool = true {
    didSet {
      self.enabled = enableFromEnableBinding & enableFromValueBinding
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


