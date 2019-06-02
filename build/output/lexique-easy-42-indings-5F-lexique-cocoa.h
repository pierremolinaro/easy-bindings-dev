//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum {easyBindings_lexique_1_,
  easyBindings_lexique_1_identifier,
  easyBindings_lexique_1_Identifier,
  easyBindings_lexique_1__40_attribute,
  easyBindings_lexique_1_bindingName,
  easyBindings_lexique_1_controllerName,
  easyBindings_lexique_1_literal_5F_integer,
  easyBindings_lexique_1_literal_5F_double,
  easyBindings_lexique_1_literal_5F_string,
  easyBindings_lexique_1_comment,
  easyBindings_lexique_1_abstract,
  easyBindings_lexique_1_action,
  easyBindings_lexique_1_all,
  easyBindings_lexique_1_arrayController,
  easyBindings_lexique_1_tableViewController,
  easyBindings_lexique_1_binding,
  easyBindings_lexique_1_calledBy,
  easyBindings_lexique_1_class,
  easyBindings_lexique_1_classForSwift,
  easyBindings_lexique_1_column,
  easyBindings_lexique_1_default,
  easyBindings_lexique_1_dependsFrom,
  easyBindings_lexique_1_document,
  easyBindings_lexique_1_enum,
  easyBindings_lexique_1_entity,
  easyBindings_lexique_1_extern,
  easyBindings_lexique_1_externDelegate,
  easyBindings_lexique_1_externFunc,
  easyBindings_lexique_1_graphic,
  easyBindings_lexique_1_graphviz,
  easyBindings_lexique_1_include,
  easyBindings_lexique_1_inverse,
  easyBindings_lexique_1_mainxib,
  easyBindings_lexique_1_no,
  easyBindings_lexique_1_none,
  easyBindings_lexique_1_one,
  easyBindings_lexique_1_outlet,
  easyBindings_lexique_1_override,
  easyBindings_lexique_1_prefs,
  easyBindings_lexique_1_property,
  easyBindings_lexique_1_proxy,
  easyBindings_lexique_1_root,
  easyBindings_lexique_1_selectionController,
  easyBindings_lexique_1_self,
  easyBindings_lexique_1_signature,
  easyBindings_lexique_1_sort,
  easyBindings_lexique_1_struct,
  easyBindings_lexique_1_super,
  easyBindings_lexique_1_to,
  easyBindings_lexique_1_toMany,
  easyBindings_lexique_1_toOne,
  easyBindings_lexique_1_transient,
  easyBindings_lexique_1_version,
  easyBindings_lexique_1_versionShouldChange,
  easyBindings_lexique_1_xcodeproject,
  easyBindings_lexique_1_yes,
  easyBindings_lexique_1_enabled,
  easyBindings_lexique_1_graphicController,
  easyBindings_lexique_1_hidden,
  easyBindings_lexique_1_tableValue,
  easyBindings_lexique_1_run,
  easyBindings_lexique_1__3A_,
  easyBindings_lexique_1__2C_,
  easyBindings_lexique_1__3B_,
  easyBindings_lexique_1__21_,
  easyBindings_lexique_1__5B_,
  easyBindings_lexique_1__5D_,
  easyBindings_lexique_1__7B_,
  easyBindings_lexique_1__7D_,
  easyBindings_lexique_1__28_,
  easyBindings_lexique_1__29_,
  easyBindings_lexique_1__2E_,
  easyBindings_lexique_1__7C_,
  easyBindings_lexique_1__26_,
  easyBindings_lexique_1__3C_,
  easyBindings_lexique_1__3E_,
  easyBindings_lexique_1__3C__3D_,
  easyBindings_lexique_1__3E__3D_,
  easyBindings_lexique_1__21__3D_,
  easyBindings_lexique_1__3D__3D_,
  easyBindings_lexique_1__5E_,
  easyBindings_lexique_1__2D_
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        U N I C O D E    T E S T    F U N C T I O N S                                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@interface OC_Lexique_easyBindings_lexique : OC_Lexique {
//--- Attributes
  @private double mLexicalAttribute_floatValue ;
  @private NSMutableString * mLexicalAttribute_tokenString ;
  @private UInt32 mLexicalAttribute_uint32value ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

