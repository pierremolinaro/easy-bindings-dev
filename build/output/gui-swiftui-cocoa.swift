//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let eb = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".eb")
}

//--------------------------------------------------------------------------------------------------

extension ProjectDocument {
  static let readableContentTypes : [UTType] = [.eb]
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

let projectFileExtensions = Set (["eb"])

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner? {
  var result : AbstractScanner? = nil
  let fileExtension = inExtension.lowercased ()
  if fileExtension == "eb" {
    result = ScannerFor_easyBindings_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------
// Setting View
//--------------------------------------------------------------------------------------------------

struct SettingsView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum SidebarItem {
    case commandLineOptions
    case easyBindings_lexique_0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source").tag (SidebarItem.easyBindings_lexique_0)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .easyBindings_lexique_0 : SettingViewFor_easyBindings_lexique ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------
//   Popup list data for 'easyBindings_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_easyBindings_lexique : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'easyBindings_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_easyBindings_lexique : String? = "//"


//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


