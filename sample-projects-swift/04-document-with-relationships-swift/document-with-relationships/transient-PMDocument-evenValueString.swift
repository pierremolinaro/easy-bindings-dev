//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func compute_PMDocument_evenValueString (_ self_2E_otherController_2E_sortedArray_2E_count_0 : Int) -> String {
//--- START OF USER ZONE 2
  if self_2E_otherController_2E_sortedArray_2E_count_0 == 0 {
    return "No even value"
  }else if self_2E_otherController_2E_sortedArray_2E_count_0 == 1 {
    return "1 even value"
  }else{
    return String (format:"%d even values", self_2E_otherController_2E_sortedArray_2E_count_0)
  }

//--- END OF USER ZONE 2
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————