//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

extension Preferences {
  func validate_mIntegerValue (proposedValue : Int) -> PMValidationResult {
//--- START OF USER ZONE 2
    var result = PMValidationResult.ok
    let validates = false // Add your validation condition here
    if !validates {
      result = PMValidationResult.rejectWithAlert ("Rejected in \(__FILE__), line \(__LINE__)")
    }
    return result
//--- END OF USER ZONE 2

  }
}

//---------------------------------------------------------------------------------------------------------------------*
