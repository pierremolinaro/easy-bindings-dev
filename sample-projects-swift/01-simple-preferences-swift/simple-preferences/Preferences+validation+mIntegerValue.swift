//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

extension Preferences {
  func validate_mIntegerValue (proposedValue : Int) -> EBValidationResult {
//--- START OF USER ZONE 2
    var result = EBValidationResult.ok
    let validates = (proposedValue & 1) == 0 // Even value
    if !validates {
      result = EBValidationResult.rejectWithAlert ("An even value is required here")
    }
    return result
//--- END OF USER ZONE 2

  }
}

//---------------------------------------------------------------------------------------------------------------------*
