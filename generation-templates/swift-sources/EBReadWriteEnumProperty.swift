//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBReadWriteEnumProperty <T> (abstract class)
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class EBReadWriteEnumProperty <T : EBEnumProtocol> : EBReadOnlyEnumProperty <T> where T : Equatable {

  //····················································································································

  func setProp (_ value : T) { } // Abstract method

  //····················································································································

  func validateAndSetProp (_ candidateValue : T, windowForSheet inWindow:NSWindow?) -> Bool {
    return false
  } // Abstract method

  //····················································································································

  override func setFrom (rawValue : Int) {
    if let v = T.buildfromRawValue (rawValue: rawValue) {
      self.setProp (v)
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————