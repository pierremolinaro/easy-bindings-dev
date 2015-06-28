//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
import Cocoa

//----------------------------------------------------------------------------*

func compute_PMDocument_evenValueString (self_2E_otherController_2E_sortedArray_2E_count : Int) -> String {

//--- START OF USER ZONE 2
  if self_2E_otherController_2E_sortedArray_2E_count == 0 {
    return "No even value"
  }else if self_2E_otherController_2E_sortedArray_2E_count == 1 {
    return "1 even value"
  }else{
    return String (format:"%d even values", self_2E_otherController_2E_sortedArray_2E_count)
  }

//--- END OF USER ZONE 2
}

//----------------------------------------------------------------------------*
