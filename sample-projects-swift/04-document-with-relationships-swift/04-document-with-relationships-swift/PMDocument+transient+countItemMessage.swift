//-----------------------------------------------------------------------------*
//                                                                             *
//             File 'PMDocument+transient+countItemMessage.swift'              *
//                         Generated by version 0.0.1                          *
//                       june 29th, 2014, at 22h48'12"                         *
//                                                                             *
//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import Cocoa

//----------------------------------------------------------------------------*

func compute_PMDocument_countItemMessage (
    inMNames_count : Int) -> String {

//--- START OF USER ZONE 2
  var result = "No Item"
  if inMNames_count == 1 {
    result = "1 Item"
  }else if inMNames_count > 1 {
    result = NSString (format:"%ld Items", inMNames_count)
  }
  return result
//--- END OF USER ZONE 2

}

//----------------------------------------------------------------------------*