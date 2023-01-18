//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//----------------------------------------------------------------------------------------------------------------------

func enterOptions (_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioUIntOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "easyBindings_options",
    identifier: "outputDeclarationDependencyGraph",
    commandChar: "g",
    commandString: "output-declaration-graph",
    comment: "Output a declaration dependancy graph graphviz file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output",
    defaultValue: ""
  ))
}

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


