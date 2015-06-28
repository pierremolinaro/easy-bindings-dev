//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
import Cocoa

//----------------------------------------------------------------------------*

func compute_PMDocument_total (self_2E_rootObject_2E_mNames : [NameEntity_aValue]) -> Int {

//--- START OF USER ZONE 2
  var total = 0
  for object in self_2E_rootObject_2E_mNames { // [NameEntity_aValue]
    total += object.aValue.propval
  }
  return total
//--- END OF USER ZONE 2
}

//----------------------------------------------------------------------------*
