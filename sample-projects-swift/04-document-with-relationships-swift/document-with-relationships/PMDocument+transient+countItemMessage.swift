//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 File 'PMDocument+transient+countItemMessage.swift'                                  *
//                                         Generated by version 0.0.1 [debug]                                          *
//                                           march 15th, 2015, at 13h10'38"                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import Cocoa

//----------------------------------------------------------------------------*

func compute_PMDocument_countItemMessage (self_2E_rootObject_2E_mNames_2E_count : Int) -> String {

//--- START OF USER ZONE 2
  var result = "No Item"
  if self_2E_rootObject_2E_mNames_2E_count == 1 {
    result = "1 Item"
  }else if self_2E_rootObject_2E_mNames_2E_count > 1 {
    result = String (format:"%ld Items", self_2E_rootObject_2E_mNames_2E_count)
  }
  return result
//--- END OF USER ZONE 2

}

//----------------------------------------------------------------------------*