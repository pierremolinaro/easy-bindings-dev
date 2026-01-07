//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

func indexingDescriptorDictionary () -> [String : String] {
 return [:]
}

//--------------------------------------------------------------------------------------------------
//   Global functions
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> SWIFT_Scanner? {
  var result : SWIFT_Scanner? = nil
  if inExtension == "eb" {
    result = ScannerFor_easyBindings_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------

/* @MainActor func tokenizers () -> [any SWIFT_Tokenizer_Protocol] {
  return [
    SettingViewFor_easyBindings_lexique ()
  ]
} */

//--------------------------------------------------------------------------------------------------

struct SettingsView : View {
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    TabView {
      SettingViewFor_easyBindings_lexique ().tabItem { Text ("Source") }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------

/* func buildRunOption () -> String {
  return ""
} */

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


