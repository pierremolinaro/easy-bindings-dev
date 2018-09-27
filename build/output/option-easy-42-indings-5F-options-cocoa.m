//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#import "option-easy-42-indings-5F-options-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterOptionsFor_easyBindings_5F_options (NSMutableArray * ioBoolOptionArray,
                                              NSMutableArray * ioUIntOptionArray,
                                              NSMutableArray * ioStringOptionArray,
                                              NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"easyBindings_options"
    identifier:@"outputDeclarationDependencyGraph"
    commandChar:103
    commandString:@"output-declaration-graph"
    comment:@"Output a declaration dependancy graph graphviz file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


