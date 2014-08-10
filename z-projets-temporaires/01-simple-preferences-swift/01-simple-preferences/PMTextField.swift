//
//  PMTextField.swift
//  01-simple-preferences
//
//  Created by Pierre Molinaro on 10/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
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
