//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    extension Date : EBStoredPropertyProtocol
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension Date : EBStoredPropertyProtocol {

  //····················································································································

  func ebHashValue () -> UInt32 {
    let data = NSMutableData ()
    let archiver = NSKeyedArchiver (forWritingWith: data)
    archiver.encode (self, forKey: NSKeyedArchiveRootObjectKey)
    archiver.finishEncoding ()
    return (data as Data).ebHashValue ()
  }

  //····················································································································

  func convertToNSObject () -> NSObject {
    return self as NSObject
  }

  //····················································································································

  static func convertFromNSObject (object : NSObject) -> Date {
    return (object as? Date) ?? Date ()
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
