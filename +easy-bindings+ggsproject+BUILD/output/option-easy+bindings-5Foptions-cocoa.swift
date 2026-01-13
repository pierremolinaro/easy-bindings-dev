//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

func enterOptionsFor_easyBindings_5F_options () -> [SWIFT_CommandLineOption] {
  var array = [SWIFT_CommandLineOption] ()
  array.append (SWIFT_CommandLineOption (
    domainName: "easyBindings_options",
    type: .bool,
    identifier: "outputDeclarationDependencyGraph",
    commandChar: "g",
    commandString: "output-declaration-graph",
    comment: "Output a declaration dependancy graph graphviz file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output"
  ))
  return array
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


