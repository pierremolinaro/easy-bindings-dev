//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    extension NSColor : ClassPropertyProtocol
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension NSColor : ClassPropertyProtocol {

  //····················································································································

  final func ebHashValue () -> UInt32 {
    let s = self.archiveToString ()
    return s.ebHashValue ()
  }

  //····················································································································

  func archiveToString () -> String {
    let rgbColor = self.usingColorSpaceName (.calibratedRGB)!
    let red = rgbColor.redComponent
    let green = rgbColor.greenComponent
    let blue = rgbColor.blueComponent
    let alpha = rgbColor.alphaComponent
    let s = "\(red) \(green) \(blue) \(alpha)"
    return s
  }

  //····················································································································

  static func unarchiveFromData (data : Data) -> NSObject? {
    return NSKeyedUnarchiver.unarchiveObject (with: data) as? NSColor
  }

  //····················································································································

  static func unarchiveFromString (string : String) -> NSObject? {
    let scanner = Scanner (string: string)
    var red = 0.0
    _ = scanner.scanDouble (&red)
    var green = 0.0
    _ = scanner.scanDouble (&green)
    var blue = 0.0
    _ = scanner.scanDouble (&blue)
    var alpha = 0.0
    _ = scanner.scanDouble (&alpha)
    return NSColor (calibratedRed: CGFloat (red), green: CGFloat (green), blue: CGFloat (blue), alpha: CGFloat (alpha))
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————