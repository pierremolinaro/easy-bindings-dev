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
