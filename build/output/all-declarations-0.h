#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//LEXIQUE easyBindings_5F_lexique
//
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S                                             
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S                                           
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S                                                  
//----------------------------------------------------------------------------------------------------------------------

class cTokenFor_easyBindings_5F_lexique : public cToken {
  public : double mLexicalAttribute_floatValue ;
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;

  public : cTokenFor_easyBindings_5F_lexique (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S                                                
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_easyBindings_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_easyBindings_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_Identifier,
   kToken__40_attribute,
   kToken_bindingName,
   kToken_controllerName,
   kToken_literal_5F_integer,
   kToken_literal_5F_double,
   kToken_literal_5F_string,
   kToken_comment,
   kToken_abstract,
   kToken_action,
   kToken_all,
   kToken_arrayController,
   kToken_autolayout,
   kToken_tableViewController,
   kToken_binding,
   kToken_calledBy,
   kToken_class,
   kToken_classForSwift,
   kToken_column,
   kToken_computed,
   kToken_default,
   kToken_dependsFrom,
   kToken_autoLayoutDocument,
   kToken_xibdocument,
   kToken_enum,
   kToken_entity,
   kToken_extern,
   kToken_externDelegate,
   kToken_externFunc,
   kToken_func,
   kToken_graphic,
   kToken_graphviz,
   kToken_include,
   kToken_inverse,
   kToken_mainxib,
   kToken_no,
   kToken_none,
   kToken_one,
   kToken_outlet,
   kToken_override,
   kToken_prefs,
   kToken_property,
   kToken_proxy,
   kToken_root,
   kToken_selectionController,
   kToken_self,
   kToken_signature,
   kToken_sort,
   kToken_space,
   kToken_struct,
   kToken_super,
   kToken_toMany,
   kToken_toolbarItem,
   kToken_toOne,
   kToken_transient,
   kToken_version,
   kToken_hStack,
   kToken_vStack,
   kToken_versionShouldChange,
   kToken_view,
   kToken_xcodeproject,
   kToken_yes,
   kToken_enabled,
   kToken_graphicController,
   kToken_hidden,
   kToken_tableValue,
   kToken_run,
   kToken__3A_,
   kToken__2C_,
   kToken__3B_,
   kToken__21_,
   kToken__5B_,
   kToken__5D_,
   kToken__7B_,
   kToken__7D_,
   kToken__28_,
   kToken__29_,
   kToken__2E_,
   kToken__7C_,
   kToken__26_,
   kToken__3C_,
   kToken__3E_,
   kToken__3C__3D_,
   kToken__3E__3D_,
   kToken__21__3D_,
   kToken__3D__3D_,
   kToken__5E_,
   kToken__2D_} ;

//--- Key words table 'lowerCaseKeyWordList'
  public : static int16_t search_into_lowerCaseKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'reservedBindingNameKeyWordList'
  public : static int16_t search_into_reservedBindingNameKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public : double attributeValue_floatValue (void) const ;
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Unicode test functions

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 89 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'easyBindings_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_easyBindings_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_action_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_action_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GALGAS_lstring constinArgument0,
                                                                                   class GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                          class GALGAS_lstring & outArgument2,
                                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_ (class GALGAS_bindingOptionList & outArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingComparison_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingComparison_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingExpression_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingExpression_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingOperand_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingOperand_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingTerm_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingTerm_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_column_5F_bindings_ (class GALGAS_tableViewColumnBindingAST & outArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_column_5F_bindings_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_computed_5F_view_5F_instruction_ (class GALGAS_astComputedViewInstruction & outArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_computed_5F_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_controller_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                          const class GALGAS_lstring constinArgument1,
                                                          class GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                          class GALGAS_astDeclarationStruct & ioArgument3,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_controller_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_function_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_function_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_ (class GALGAS_abstractDefaultValue & outArgument0,
                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_delegate_ (class GALGAS_externSwiftDelegateList & ioArgument0,
                                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_delegate_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_func_ (class GALGAS_externSwiftFunctionList & ioArgument0,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_func_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_graphviz_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_graphviz_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_ (class GALGAS_mainXibDescriptorList & ioArgument0,
                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_5F_line_ (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_5F_line_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_ (class GALGAS_observablePropertyAST & outArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_ (class GALGAS_tableValueBinding & outArgument0,
                                                  class GALGAS_runActionDescriptor & outArgument1,
                                                  class GALGAS_multipleBindingDescriptor & outArgument2,
                                                  class GALGAS_multipleBindingDescriptor & outArgument3,
                                                  class GALGAS_graphicController & outArgument4,
                                                  class GALGAS_regularBindingList & outArgument5,
                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_5F_specification_ (class GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_ (class GALGAS_outletDeclarationList & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_stored_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                                class GALGAS_simpleStoredPropertyList & ioArgument1,
                                                                class GALGAS_stringset & ioArgument2,
                                                                class GALGAS_astDeclarationStruct & ioArgument3,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_stored_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                class GALGAS_location & outArgument1,
                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toMany_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                       class GALGAS_stringset & ioArgument1,
                                                       class GALGAS_astDeclarationStruct & ioArgument2,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toMany_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toOne_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                      class GALGAS_astDeclarationStruct & ioArgument1,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toOne_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                         const class GALGAS_lstring constinArgument1,
                                                         class GALGAS_astDeclarationStruct & ioArgument2,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_declaration_ (class GALGAS_astViewDeclarationList & ioArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_ (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_5F_list_ (class GALGAS_astViewInstructionList & ioArgument0,
                                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_xcode_5F_project_ (class GALGAS_lstring & ioArgument0,
                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_xcode_5F_project_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                    GALGAS_location & outArgument1,
                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_ (const GALGAS_lstring constinArgument0,
                                                                                               GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                                               GALGAS_lstring & outArgument2,
                                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_ (const GALGAS_lstring constinArgument0,
                                                                                                        GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_declaration_i17_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_declaration_i19_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_declaration_i19_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_ (GALGAS_astViewInstructionList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i21_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i21_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i22_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i22_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_ (GALGAS_astComputedViewInstruction & outArgument0,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i26_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i26_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i27_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i27_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i29_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i29_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i30_ (GALGAS_outletDeclarationList & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_i31_ (GALGAS_tableValueBinding & outArgument0,
                                                                       GALGAS_runActionDescriptor & outArgument1,
                                                                       GALGAS_multipleBindingDescriptor & outArgument2,
                                                                       GALGAS_multipleBindingDescriptor & outArgument3,
                                                                       GALGAS_graphicController & outArgument4,
                                                                       GALGAS_regularBindingList & outArgument5,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_i31_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i32_ (GALGAS_observablePropertyAST & outArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i32_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i33_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_astDeclarationStruct & ioArgument2,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i33_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i34_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_astDeclarationStruct & ioArgument2,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i34_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i35_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_astDeclarationStruct & ioArgument2,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i35_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i36_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i36_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i37_ (const GALGAS_lstring constinArgument0,
                                                                                     GALGAS_simpleStoredPropertyList & ioArgument1,
                                                                                     GALGAS_stringset & ioArgument2,
                                                                                     GALGAS_astDeclarationStruct & ioArgument3,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i37_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toOne_5F_relationship_i38_ (const GALGAS_lstring constinArgument0,
                                                                           GALGAS_astDeclarationStruct & ioArgument1,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toOne_5F_relationship_i38_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toMany_5F_relationship_i39_ (const GALGAS_lstring constinArgument0,
                                                                            GALGAS_stringset & ioArgument1,
                                                                            GALGAS_astDeclarationStruct & ioArgument2,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toMany_5F_relationship_i39_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i40_ (GALGAS_lstringlist & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i40_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i41_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i41_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i42_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i42_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i43_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i48_ (GALGAS_bindingOptionList & outArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i48_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i50_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i50_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_column_5F_bindings_i51_ (GALGAS_tableViewColumnBindingAST & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_column_5F_bindings_i51_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i52_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i52_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i53_ (GALGAS_abstractDefaultValue & outArgument0,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i53_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_xcode_5F_project_i54_ (GALGAS_lstring & ioArgument0,
                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_xcode_5F_project_i54_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_i55_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_i55_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i56_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i56_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_61 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_62 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_63 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_64 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_65 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_66 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_67 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_68 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_69 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_70 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_71 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_72 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_73 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_74 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_75 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_76 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_77 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_78 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_79 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_80 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_81 (C_Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractBooleanMultipleBindingExpressionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_abstractBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_abstractBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractBooleanMultipleBindingExpressionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractDefaultValue : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractDefaultValue (void) ;

//---
  public : inline const class cPtr_abstractDefaultValue * ptr (void) const { return (const cPtr_abstractDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractDefaultValue : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractDefaultValue (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_andBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_andBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_andBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                       const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractDeclarationAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractDeclarationAST (void) ;

//---
  public : inline const class cPtr_abstractDeclarationAST * ptr (void) const { return (const cPtr_abstractDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractDeclarationAST : public acPtr_class {
//--- Attributes
  public : GALGAS_lstring mProperty_mClassName ;

//--- Constructor
  public : cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_arrayControllerDeclarationAST (void) ;

//---
  public : inline const class cPtr_arrayControllerDeclarationAST * ptr (void) const { return (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_arrayControllerBoundModelAST & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModel (class GALGAS_arrayControllerBoundModelAST inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundModelAST getter_mModel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @arrayControllerBoundModelAST enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerBoundModelAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBoundModelAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_rootToManyRelationship,
    kEnum_selfToManyRelationship
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBoundModelAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerBoundModelAST constructor_rootToManyRelationship (const class GALGAS_lstring & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerBoundModelAST constructor_selfToManyRelationship (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerBoundModelAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_rootToManyRelationship (class GALGAS_lstring & outArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootToManyRelationship (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfToManyRelationship (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerBoundModelAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @arrayControllerBoundModelAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayControllerDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_arrayControllerBoundModelAST mProperty_mModel ;
  public : GALGAS_lstring mProperty_mToManyPropertyName ;

//--- Constructor
  public : cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                               const GALGAS_lstring & in_mControllerName,
                                               const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                               const GALGAS_lstring & in_mToManyPropertyName
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundModelAST getter_mModel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModel (GALGAS_arrayControllerBoundModelAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAbstractViewInstructionDeclaration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_astAbstractViewInstructionDeclaration (void) ;

//---
  public : inline const class cPtr_astAbstractViewInstructionDeclaration * ptr (void) const { return (const cPtr_astAbstractViewInstructionDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astAbstractViewInstructionDeclaration (const cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAbstractViewInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astAbstractViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAbstractViewInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astAbstractViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewInstructionDeclaration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_astAbstractViewInstructionDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAbstractViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAbstractViewDeclaration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_astAbstractViewDeclaration (void) ;

//---
  public : inline const class cPtr_astAbstractViewDeclaration * ptr (void) const { return (const cPtr_astAbstractViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astAbstractViewDeclaration (const cPtr_astAbstractViewDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAbstractViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astAbstractViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAbstractViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astAbstractViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewDeclaration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_astAbstractViewDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedHorizontalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedHorizontalViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public : GALGAS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astComputedHorizontalViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astComputedHorizontalViewDeclaration * ptr (void) const { return (const cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astComputedHorizontalViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astComputedHorizontalViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                     const class GALGAS_astViewInstructionList & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedHorizontalViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionCallList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionCallList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutViewFunctionCallList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_astAutoLayoutViewFunctionCallList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutViewFunctionCallList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutViewFunctionCallList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_astAutoLayoutViewFunctionCallList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astAutoLayoutViewFunctionCallList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList add_operation (const GALGAS_astAutoLayoutViewFunctionCallList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astAutoLayoutViewFunctionCallList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GALGAS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutViewFunctionCallList ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionCallList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewFunctionCallList : public cGenericAbstractEnumerator {
  public : cEnumerator_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_astAutoLayoutViewInstructionParameterList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astAutoLayoutViewFunctionCallList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewInstructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astViewInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_astViewInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_astViewInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astViewInstructionList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astViewInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_astViewInstructionList constructor_listWithValue (const class GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astViewInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList add_operation (const GALGAS_astViewInstructionList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astViewInstructionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_astAbstractViewInstructionDeclaration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_astAbstractViewInstructionDeclaration constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAbstractViewInstructionDeclaration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astViewInstructionList ;
 
} ; // End of GALGAS_astViewInstructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astViewInstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_astViewInstructionList (const GALGAS_astViewInstructionList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_astAbstractViewInstructionDeclaration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astViewInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedHorizontalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedHorizontalViewDeclaration : public cPtr_astAbstractViewDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public : GALGAS_astViewInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                      const GALGAS_astViewInstructionList & in_mInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_astViewInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedVerticalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedVerticalViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public : GALGAS_astComputedVerticalViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astComputedVerticalViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astComputedVerticalViewDeclaration * ptr (void) const { return (const cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astComputedVerticalViewDeclaration (const cPtr_astComputedVerticalViewDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astComputedVerticalViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astComputedVerticalViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                   const class GALGAS_astViewInstructionList & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astComputedVerticalViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedVerticalViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedVerticalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedVerticalViewDeclaration : public cPtr_astAbstractViewDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public : GALGAS_astViewInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_astComputedVerticalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GALGAS_astViewInstructionList & in_mInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_astViewInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public : GALGAS_astComputedViewInstruction (void) ;

//---
  public : inline const class cPtr_astComputedViewInstruction * ptr (void) const { return (const cPtr_astComputedViewInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astComputedViewInstruction (const cPtr_astComputedViewInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astComputedViewInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astComputedViewInstruction constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                           const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                           const class GALGAS_tableValueBinding & inOperand3,
                                                                           const class GALGAS_runActionDescriptor & inOperand4,
                                                                           const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                                           const class GALGAS_multipleBindingDescriptor & inOperand6,
                                                                           const class GALGAS_graphicController & inOperand7,
                                                                           const class GALGAS_regularBindingList & inOperand8
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astComputedViewInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewClassName (class GALGAS_lstring inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptor (class GALGAS_multipleBindingDescriptor inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGraphicController (class GALGAS_graphicController inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptor (class GALGAS_multipleBindingDescriptor inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_astAutoLayoutViewInstructionParameterList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegularBindingList (class GALGAS_regularBindingList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRunActionDescriptor (class GALGAS_runActionDescriptor inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableValueBinding (class GALGAS_tableValueBinding inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAutoLayoutViewClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_graphicController getter_mGraphicController (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_mRegularBindingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_runActionDescriptor getter_mRunActionDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableValueBinding getter_mTableValueBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @graphicController enum                                          *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_graphicController : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_graphicController (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_defined
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_graphicController extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_graphicController constructor_defined (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_graphicController constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_graphicController & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_defined (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphicController class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphicController ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @graphicController enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_graphicController_defined : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_graphicController_defined (const GALGAS_lstring & inAssociatedValue0,
                                                            const GALGAS_lstring & inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_graphicController_defined (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @multipleBindingDescriptor enum                                      *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multipleBindingDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_multipleBindingDescriptor (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noBinding,
    kEnum_binding
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multipleBindingDescriptor extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multipleBindingDescriptor constructor_binding (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_multipleBindingDescriptor constructor_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multipleBindingDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_binding (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multipleBindingDescriptor class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @multipleBindingDescriptor enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_multipleBindingDescriptor_binding : public cEnumAssociatedValues {
  public : const GALGAS_abstractBooleanMultipleBindingExpressionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_multipleBindingDescriptor_binding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @runActionDescriptor enum                                         *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_runActionDescriptor : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_runActionDescriptor (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noAction,
    kEnum_action
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_runActionDescriptor extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_runActionDescriptor constructor_action (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_runActionDescriptor constructor_noAction (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_runActionDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_action (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoAction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_runActionDescriptor class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @runActionDescriptor enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_runActionDescriptor_action : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring & inAssociatedValue0,
                                                             const GALGAS_lstring & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_runActionDescriptor_action (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @tableValueBinding enum                                          *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableValueBinding : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_tableValueBinding (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noTableValueBinding,
    kEnum_tableValueBinding
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableValueBinding extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableValueBinding constructor_noTableValueBinding (LOCATION_ARGS) ;

  public : static class GALGAS_tableValueBinding constructor_tableValueBinding (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableValueBinding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_tableValueBinding (class GALGAS_lstring & outArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTableValueBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableValueBinding class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableValueBinding ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @tableValueBinding enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_tableValueBinding_tableValueBinding : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_tableValueBinding_tableValueBinding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewInstructionParameterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewInstructionParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutViewInstructionParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_astAutoLayoutViewInstructionParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mParameterName,
                                                  const class GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                  const class GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutViewInstructionParameterList extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutViewInstructionParameterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_astAutoLayoutViewInstructionParameterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                                                    const class GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_autoLayoutClassParameterType & inOperand1,
                                                      const class GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewInstructionParameterList add_operation (const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astAutoLayoutViewInstructionParameterList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_autoLayoutClassParameterType constinArgument1,
                                                       class GALGAS_astAutoLayoutViewInstructionParameterValue constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                  class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                 class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                       class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GALGAS_astAutoLayoutViewInstructionParameterValue constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GALGAS_autoLayoutClassParameterType constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_autoLayoutClassParameterType & outArgument1,
                                               class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_autoLayoutClassParameterType & outArgument1,
                                              class GALGAS_astAutoLayoutViewInstructionParameterValue & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterValue getter_mParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutViewInstructionParameterList ;
 
} ; // End of GALGAS_astAutoLayoutViewInstructionParameterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewInstructionParameterList : public cGenericAbstractEnumerator {
  public : cEnumerator_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public : class GALGAS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
  public : class GALGAS_astAutoLayoutViewInstructionParameterValue current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astAutoLayoutViewInstructionParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularBindingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_regularBindingList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_regularBindingList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mBindingName,
                                                  const class GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                  const class GALGAS_bindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_regularBindingList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_regularBindingList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_regularBindingList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_observablePropertyList & inOperand1,
                                                                             const class GALGAS_bindingOptionList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_regularBindingList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_observablePropertyList & inOperand1,
                                                      const class GALGAS_bindingOptionList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingList add_operation (const GALGAS_regularBindingList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_regularBindingList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_observablePropertyList constinArgument1,
                                                       class GALGAS_bindingOptionList constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_observablePropertyList & outArgument1,
                                                  class GALGAS_bindingOptionList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_observablePropertyList & outArgument1,
                                                 class GALGAS_bindingOptionList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_observablePropertyList & outArgument1,
                                                       class GALGAS_bindingOptionList & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GALGAS_bindingOptionList constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservablePropertyListAtIndex (class GALGAS_observablePropertyList constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_observablePropertyList & outArgument1,
                                               class GALGAS_bindingOptionList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_observablePropertyList & outArgument1,
                                              class GALGAS_bindingOptionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mObservablePropertyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_regularBindingList ;
 
} ; // End of GALGAS_regularBindingList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_regularBindingList : public cGenericAbstractEnumerator {
  public : cEnumerator_regularBindingList (const GALGAS_regularBindingList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyList current_mObservablePropertyList (LOCATION_ARGS) const ;
  public : class GALGAS_bindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_regularBindingList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mAutoLayoutViewClassName ;
  public : GALGAS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public : GALGAS_tableValueBinding mProperty_mTableValueBinding ;
  public : GALGAS_runActionDescriptor mProperty_mRunActionDescriptor ;
  public : GALGAS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public : GALGAS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public : GALGAS_graphicController mProperty_mGraphicController ;
  public : GALGAS_regularBindingList mProperty_mRegularBindingList ;

//--- Constructor
  public : cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                            const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                            const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                            const GALGAS_tableValueBinding & in_mTableValueBinding,
                                            const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                            const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                            const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                            const GALGAS_graphicController & in_mGraphicController,
                                            const GALGAS_regularBindingList & in_mRegularBindingList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAutoLayoutViewClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewInstructionParameterList getter_mParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMParameterList (GALGAS_astAutoLayoutViewInstructionParameterList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableValueBinding getter_mTableValueBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableValueBinding (GALGAS_tableValueBinding inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_runActionDescriptor getter_mRunActionDescriptor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRunActionDescriptor (GALGAS_runActionDescriptor inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptor (GALGAS_multipleBindingDescriptor inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptor (GALGAS_multipleBindingDescriptor inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_graphicController getter_mGraphicController (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGraphicController (GALGAS_graphicController inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingList getter_mRegularBindingList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegularBindingList (GALGAS_regularBindingList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHStackViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHStackViewInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public : GALGAS_astHStackViewInstructionDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astHStackViewInstructionDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astHStackViewInstructionDeclaration * ptr (void) const { return (const cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astHStackViewInstructionDeclaration (const cPtr_astHStackViewInstructionDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astHStackViewInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astHStackViewInstructionDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                    const class GALGAS_astViewInstructionList & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astHStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHStackViewInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astHStackViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astHStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public : GALGAS_astViewInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_astHStackViewInstructionDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GALGAS_astViewInstructionList & in_mInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_astViewInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHorizontalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHorizontalStackViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public : GALGAS_astHorizontalStackViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astHorizontalStackViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astHorizontalStackViewDeclaration * ptr (void) const { return (const cPtr_astHorizontalStackViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astHorizontalStackViewDeclaration (const cPtr_astHorizontalStackViewDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astHorizontalStackViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astHorizontalStackViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astHorizontalStackViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHorizontalStackViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astHorizontalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astHorizontalStackViewDeclaration : public cPtr_astAbstractViewDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;

//--- Constructor
  public : cPtr_astHorizontalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astLocalViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astLocalViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public : GALGAS_astLocalViewInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astLocalViewInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astLocalViewInstruction * ptr (void) const { return (const cPtr_astLocalViewInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astLocalViewInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astLocalViewInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLocalView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astLocalViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astLocalViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astLocalViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mLocalView ;

//--- Constructor
  public : cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLocalView (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astSpaceViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astSpaceViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public : GALGAS_astSpaceViewInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astSpaceViewInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astSpaceViewInstruction * ptr (void) const { return (const cPtr_astSpaceViewInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astSpaceViewInstruction (const cPtr_astSpaceViewInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astSpaceViewInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astSpaceViewInstruction constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astSpaceViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astSpaceViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astSpaceViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astSpaceViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes

//--- Constructor
  public : cPtr_astSpaceViewInstruction (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astVStackViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astVStackViewInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public : GALGAS_astVStackViewInstructionDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astVStackViewInstructionDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astVStackViewInstructionDeclaration * ptr (void) const { return (const cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astVStackViewInstructionDeclaration (const cPtr_astVStackViewInstructionDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astVStackViewInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astVStackViewInstructionDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                    const class GALGAS_astViewInstructionList & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astVStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astVStackViewInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astVStackViewInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astVStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public : GALGAS_astViewInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_astVStackViewInstructionDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GALGAS_astViewInstructionList & in_mInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_astViewInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astVerticalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astVerticalStackViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public : GALGAS_astVerticalStackViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astVerticalStackViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astVerticalStackViewDeclaration * ptr (void) const { return (const cPtr_astVerticalStackViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astVerticalStackViewDeclaration (const cPtr_astVerticalStackViewDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astVerticalStackViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astVerticalStackViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astVerticalStackViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astVerticalStackViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVerticalStackViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astVerticalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astVerticalStackViewDeclaration : public cPtr_astAbstractViewDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;

//--- Constructor
  public : cPtr_astVerticalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_atomicPropertyDeclarationAST (void) ;

//---
  public : inline const class cPtr_atomicPropertyDeclarationAST * ptr (void) const { return (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_abstractDefaultValue & inOperand3,
                                                                             const class GALGAS_bool & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValue (class GALGAS_abstractDefaultValue inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyTypeName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mPropertyTypeName ;
  public : GALGAS_lstring mProperty_mPropertyName ;
  public : GALGAS_abstractDefaultValue mProperty_mDefaultValue ;
  public : GALGAS_bool mProperty_mNeedsValidation ;

//--- Constructor
  public : cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                              const GALGAS_lstring & in_mPropertyTypeName,
                                              const GALGAS_lstring & in_mPropertyName,
                                              const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                              const GALGAS_bool & in_mNeedsValidation
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValue (GALGAS_abstractDefaultValue inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_autoLayoutDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutDocumentDeclarationAST * ptr (void) const { return (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutDocumentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutDocumentDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_outletDeclarationList & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                                 const class GALGAS_arrayControllerBindingListAST & inOperand5,
                                                                                 const class GALGAS_astViewDeclarationList & inOperand6,
                                                                                 const class GALGAS_astAutoLayoutToolbarItemList & inOperand7
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (class GALGAS_arrayControllerBindingListAST inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemList (class GALGAS_astAutoLayoutToolbarItemList inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMainViewName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (class GALGAS_outletDeclarationList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (class GALGAS_astViewDeclarationList inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_mAutoLayoutToolbarItemList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMainViewName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_mViewDeclarationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerBindingListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerBindingListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBindingListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerBindingListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mControllerName,
                                                  const class GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBindingListAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerBindingListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerBindingListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_multipleBindingDescriptor & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_arrayControllerBindingListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_multipleBindingDescriptor & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST add_operation (const GALGAS_arrayControllerBindingListAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_arrayControllerBindingListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_multipleBindingDescriptor constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_multipleBindingDescriptor & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_multipleBindingDescriptor & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_multipleBindingDescriptor & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControllerNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHiddenSelectionViewBindingDescriptorAtIndex (class GALGAS_multipleBindingDescriptor constinArgument0,
                                                                                         class GALGAS_uint constinArgument1,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_multipleBindingDescriptor & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_multipleBindingDescriptor & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mHiddenSelectionViewBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerBindingListAST ;
 
} ; // End of GALGAS_arrayControllerBindingListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_arrayControllerBindingListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_multipleBindingDescriptor current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerBindingListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutToolbarItemList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutToolbarItemList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutToolbarItemList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_astAutoLayoutToolbarItemList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutToolbarItemList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutToolbarItemList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_astAutoLayoutToolbarItemList constructor_listWithValue (const class GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astAutoLayoutToolbarItemList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutToolbarItemList add_operation (const GALGAS_astAutoLayoutToolbarItemList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astAutoLayoutToolbarItemList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_astAutoLayoutToolbarItem constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMItemAtIndex (class GALGAS_astAutoLayoutToolbarItem constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_astAutoLayoutToolbarItem & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItem getter_mItemAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutToolbarItemList ;
 
} ; // End of GALGAS_astAutoLayoutToolbarItemList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutToolbarItemList : public cGenericAbstractEnumerator {
  public : cEnumerator_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_astAutoLayoutToolbarItem current_mItem (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astAutoLayoutToolbarItemList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astViewDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_astViewDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_astViewDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mViewName,
                                                  const class GALGAS_astAbstractViewDeclaration & in_mView
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astViewDeclarationList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astViewDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_astViewDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_astAbstractViewDeclaration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astViewDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_astAbstractViewDeclaration & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_astViewDeclarationList add_operation (const GALGAS_astViewDeclarationList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_astViewDeclarationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_astAbstractViewDeclaration constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_astAbstractViewDeclaration & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_astAbstractViewDeclaration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_astAbstractViewDeclaration & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMViewAtIndex (class GALGAS_astAbstractViewDeclaration constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMViewNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_astAbstractViewDeclaration & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_astAbstractViewDeclaration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAbstractViewDeclaration getter_mViewAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mViewNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astViewDeclarationList ;
 
} ; // End of GALGAS_astViewDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astViewDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_astViewDeclarationList (const GALGAS_astViewDeclarationList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mViewName (LOCATION_ARGS) const ;
  public : class GALGAS_astAbstractViewDeclaration current_mView (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astViewDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOutletTypeName,
                                                  const class GALGAS_lstring & in_mOutletName,
                                                  const class GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                  const class GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                  const class GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                  const class GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                  const class GALGAS_regularBindingList & in_mRegularBindingList,
                                                  const class GALGAS_graphicController & in_mGraphicController
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletDeclarationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_outletDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_tableValueBinding & inOperand2,
                                                                                const class GALGAS_runActionDescriptor & inOperand3,
                                                                                const class GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                const class GALGAS_regularBindingList & inOperand6,
                                                                                const class GALGAS_graphicController & inOperand7
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_tableValueBinding & inOperand2,
                                                      const class GALGAS_runActionDescriptor & inOperand3,
                                                      const class GALGAS_multipleBindingDescriptor & inOperand4,
                                                      const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                      const class GALGAS_regularBindingList & inOperand6,
                                                      const class GALGAS_graphicController & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletDeclarationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_tableValueBinding constinArgument2,
                                                       class GALGAS_runActionDescriptor constinArgument3,
                                                       class GALGAS_multipleBindingDescriptor constinArgument4,
                                                       class GALGAS_multipleBindingDescriptor constinArgument5,
                                                       class GALGAS_regularBindingList constinArgument6,
                                                       class GALGAS_graphicController constinArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_tableValueBinding & outArgument2,
                                                  class GALGAS_runActionDescriptor & outArgument3,
                                                  class GALGAS_multipleBindingDescriptor & outArgument4,
                                                  class GALGAS_multipleBindingDescriptor & outArgument5,
                                                  class GALGAS_regularBindingList & outArgument6,
                                                  class GALGAS_graphicController & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_tableValueBinding & outArgument2,
                                                 class GALGAS_runActionDescriptor & outArgument3,
                                                 class GALGAS_multipleBindingDescriptor & outArgument4,
                                                 class GALGAS_multipleBindingDescriptor & outArgument5,
                                                 class GALGAS_regularBindingList & outArgument6,
                                                 class GALGAS_graphicController & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_tableValueBinding & outArgument2,
                                                       class GALGAS_runActionDescriptor & outArgument3,
                                                       class GALGAS_multipleBindingDescriptor & outArgument4,
                                                       class GALGAS_multipleBindingDescriptor & outArgument5,
                                                       class GALGAS_regularBindingList & outArgument6,
                                                       class GALGAS_graphicController & outArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptorAtIndex (class GALGAS_multipleBindingDescriptor constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGraphicControllerAtIndex (class GALGAS_graphicController constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptorAtIndex (class GALGAS_multipleBindingDescriptor constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegularBindingListAtIndex (class GALGAS_regularBindingList constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRunDescriptorAtIndex (class GALGAS_runActionDescriptor constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableValueBindingDescriptorAtIndex (class GALGAS_tableValueBinding constinArgument0,
                                                                                class GALGAS_uint constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_tableValueBinding & outArgument2,
                                               class GALGAS_runActionDescriptor & outArgument3,
                                               class GALGAS_multipleBindingDescriptor & outArgument4,
                                               class GALGAS_multipleBindingDescriptor & outArgument5,
                                               class GALGAS_regularBindingList & outArgument6,
                                               class GALGAS_graphicController & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_tableValueBinding & outArgument2,
                                              class GALGAS_runActionDescriptor & outArgument3,
                                              class GALGAS_multipleBindingDescriptor & outArgument4,
                                              class GALGAS_multipleBindingDescriptor & outArgument5,
                                              class GALGAS_regularBindingList & outArgument6,
                                              class GALGAS_graphicController & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_graphicController getter_mGraphicControllerAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_mRegularBindingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_runActionDescriptor getter_mRunDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableValueBinding getter_mTableValueBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletDeclarationList ;
 
} ; // End of GALGAS_outletDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOutletTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletName (LOCATION_ARGS) const ;
  public : class GALGAS_tableValueBinding current_mTableValueBindingDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_runActionDescriptor current_mRunDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_multipleBindingDescriptor current_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_multipleBindingDescriptor current_mHiddenBindingDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_regularBindingList current_mRegularBindingList (LOCATION_ARGS) const ;
  public : class GALGAS_graphicController current_mGraphicController (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mMainViewName ;
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public : GALGAS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;
  public : GALGAS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public : GALGAS_astAutoLayoutToolbarItemList mProperty_mAutoLayoutToolbarItemList ;

//--- Constructor
  public : cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                  const GALGAS_lstring & in_mRootEntityName,
                                                  const GALGAS_lstring & in_mMainViewName,
                                                  const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                  const GALGAS_lstringlist & in_mActionDeclarationList,
                                                  const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                  const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                  const GALGAS_astAutoLayoutToolbarItemList & in_mAutoLayoutToolbarItemList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMainViewName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMainViewName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astViewDeclarationList getter_mViewDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (GALGAS_astViewDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutToolbarItemList getter_mAutoLayoutToolbarItemList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemList (GALGAS_astAutoLayoutToolbarItemList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutViewClassDeclarationAST * ptr (void) const { return (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_bool & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4,
                                                                                  const class GALGAS_bool & inOperand5,
                                                                                  const class GALGAS_bool & inOperand6,
                                                                                  const class GALGAS_bool & inOperand7,
                                                                                  const class GALGAS_autoLayoutClassParameterList & inOperand8,
                                                                                  const class GALGAS_astAutoLayoutViewFunctionMap & inOperand9
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMap (class GALGAS_astAutoLayoutViewFunctionMap inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_autoLayoutClassParameterList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutClassParameterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutClassParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutClassParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutClassParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mParameterName,
                                                  const class GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutClassParameterList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutClassParameterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutClassParameterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_autoLayoutClassParameterType & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutClassParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_autoLayoutClassParameterType & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutClassParameterList add_operation (const GALGAS_autoLayoutClassParameterList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutClassParameterList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_autoLayoutClassParameterType constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_autoLayoutClassParameterType & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GALGAS_autoLayoutClassParameterType constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_autoLayoutClassParameterType & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_autoLayoutClassParameterType & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutClassParameterList ;
 
} ; // End of GALGAS_autoLayoutClassParameterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutClassParameterList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public : class GALGAS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutClassParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_astAutoLayoutViewFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutViewFunctionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inSource) ;
  public : GALGAS_astAutoLayoutViewFunctionMap & operator = (const GALGAS_astAutoLayoutViewFunctionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutViewFunctionMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutViewFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_astAutoLayoutViewFunctionMap constructor_mapWithMapToOverride (const class GALGAS_astAutoLayoutViewFunctionMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_autoLayoutClassParameterList & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_autoLayoutClassParameterList constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFomalParameterListForKey (class GALGAS_autoLayoutClassParameterList constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_autoLayoutClassParameterList & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mFomalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_autoLayoutClassParameterList & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_astAutoLayoutViewFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_astAutoLayoutViewFunctionMap ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_astAutoLayoutViewFunctionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_autoLayoutClassParameterList current_mFomalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astAutoLayoutViewFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@astAutoLayoutViewFunctionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_astAutoLayoutViewFunctionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_autoLayoutClassParameterList mProperty_mFomalParameterList ;

//--- Constructor
  public : cMapElement_astAutoLayoutViewFunctionMap (const GALGAS_lstring & inKey,
                                                     const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutViewClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutViewClassDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mUserDefined ;
  public : GALGAS_lstring mProperty_mSuperClassName ;
  public : GALGAS_bool mProperty_mHasRunAction ;
  public : GALGAS_bool mProperty_mHasEnabled ;
  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public : GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public : GALGAS_bool mProperty_mHasHidden ;
  public : GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;
  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--- Constructor
  public : cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                   const GALGAS_bool & in_mUserDefined,
                                                   const GALGAS_lstring & in_mSuperClassName,
                                                   const GALGAS_bool & in_mHasRunAction,
                                                   const GALGAS_bool & in_mHasEnabled,
                                                   const GALGAS_bool & in_mHandlesTableValueBinding,
                                                   const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                   const GALGAS_bool & in_mHasHidden,
                                                   const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                   const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutClassParameterList getter_mParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMParameterList (GALGAS_autoLayoutClassParameterList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMap (GALGAS_astAutoLayoutViewFunctionMap inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_boolAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_boolAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_boolAsDefaultValue * ptr (void) const { return (const cPtr_boolAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_boolAsDefaultValue constructor_new (const class GALGAS_lbool & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lbool inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbool getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lbool mProperty_mValue ;

//--- Constructor
  public : cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbool getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lbool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_comparisonMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_comparisonMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_comparisonMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_comparisonMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                       const class GALGAS_multipleBindingComparisonAST & inOperand1,
                                                                                       const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperator (class GALGAS_multipleBindingComparisonAST inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @multipleBindingComparisonAST enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multipleBindingComparisonAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_multipleBindingComparisonAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_notEqual,
    kEnum_lower,
    kEnum_lowerOrEqual,
    kEnum_greater,
    kEnum_greaterOrEqual
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multipleBindingComparisonAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multipleBindingComparisonAST constructor_equal (LOCATION_ARGS) ;

  public : static class GALGAS_multipleBindingComparisonAST constructor_greater (LOCATION_ARGS) ;

  public : static class GALGAS_multipleBindingComparisonAST constructor_greaterOrEqual (LOCATION_ARGS) ;

  public : static class GALGAS_multipleBindingComparisonAST constructor_lower (LOCATION_ARGS) ;

  public : static class GALGAS_multipleBindingComparisonAST constructor_lowerOrEqual (LOCATION_ARGS) ;

  public : static class GALGAS_multipleBindingComparisonAST constructor_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multipleBindingComparisonAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreater (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLower (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multipleBindingComparisonAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_comparisonMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public : GALGAS_multipleBindingComparisonAST mProperty_mOperator ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                        const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_computedPropertyDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_computedPropertyDeclarationAST * ptr (void) const { return (const cPtr_computedPropertyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2,
                                                                               const class GALGAS_lstring & inOperand3,
                                                                               const class GALGAS_observablePropertyList & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (class GALGAS_lstring inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComputedPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComputedPropertyTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_observablePropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_observablePropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_observablePropertyAST & in_mObservableProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyList constructor_listWithValue (const class GALGAS_observablePropertyAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_observablePropertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_observablePropertyAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList add_operation (const GALGAS_observablePropertyList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_observablePropertyList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_observablePropertyAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_observablePropertyAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_observablePropertyAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservablePropertyAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_observablePropertyAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_observablePropertyAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mObservablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_observablePropertyList ;
 
} ; // End of GALGAS_observablePropertyList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_observablePropertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_observablePropertyList (const GALGAS_observablePropertyList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_observablePropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mComputedPropertyTypeName ;
  public : GALGAS_lstring mProperty_mComputedPropertyName ;
  public : GALGAS_observablePropertyList mProperty_mDependencyList ;

//--- Constructor
  public : cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                const GALGAS_lstring & in_mRootEntityName,
                                                const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                const GALGAS_lstring & in_mComputedPropertyName,
                                                const GALGAS_observablePropertyList & in_mDependencyList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mComputedPropertyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mComputedPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_observablePropertyList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @doubleAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_doubleAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_doubleAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_doubleAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_doubleAsDefaultValue * ptr (void) const { return (const cPtr_doubleAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_doubleAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_doubleAsDefaultValue constructor_new (const class GALGAS_ldouble & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_doubleAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_ldouble inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_doubleAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @doubleAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_doubleAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_ldouble mProperty_mValue ;

//--- Constructor
  public : cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_ldouble inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_entityDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_entityDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_entityDeclarationAST * ptr (void) const { return (const cPtr_entityDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_entityDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_simpleStoredPropertyList & inOperand3,
                                                                     const class GALGAS_stringset & inOperand4,
                                                                     const class GALGAS_lstringlist & inOperand5,
                                                                     const class GALGAS_lstringlist & inOperand6,
                                                                     const class GALGAS_bool & inOperand7,
                                                                     const class GALGAS_externSwiftDelegateList & inOperand8
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNames (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSignatureList (class GALGAS_stringset inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSimpleStoredPropertyList (class GALGAS_simpleStoredPropertyList inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mObsoleteEntityNames (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftDelegateList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftDelegateList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externSwiftDelegateList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mExternSwiftDelegateName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externSwiftDelegateList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externSwiftDelegateList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externSwiftDelegateList constructor_listWithValue (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externSwiftDelegateList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList add_operation (const GALGAS_externSwiftDelegateList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externSwiftDelegateList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternSwiftDelegateNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externSwiftDelegateList ;
 
} ; // End of GALGAS_externSwiftDelegateList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externSwiftDelegateList : public cGenericAbstractEnumerator {
  public : cEnumerator_externSwiftDelegateList (const GALGAS_externSwiftDelegateList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExternSwiftDelegateName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externSwiftDelegateList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleStoredPropertyList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_simpleStoredPropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_simpleStoredPropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mPropertyTypeName,
                                                  const class GALGAS_lstring & in_mPropertyName,
                                                  const class GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                  const class GALGAS_bool & in_mNeedsValidation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_simpleStoredPropertyList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_simpleStoredPropertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_simpleStoredPropertyList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_abstractDefaultValue & inOperand2,
                                                                                   const class GALGAS_bool & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_simpleStoredPropertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_abstractDefaultValue & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList add_operation (const GALGAS_simpleStoredPropertyList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_simpleStoredPropertyList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_abstractDefaultValue constinArgument2,
                                                       class GALGAS_bool constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_abstractDefaultValue & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_abstractDefaultValue & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_abstractDefaultValue & outArgument2,
                                                       class GALGAS_bool & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValueAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNeedsValidationAtIndex (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_abstractDefaultValue & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_abstractDefaultValue & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_simpleStoredPropertyList ;
 
} ; // End of GALGAS_simpleStoredPropertyList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_simpleStoredPropertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mNeedsValidation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_simpleStoredPropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsAbstract ;
  public : GALGAS_lstring mProperty_mSuperEntityName ;
  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredPropertyList ;
  public : GALGAS_stringset mProperty_mSignatureList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public : GALGAS_lstringlist mProperty_mObsoleteEntityNames ;
  public : GALGAS_bool mProperty_mIsGraphicEntity ;
  public : GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;

//--- Constructor
  public : cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_bool & in_mIsAbstract,
                                      const GALGAS_lstring & in_mSuperEntityName,
                                      const GALGAS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                      const GALGAS_stringset & in_mSignatureList,
                                      const GALGAS_lstringlist & in_mActionDeclarationList,
                                      const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                      const GALGAS_bool & in_mIsGraphicEntity,
                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsAbstract (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList getter_mSimpleStoredPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSimpleStoredPropertyList (GALGAS_simpleStoredPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSignatureList (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mObsoleteEntityNames (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNames (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_enumerationDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationDeclarationAST * ptr (void) const { return (const cPtr_enumerationDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstringlist & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEnumConstantNameList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumerationDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstringlist mProperty_mEnumConstantNameList ;

//--- Constructor
  public : cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                           const GALGAS_lstringlist & in_mEnumConstantNameList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnumConstantNameList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @identifierAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_identifierAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_identifierAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_identifierAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_identifierAsDefaultValue * ptr (void) const { return (const cPtr_identifierAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_identifierAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_identifierAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_identifierAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @identifierAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_identifierAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public : cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_integerAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_integerAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_integerAsDefaultValue * ptr (void) const { return (const cPtr_integerAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_integerAsDefaultValue constructor_new (const class GALGAS_luint & inOperand0,
                                                                      const class GALGAS_bool & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMNegative (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNegative (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @integerAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_integerAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_luint mProperty_mValue ;
  public : GALGAS_bool mProperty_mNegative ;

//--- Constructor
  public : cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue,
                                       const GALGAS_bool & in_mNegative
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mNegative (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNegative (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalIntMultipleBindingExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalIntMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalIntMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalIntMultipleBindingExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalIntMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalIntMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_luint mProperty_mValue ;

//--- Constructor
  public : cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_negateBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_negateBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_negateBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_negateBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_negateBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_negateBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mBinding ;

//--- Constructor
  public : cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyInMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyInMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_observablePropertyInMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_observablePropertyInMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyInMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyInMultipleBindingExpressionAST constructor_new (const class GALGAS_observablePropertyAST & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMProperty (class GALGAS_observablePropertyAST inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyInMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @observablePropertyAST enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_observablePropertyAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_rootProperty,
    kEnum_rootPropertyWithOption,
    kEnum_rootPropertyRelationship,
    kEnum_rootPropertyNone,
    kEnum_selfWithoutProperty,
    kEnum_selfProperty,
    kEnum_selfPropertyWithOption,
    kEnum_selfPropertyArray,
    kEnum_selfPropertyObject,
    kEnum_selfPropertyNone,
    kEnum_prefsProperty,
    kEnum_prefsPropertyWithOption,
    kEnum_selfControllerProperty,
    kEnum_selfControllerSecondaryProperty,
    kEnum_selfControllerAllProperties,
    kEnum_selfControllerOneProperty,
    kEnum_signatureProperty,
    kEnum_versionProperty,
    kEnum_versionShouldChangeProperty,
    kEnum_superProperty
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyAST constructor_prefsProperty (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_prefsPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootProperty (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyRelationship (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerAllProperties (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerOneProperty (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerProperty (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfControllerSecondaryProperty (const class GALGAS_lstring & inOperand0,
                                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                                  const class GALGAS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfProperty (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyArray (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyObject (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfWithoutProperty (const class GALGAS_location & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_signatureProperty (const class GALGAS_location & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_superProperty (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_versionProperty (const class GALGAS_location & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_versionShouldChangeProperty (const class GALGAS_location & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_prefsProperty (class GALGAS_lstring & outArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_prefsPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                 class GALGAS_lstring & outArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootProperty (class GALGAS_lstring & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootPropertyNone (class GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootPropertyRelationship (class GALGAS_lstring & outArgument0,
                                                                  class GALGAS_lstring & outArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerAllProperties (class GALGAS_lstring & outArgument0,
                                                                     class GALGAS_lstring & outArgument1,
                                                                     class GALGAS_lstring & outArgument2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerOneProperty (class GALGAS_lstring & outArgument0,
                                                                   class GALGAS_lstring & outArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerProperty (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfControllerSecondaryProperty (class GALGAS_lstring & outArgument0,
                                                                         class GALGAS_lstring & outArgument1,
                                                                         class GALGAS_lstring & outArgument2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfProperty (class GALGAS_lstring & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyArray (class GALGAS_lstring & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyNone (class GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyObject (class GALGAS_lstring & outArgument0,
                                                            class GALGAS_lstring & outArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfWithoutProperty (class GALGAS_location & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_signatureProperty (class GALGAS_location & outArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_superProperty (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_versionProperty (class GALGAS_location & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_versionShouldChangeProperty (class GALGAS_location & outArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyRelationship (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerAllProperties (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerOneProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfWithoutProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSignatureProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSuperProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionShouldChangeProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @observablePropertyAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                 const GALGAS_lstring & inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyNone : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (const GALGAS_location & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyArray : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring & inAssociatedValue0,
                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyObject : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (const GALGAS_lstring & inAssociatedValue0,
                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyNone : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                        const GALGAS_lstring & inAssociatedValue1,
                                                                                        const GALGAS_lstring & inAssociatedValue2
                                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (const GALGAS_lstring & inAssociatedValue0,
                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                  const GALGAS_lstring & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_signatureProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_signatureProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_versionProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_superProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_superProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_superProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @observablePropertyInMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_observablePropertyInMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_observablePropertyAST mProperty_mProperty ;

//--- Constructor
  public : cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyAST getter_mProperty (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProperty (GALGAS_observablePropertyAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_orBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_orBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                      const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_outletClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outletClassDeclarationAST * ptr (void) const { return (const cPtr_outletClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_bool & inOperand3,
                                                                          const class GALGAS_bool & inOperand4,
                                                                          const class GALGAS_bool & inOperand5,
                                                                          const class GALGAS_bool & inOperand6,
                                                                          const class GALGAS_bool & inOperand7
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outletClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_outletClassDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mUserDefined ;
  public : GALGAS_lstring mProperty_mSuperClassName ;
  public : GALGAS_bool mProperty_mHasRunAction ;
  public : GALGAS_bool mProperty_mHasEnabled ;
  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public : GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public : GALGAS_bool mProperty_mHasHidden ;

//--- Constructor
  public : cPtr_outletClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                           const GALGAS_bool & in_mUserDefined,
                                           const GALGAS_lstring & in_mSuperClassName,
                                           const GALGAS_bool & in_mHasRunAction,
                                           const GALGAS_bool & in_mHasEnabled,
                                           const GALGAS_bool & in_mHandlesTableValueBinding,
                                           const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                           const GALGAS_bool & in_mHasHidden
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_prefsAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefsAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_prefsAsDefaultValue * ptr (void) const { return (const cPtr_prefsAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefsAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefsAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefsAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPrefPropertyName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefsAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mProperty_mPrefPropertyName ;

//--- Constructor
  public : cPtr_prefsAsDefaultValue (const GALGAS_lstring & in_mPrefPropertyName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPrefPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPrefPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_proxyDeclarationAST (void) ;

//---
  public : inline const class cPtr_proxyDeclarationAST * ptr (void) const { return (const cPtr_proxyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_proxyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_proxyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_proxyKind & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_lstring & inOperand3,
                                                                    const class GALGAS_lstring & inOperand4,
                                                                    const class GALGAS_lstring & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyTypeName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProxyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProxyTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_proxyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @proxyKind enum                                              *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_proxyKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_propertyProxy,
    kEnum_toManyProxy
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_proxyKind extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_proxyKind constructor_propertyProxy (LOCATION_ARGS) ;

  public : static class GALGAS_proxyKind constructor_toManyProxy (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_proxyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPropertyProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToManyProxy (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_proxyKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @proxyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_proxyDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_proxyKind mProperty_mProxyKind ;
  public : GALGAS_lstring mProperty_mProxyTypeName ;
  public : GALGAS_lstring mProperty_mProxyName ;
  public : GALGAS_lstring mProperty_mToOneRelationshipName ;
  public : GALGAS_lstring mProperty_mPropertyName ;

//--- Constructor
  public : cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_proxyKind & in_mProxyKind,
                                     const GALGAS_lstring & in_mProxyTypeName,
                                     const GALGAS_lstring & in_mProxyName,
                                     const GALGAS_lstring & in_mToOneRelationshipName,
                                     const GALGAS_lstring & in_mPropertyName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (GALGAS_proxyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mProxyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mProxyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_selectionControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectionControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectionControllerDeclarationAST * ptr (void) const { return (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectionControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectionControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_lstring & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectionControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (class GALGAS_lstring inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelectionControllerName (class GALGAS_lstring inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelectionEntityName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectionEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectionControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selectionControllerDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mSelectionControllerName ;
  public : GALGAS_lstring mProperty_mModelControllerName ;
  public : GALGAS_lstring mProperty_mModelControllerPropertyName ;
  public : GALGAS_lstring mProperty_mSelectionEntityName ;

//--- Constructor
  public : cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                   const GALGAS_lstring & in_mSelectionControllerName,
                                                   const GALGAS_lstring & in_mModelControllerName,
                                                   const GALGAS_lstring & in_mModelControllerPropertyName,
                                                   const GALGAS_lstring & in_mSelectionEntityName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelectionControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSelectionEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelectionEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @stringAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_stringAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_stringAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_stringAsDefaultValue * ptr (void) const { return (const cPtr_stringAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_stringAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_stringAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_stringAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public : cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_tableViewControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_tableViewControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_tableViewControllerDeclarationAST * ptr (void) const { return (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_tableViewControllerDeclarationAST (const cPtr_tableViewControllerDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_lstring & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4,
                                                                                  const class GALGAS_tableViewControllerBoundColumnListAST & inOperand5,
                                                                                  const class GALGAS_tableViewControllerAttributListAST & inOperand6
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsRoot (class GALGAS_bool inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (class GALGAS_tableViewControllerAttributListAST inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (class GALGAS_tableViewControllerBoundColumnListAST inArgument0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerAttributListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerAttributListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerAttributListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_tableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_abstractDefaultValue & in_mAttributeValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerAttributListAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerAttributListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewControllerAttributListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_abstractDefaultValue & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewControllerAttributListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractDefaultValue & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerAttributListAST add_operation (const GALGAS_tableViewControllerAttributListAST & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewControllerAttributListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_abstractDefaultValue constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_abstractDefaultValue & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_abstractDefaultValue & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_abstractDefaultValue & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAttributeValueAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_abstractDefaultValue & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractDefaultValue & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mAttributeValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerAttributListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerAttributListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerAttributListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerAttributListAST ;
 
} ; // End of GALGAS_tableViewControllerAttributListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_tableViewControllerAttributListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_tableViewControllerAttributListAST (const GALGAS_tableViewControllerAttributListAST & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tableViewControllerAttributListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerAttributListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerBoundColumnListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerBoundColumnListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerBoundColumnListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_tableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mColumnName,
                                                  const class GALGAS_lstring & in_mColumnOutletTypeName,
                                                  const class GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                  const class GALGAS_lstring & in_mSortPropertyName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerBoundColumnListAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerBoundColumnListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewControllerBoundColumnListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1,
                                                                                                const class GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                                                const class GALGAS_lstring & inOperand3
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewControllerBoundColumnListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_tableViewColumnBindingAST & inOperand2,
                                                      const class GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerBoundColumnListAST add_operation (const GALGAS_tableViewControllerBoundColumnListAST & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewControllerBoundColumnListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_tableViewColumnBindingAST constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_tableViewColumnBindingAST & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_tableViewColumnBindingAST & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_tableViewColumnBindingAST & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMColumnBindingASTAtIndex (class GALGAS_tableViewColumnBindingAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMColumnNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMColumnOutletTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSortPropertyNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_tableViewColumnBindingAST & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_tableViewColumnBindingAST & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewColumnBindingAST getter_mColumnBindingASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mColumnNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mColumnOutletTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSortPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerBoundColumnListAST ;
 
} ; // End of GALGAS_tableViewControllerBoundColumnListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_tableViewControllerBoundColumnListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_tableViewControllerBoundColumnListAST (const GALGAS_tableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mColumnName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mColumnOutletTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_tableViewColumnBindingAST current_mColumnBindingAST (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tableViewControllerBoundColumnListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tableViewControllerDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_bool mProperty_mIsRoot ;
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mToManyPropertyName ;
  public : GALGAS_tableViewControllerBoundColumnListAST mProperty_mTableViewControllerBoundColumnListAST ;
  public : GALGAS_tableViewControllerAttributListAST mProperty_mTableViewControllerAttributListAST ;

//--- Constructor
  public : cPtr_tableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                   const GALGAS_lstring & in_mControllerName,
                                                   const GALGAS_bool & in_mIsRoot,
                                                   const GALGAS_lstring & in_mRootEntityName,
                                                   const GALGAS_lstring & in_mToManyPropertyName,
                                                   const GALGAS_tableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                   const GALGAS_tableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsRoot (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (GALGAS_tableViewControllerBoundColumnListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (GALGAS_tableViewControllerAttributListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_toManyRelationshipAST (void) ;

//---
  public : inline const class cPtr_toManyRelationshipAST * ptr (void) const { return (const cPtr_toManyRelationshipAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyRelationshipAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_toManyRelationshipOptionAST & inOperand3,
                                                                      const class GALGAS_bool & inOperand4,
                                                                      const class GALGAS_bool & inOperand5
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCustomStore (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_toManyRelationshipOptionAST inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyRelationshipName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mCustomStore (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipOptionAST getter_mOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                      Phase 1: @toManyRelationshipOptionAST enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipOptionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_toManyRelationshipOptionAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_hasOpposite,
    kEnum_hasDependance
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyRelationshipOptionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyRelationshipOptionAST constructor_hasDependance (const class GALGAS_lstring & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toManyRelationshipOptionAST constructor_hasOpposite (const class GALGAS_lstring & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toManyRelationshipOptionAST constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyRelationshipOptionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_hasDependance (class GALGAS_lstring & outArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_hasOpposite (class GALGAS_lstring & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipOptionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @toManyRelationshipOptionAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (const GALGAS_lstring & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (const GALGAS_lstring & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyRelationshipAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mDestinationEntityName ;
  public : GALGAS_lstring mProperty_mToManyRelationshipName ;
  public : GALGAS_toManyRelationshipOptionAST mProperty_mOption ;
  public : GALGAS_bool mProperty_mCustomStore ;
  public : GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public : cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                       const GALGAS_lstring & in_mDestinationEntityName,
                                       const GALGAS_lstring & in_mToManyRelationshipName,
                                       const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                       const GALGAS_bool & in_mCustomStore,
                                       const GALGAS_bool & in_mUsedForSignature
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_toManyRelationshipOptionAST getter_mOption (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOption (GALGAS_toManyRelationshipOptionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mCustomStore (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCustomStore (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOneRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneRelationshipAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_toOneRelationshipAST (void) ;

//---
  public : inline const class cPtr_toOneRelationshipAST * ptr (void) const { return (const cPtr_toOneRelationshipAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOneRelationshipAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                                     const class GALGAS_bool & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOpposite (class GALGAS_toOneOppositeRelationship inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @toOneOppositeRelationship enum                                      *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneOppositeRelationship : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_toOneOppositeRelationship (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_oppositeIsToOne,
    kEnum_oppositeIsToMany
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOneOppositeRelationship extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneOppositeRelationship constructor_none (LOCATION_ARGS) ;

  public : static class GALGAS_toOneOppositeRelationship constructor_oppositeIsToMany (const class GALGAS_lstring & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toOneOppositeRelationship constructor_oppositeIsToOne (const class GALGAS_lstring & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOneOppositeRelationship & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_oppositeIsToMany (class GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_oppositeIsToOne (class GALGAS_lstring & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOppositeIsToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOppositeIsToOne (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneOppositeRelationship class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @toOneOppositeRelationship enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (const GALGAS_lstring & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (const GALGAS_lstring & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toOneRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toOneRelationshipAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mDestinationEntityName ;
  public : GALGAS_lstring mProperty_mToOneRelationshipName ;
  public : GALGAS_toOneOppositeRelationship mProperty_mOpposite ;
  public : GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public : cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_lstring & in_mDestinationEntityName,
                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                      const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                      const GALGAS_bool & in_mUsedForSignature
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_transientClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientClassDeclarationAST * ptr (void) const { return (const cPtr_transientClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_bool & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMIsClass (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsClass (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientClassDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsClass ;

//--- Constructor
  public : cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                              const GALGAS_bool & in_mIsClass
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsClass (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsClass (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_transientDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientDeclarationAST * ptr (void) const { return (const cPtr_transientDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_lstring & inOperand3,
                                                                        const class GALGAS_observablePropertyList & inOperand4,
                                                                        const class GALGAS_bool & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsOverriding (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientTypeName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mTransientTypeName ;
  public : GALGAS_lstring mProperty_mTransientName ;
  public : GALGAS_observablePropertyList mProperty_mDependencyList ;
  public : GALGAS_bool mProperty_mIsOverriding ;

//--- Constructor
  public : cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                         const GALGAS_lstring & in_mRootEntityName,
                                         const GALGAS_lstring & in_mTransientTypeName,
                                         const GALGAS_lstring & in_mTransientName,
                                         const GALGAS_observablePropertyList & in_mDependencyList,
                                         const GALGAS_bool & in_mIsOverriding
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_observablePropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsOverriding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xibDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xibDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_xibDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_xibDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_xibDocumentDeclarationAST * ptr (void) const { return (const cPtr_xibDocumentDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xibDocumentDeclarationAST (const cPtr_xibDocumentDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xibDocumentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_xibDocumentDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_outletDeclarationList & inOperand2,
                                                                          const class GALGAS_lstringlist & inOperand3,
                                                                          const class GALGAS_arrayControllerBindingListAST & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xibDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (class GALGAS_arrayControllerBindingListAST inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (class GALGAS_outletDeclarationList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xibDocumentDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xibDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xibDocumentDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public : GALGAS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;

//--- Constructor
  public : cPtr_xibDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                           const GALGAS_lstring & in_mRootEntityName,
                                           const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                           const GALGAS_lstringlist & in_mActionDeclarationList,
                                           const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorBooleanMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_xorBooleanMultipleBindingExpressionAST (void) ;

//---
  public : inline const class cPtr_xorBooleanMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xorBooleanMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_xorBooleanMultipleBindingExpressionAST constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                       const class GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xorBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_xorBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @astAutoLayoutToolbarItem enum                                       *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutToolbarItem : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutToolbarItem (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_view,
    kEnum_space
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutToolbarItem extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutToolbarItem constructor_space (LOCATION_ARGS) ;

  public : static class GALGAS_astAutoLayoutToolbarItem constructor_view (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_astComputedViewInstruction & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astAutoLayoutToolbarItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_view (class GALGAS_lstring & outArgument0,
                                              class GALGAS_astComputedViewInstruction & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSpace (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutToolbarItem class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutToolbarItem ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @astAutoLayoutToolbarItem enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_astAutoLayoutToolbarItem_view : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_astComputedViewInstruction mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_astAutoLayoutToolbarItem_view (const GALGAS_lstring & inAssociatedValue0,
                                                                const GALGAS_astComputedViewInstruction & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_astAutoLayoutToolbarItem_view (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              Phase 1: @astAutoLayoutViewInstructionParameterValue enum                              *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewInstructionParameterValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutViewInstructionParameterValue (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_string,
    kEnum_enumFunc
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutViewInstructionParameterValue extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutViewInstructionParameterValue constructor_enumFunc (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_astAutoLayoutViewInstructionParameterValue constructor_string (const class GALGAS_string & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_enumFunc (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_string (class GALGAS_string & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumFunc (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutViewInstructionParameterValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @astAutoLayoutViewInstructionParameterValue enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string (const GALGAS_string & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc (const GALGAS_lstring & inAssociatedValue0,
                                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @autoLayoutClassParameterType enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutClassParameterType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutClassParameterType (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_typeString,
    kEnum_typeStringArray,
    kEnum_typeInt,
    kEnum_typeBool,
    kEnum_typeView
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutClassParameterType extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutClassParameterType constructor_typeBool (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutClassParameterType constructor_typeInt (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutClassParameterType constructor_typeString (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutClassParameterType constructor_typeStringArray (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutClassParameterType constructor_typeView (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutClassParameterType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeBool (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeInt (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeStringArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTypeView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutClassParameterType class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @mainXibElement enum                                            *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_mainXibElement (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_text,
    kEnum_outlet
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mainXibElement extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mainXibElement constructor_outlet (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_mainXibElement constructor_text (const class GALGAS_lstring & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mainXibElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_outlet (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_text (class GALGAS_lstring & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutlet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isText (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibElement class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @mainXibElement enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_mainXibElement_text : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_mainXibElement_text (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_mainXibElement_outlet : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                        const GALGAS_lstring & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_mainXibElement_outlet (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'preferencesName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_preferencesName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR easyBindings_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_action_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
  public : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
  public : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GALGAS_lstring inArgument0,
                                                                                GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_autolayout_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_autolayout_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GALGAS_lstring inArgument0,
                                                                       GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                       GALGAS_lstring & outArgument2,
                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public : virtual void nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList & outArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingComparison_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'column_bindings' non terminal
//--- 'parse' label
  public : virtual void nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST & outArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_computed_5F_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_computed_5F_view_5F_instruction_ (GALGAS_astComputedViewInstruction & outArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_controller_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                       const GALGAS_lstring inArgument1,
                                                       GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                       GALGAS_astDeclarationStruct & ioArgument3,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_document_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_function_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_function_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public : virtual void nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_explicit_5F_value_ (GALGAS_abstractDefaultValue & outArgument0,
                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_swift_5F_delegate_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_swift_5F_func_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_graphviz_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
  public : virtual void nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_main_5F_xib_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
  public : virtual void nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public : virtual void nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_observable_5F_property_ (GALGAS_observablePropertyAST & outArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_binding_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_binding_ (GALGAS_tableValueBinding & outArgument0,
                                               GALGAS_runActionDescriptor & outArgument1,
                                               GALGAS_multipleBindingDescriptor & outArgument2,
                                               GALGAS_multipleBindingDescriptor & outArgument3,
                                               GALGAS_graphicController & outArgument4,
                                               GALGAS_regularBindingList & outArgument5,
                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                             GALGAS_simpleStoredPropertyList & ioArgument1,
                                                             GALGAS_stringset & ioArgument2,
                                                             GALGAS_astDeclarationStruct & ioArgument3,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_astDeclarationStruct & ioArgument0,
                                             GALGAS_location & outArgument1,
                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_astDeclarationStruct & ioArgument0,
                                                   GALGAS_location & outArgument1
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_astDeclarationStruct & ioArgument0,
                                                     GALGAS_location & outArgument1
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
  public : virtual void nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_toMany_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                    GALGAS_stringset & ioArgument1,
                                                    GALGAS_astDeclarationStruct & ioArgument2,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public : virtual void nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_toOne_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                   GALGAS_astDeclarationStruct & ioArgument1,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_transient_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                      const GALGAS_lstring inArgument1,
                                                      GALGAS_astDeclarationStruct & ioArgument2,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_view_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_view_5F_declaration_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_view_5F_instruction_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_view_5F_instruction_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_view_5F_instruction_5F_list_ (GALGAS_astViewInstructionList & ioArgument0,
                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
  public : virtual void nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_xcode_5F_project_ (GALGAS_lstring & ioArgument0,
                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

  public : virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_61 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_62 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_63 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_64 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_65 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_66 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_67 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_68 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_69 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_70 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_71 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_72 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_73 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_74 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_75 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_76 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_77 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_78 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_79 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_80 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_81 (C_Lexique_easyBindings_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassBindingSpecificationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassBindingSpecificationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewClassBindingSpecificationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutViewClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOutletClassName,
                                                  const class GALGAS_lstring & in_mBindingName,
                                                  const class GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                  const class GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewClassBindingSpecificationList extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewClassBindingSpecificationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewClassBindingSpecificationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                                      const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                      const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewClassBindingSpecificationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                      const class GALGAS_controllerBindingOptionList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewClassBindingSpecificationList add_operation (const GALGAS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_outletClassBindingSpecificationModelList constinArgument2,
                                                       class GALGAS_controllerBindingOptionList constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                  class GALGAS_controllerBindingOptionList & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GALGAS_controllerBindingOptionList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                       class GALGAS_controllerBindingOptionList & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GALGAS_controllerBindingOptionList constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GALGAS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                             class GALGAS_uint constinArgument1,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                               class GALGAS_controllerBindingOptionList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GALGAS_controllerBindingOptionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewClassBindingSpecificationList ;
 
} ; // End of GALGAS_autoLayoutViewClassBindingSpecificationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewClassBindingSpecificationList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutViewClassBindingSpecificationList (const GALGAS_autoLayoutViewClassBindingSpecificationList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public : class GALGAS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingOptionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_bindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_bindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOptionName,
                                                  const class GALGAS_abstractDefaultValue & in_mOptionValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingOptionList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bindingOptionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_bindingOptionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_abstractDefaultValue & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_bindingOptionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractDefaultValue & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_bindingOptionList add_operation (const GALGAS_bindingOptionList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_bindingOptionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_abstractDefaultValue constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_abstractDefaultValue & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_abstractDefaultValue & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_abstractDefaultValue & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionValueAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_abstractDefaultValue & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractDefaultValue & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mOptionValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bindingOptionList ;
 
} ; // End of GALGAS_bindingOptionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_bindingOptionList : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingOptionList (const GALGAS_bindingOptionList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controllerBindingOptionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controllerBindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controllerBindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOptionName,
                                                  const class GALGAS_lstring & in_mOptionTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controllerBindingOptionList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controllerBindingOptionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controllerBindingOptionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controllerBindingOptionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controllerBindingOptionList add_operation (const GALGAS_controllerBindingOptionList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_controllerBindingOptionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controllerBindingOptionList ;
 
} ; // End of GALGAS_controllerBindingOptionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controllerBindingOptionList : public cGenericAbstractEnumerator {
  public : cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controllerBindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_declarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_declarationListAST constructor_listWithValue (const class GALGAS_abstractDeclarationAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDeclarationAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_declarationListAST add_operation (const GALGAS_declarationListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_declarationListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDeclarationAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDeclarationAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDeclarationAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDeclarationAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyDeclarationAtIndex (class GALGAS_abstractDeclarationAST constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDeclarationAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDeclarationAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDeclarationAST getter_mPropertyDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_declarationListAST ;
 
} ; // End of GALGAS_declarationListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_declarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractDeclarationAST current_mPropertyDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationFunctionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationFunctionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumerationFunctionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumerationFunctionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEnumName,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS__32_lstringlist & in_mAssociationList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationFunctionListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationFunctionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_enumerationFunctionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS__32_lstringlist & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumerationFunctionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS__32_lstringlist & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumerationFunctionListAST add_operation (const GALGAS_enumerationFunctionListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_enumerationFunctionListAST_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS__32_lstringlist constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS__32_lstringlist & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS__32_lstringlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS__32_lstringlist & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAssociationListAtIndex (class GALGAS__32_lstringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnumNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS__32_lstringlist & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS__32_lstringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mAssociationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumerationFunctionListAST ;
 
} ; // End of GALGAS_enumerationFunctionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumerationFunctionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_enumerationFunctionListAST (const GALGAS_enumerationFunctionListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS__32_lstringlist current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumerationFunctionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftFunctionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftFunctionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externSwiftFunctionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mExternSwiftFunctionName,
                                                  const class GALGAS_lstring & in_mCallerName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externSwiftFunctionList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externSwiftFunctionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externSwiftFunctionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externSwiftFunctionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftFunctionList add_operation (const GALGAS_externSwiftFunctionList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externSwiftFunctionList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCallerNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCallerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternSwiftFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externSwiftFunctionList ;
 
} ; // End of GALGAS_externSwiftFunctionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externSwiftFunctionList : public cGenericAbstractEnumerator {
  public : cEnumerator_externSwiftFunctionList (const GALGAS_externSwiftFunctionList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExternSwiftFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mCallerName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externSwiftFunctionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibDescriptorList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mainXibDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mainXibDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_mainXibLineDescriptorList & in_mLine
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mainXibDescriptorList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mainXibDescriptorList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_mainXibDescriptorList constructor_listWithValue (const class GALGAS_mainXibLineDescriptorList & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_mainXibDescriptorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mainXibLineDescriptorList & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mainXibDescriptorList add_operation (const GALGAS_mainXibDescriptorList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_mainXibDescriptorList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_mainXibLineDescriptorList constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLineAtIndex (class GALGAS_mainXibLineDescriptorList constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_mLineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mainXibDescriptorList ;
 
} ; // End of GALGAS_mainXibDescriptorList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_mainXibDescriptorList : public cGenericAbstractEnumerator {
  public : cEnumerator_mainXibDescriptorList (const GALGAS_mainXibDescriptorList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_mainXibLineDescriptorList current_mLine (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mainXibDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibLineDescriptorList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibLineDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mainXibLineDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_mainXibElement & in_mElement
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mainXibLineDescriptorList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mainXibLineDescriptorList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_mainXibLineDescriptorList constructor_listWithValue (const class GALGAS_mainXibElement & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mainXibElement & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mainXibLineDescriptorList add_operation (const GALGAS_mainXibLineDescriptorList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_mainXibLineDescriptorList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_mainXibElement constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_mainXibElement & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_mainXibElement & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_mainXibElement & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_mainXibElement constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_mainXibElement & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_mainXibElement & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibElement getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibLineDescriptorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mainXibLineDescriptorList ;
 
} ; // End of GALGAS_mainXibLineDescriptorList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_mainXibLineDescriptorList : public cGenericAbstractEnumerator {
  public : cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_mainXibElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mainXibLineDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOutletClassName,
                                                  const class GALGAS_lstring & in_mBindingName,
                                                  const class GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                  const class GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassBindingSpecificationList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassBindingSpecificationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_outletClassBindingSpecificationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                              const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletClassBindingSpecificationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                      const class GALGAS_controllerBindingOptionList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationList add_operation (const GALGAS_outletClassBindingSpecificationList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletClassBindingSpecificationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_outletClassBindingSpecificationModelList constinArgument2,
                                                       class GALGAS_controllerBindingOptionList constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                  class GALGAS_controllerBindingOptionList & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GALGAS_controllerBindingOptionList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                                       class GALGAS_controllerBindingOptionList & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GALGAS_controllerBindingOptionList constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GALGAS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                             class GALGAS_uint constinArgument1,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                               class GALGAS_controllerBindingOptionList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GALGAS_controllerBindingOptionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassBindingSpecificationList ;
 
} ; // End of GALGAS_outletClassBindingSpecificationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletClassBindingSpecificationList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public : class GALGAS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassBindingSpecificationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationModelList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationModelList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mModelTypeName,
                                                  const class GALGAS_bool & in_mModelShouldBeWritableProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassBindingSpecificationModelList extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassBindingSpecificationModelList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_outletClassBindingSpecificationModelList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassBindingSpecificationModelList add_operation (const GALGAS_outletClassBindingSpecificationModelList & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletClassBindingSpecificationModelList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelShouldBeWritablePropertyAtIndex (class GALGAS_bool constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassBindingSpecificationModelList ;
 
} ; // End of GALGAS_outletClassBindingSpecificationModelList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletClassBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mModelTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassBindingSpecificationModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefDeclaration struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;

  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;

  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;

  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;

  public : GALGAS_stringset mProperty_mSignatureList ;

  public : GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_prefDeclaration (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_prefDeclaration (void) ;

//--------------------------------- Native constructor
  public : GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                   const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                   const GALGAS_lstringlist & in_mActionDeclarationList,
                                   const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                   const GALGAS_stringset & in_mSignatureList,
                                   const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefDeclaration extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefDeclaration constructor_new (const class GALGAS_outletDeclarationList & inOperand0,
                                                                const class GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const class GALGAS_lstringlist & inOperand2,
                                                                const class GALGAS_externSwiftFunctionList & inOperand3,
                                                                const class GALGAS_stringset & inOperand4,
                                                                const class GALGAS_mainXibDescriptorList & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astDeclarationStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_declarationListAST mProperty_mUnifiedDeclarationList ;

  public : GALGAS_outletClassBindingSpecificationList mProperty_mBindingSpecificationListMap ;

  public : GALGAS_autoLayoutViewClassBindingSpecificationList mProperty_mAutoLayoutBindingSpecificationList ;

  public : GALGAS_prefDeclaration mProperty_mPreferences ;

  public : GALGAS_lstring mProperty_mXcodeProject ;

  public : GALGAS_lstringlist mProperty_mGraphvizList ;

  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;

  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;

  public : GALGAS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astDeclarationStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astDeclarationStruct (const GALGAS_declarationListAST & in_mUnifiedDeclarationList,
                                        const GALGAS_outletClassBindingSpecificationList & in_mBindingSpecificationListMap,
                                        const GALGAS_autoLayoutViewClassBindingSpecificationList & in_mAutoLayoutBindingSpecificationList,
                                        const GALGAS_prefDeclaration & in_mPreferences,
                                        const GALGAS_lstring & in_mXcodeProject,
                                        const GALGAS_lstringlist & in_mGraphvizList,
                                        const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                        const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                        const GALGAS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationStruct extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astDeclarationStruct constructor_new (const class GALGAS_declarationListAST & inOperand0,
                                                                     const class GALGAS_outletClassBindingSpecificationList & inOperand1,
                                                                     const class GALGAS_autoLayoutViewClassBindingSpecificationList & inOperand2,
                                                                     const class GALGAS_prefDeclaration & inOperand3,
                                                                     const class GALGAS_lstring & inOperand4,
                                                                     const class GALGAS_lstringlist & inOperand5,
                                                                     const class GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                                     const class GALGAS_astAutoLayoutViewFunctionMap & inOperand7,
                                                                     const class GALGAS_enumerationFunctionListAST & inOperand8
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astDeclarationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_mAutoLayoutBindingSpecificationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutHStackFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutVStackFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_mBindingSpecificationListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_mEnumerationFunctionListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGraphvizList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefDeclaration getter_mPreferences (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_mUnifiedDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mXcodeProject (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewColumnBindingAST struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewColumnBindingAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mRunActionName ;

  public : GALGAS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;

  public : GALGAS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;

  public : GALGAS_regularBindingList mProperty_mRegularBindingList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_tableViewColumnBindingAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_tableViewColumnBindingAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tableViewColumnBindingAST (const GALGAS_lstring & in_mRunActionName,
                                             const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                             const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                             const GALGAS_regularBindingList & in_mRegularBindingList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewColumnBindingAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewColumnBindingAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_multipleBindingDescriptor & inOperand1,
                                                                          const class GALGAS_multipleBindingDescriptor & inOperand2,
                                                                          const class GALGAS_regularBindingList & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewColumnBindingAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_mRegularBindingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRunActionName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewColumnBindingAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewColumnBindingAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractDeclarationAST mProperty_mPropertyDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declarationListAST_2D_element constructor_new (const class GALGAS_abstractDeclarationAST & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDeclarationAST getter_mPropertyDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declarationListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassBindingSpecificationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassBindingSpecificationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mOutletClassName ;

  public : GALGAS_lstring mProperty_mBindingName ;

  public : GALGAS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;

  public : GALGAS_controllerBindingOptionList mProperty_mBindingOptionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassBindingSpecificationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_lstring & in_mOutletClassName,
                                                                  const GALGAS_lstring & in_mBindingName,
                                                                  const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                  const GALGAS_controllerBindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassBindingSpecificationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassBindingSpecificationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                               const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassBindingSpecificationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassBindingSpecificationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mOutletClassName ;

  public : GALGAS_lstring mProperty_mBindingName ;

  public : GALGAS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;

  public : GALGAS_controllerBindingOptionList mProperty_mBindingOptionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (const GALGAS_lstring & in_mOutletClassName,
                                                                          const GALGAS_lstring & in_mBindingName,
                                                                          const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                          const GALGAS_controllerBindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                                       const class GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                       const class GALGAS_controllerBindingOptionList & inOperand3
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionList getter_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_autoLayoutClassParameterList mProperty_mFomalParameterList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astAutoLayoutViewFunctionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutViewFunctionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_astAutoLayoutViewFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astAutoLayoutViewFunctionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutViewFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutViewFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_autoLayoutClassParameterList & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astAutoLayoutViewFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mFomalParameterList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationFunctionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationFunctionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mEnumName ;

  public : GALGAS_lstring mProperty_mFunctionName ;

  public : GALGAS__32_lstringlist mProperty_mAssociationList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationFunctionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumerationFunctionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_enumerationFunctionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumerationFunctionListAST_2D_element (const GALGAS_lstring & in_mEnumName,
                                                         const GALGAS_lstring & in_mFunctionName,
                                                         const GALGAS__32_lstringlist & in_mAssociationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationFunctionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationFunctionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS__32_lstringlist & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationFunctionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mAssociationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationFunctionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_classMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_classMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_classMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_classMap (const GALGAS_classMap & inSource) ;
  public : GALGAS_classMap & operator = (const GALGAS_classMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classMap extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_classMap constructor_mapWithMapToOverride (const class GALGAS_classMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_classKind & inOperand1,
                                                      const class GALGAS_propertyMap & inOperand2,
                                                      const class GALGAS_actionMap & inOperand3,
                                                      const class GALGAS_propertyGenerationList & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_classKind constinArgument1,
                                                   class GALGAS_propertyMap constinArgument2,
                                                   class GALGAS_actionMap constinArgument3,
                                                   class GALGAS_propertyGenerationList constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMClassKindForKey (class GALGAS_classKind constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationListForKey (class GALGAS_propertyGenerationList constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyMapForKey (class GALGAS_propertyMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_classKind & outArgument1,
                                                   class GALGAS_propertyMap & outArgument2,
                                                   class GALGAS_actionMap & outArgument3,
                                                   class GALGAS_propertyGenerationList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classKind getter_mClassKindForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyGenerationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mPropertyMapForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classMap getter_overriddenMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_classKind & outOperand1,
                                                     class GALGAS_propertyMap & outOperand2,
                                                     class GALGAS_actionMap & outOperand3,
                                                     class GALGAS_propertyGenerationList & outOperand4) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_classMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_classMap ;
 
} ; // End of GALGAS_classMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_classMap : public cGenericAbstractEnumerator {
  public : cEnumerator_classMap (const GALGAS_classMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_classKind current_mClassKind (LOCATION_ARGS) const ;
  public : class GALGAS_propertyMap current_mPropertyMap (LOCATION_ARGS) const ;
  public : class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public : class GALGAS_propertyGenerationList current_mPropertyGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_classMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @classKind enum                                              *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_classKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_prefs,
    kEnum_atomic,
    kEnum_document,
    kEnum_entity
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classKind extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classKind constructor_atomic (const class GALGAS_typeKind & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_classKind constructor_document (const class GALGAS_lstring & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_classKind constructor_entity (const class GALGAS_string & inOperand0,
                                                             const class GALGAS_bool & inOperand1,
                                                             const class GALGAS_bool & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_classKind constructor_prefs (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_atomic (class GALGAS_typeKind & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_document (class GALGAS_lstring & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_entity (class GALGAS_string & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAtomic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDocument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefs (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_propertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_propertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_propertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyGenerationList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_propertyGenerationList constructor_listWithValue (const class GALGAS_propertyGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_propertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList add_operation (const GALGAS_propertyGenerationList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_propertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_propertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_propertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_propertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_propertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_propertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_propertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_propertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_propertyGenerationList ;
 
} ; // End of GALGAS_propertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_propertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_propertyGenerationList (const GALGAS_propertyGenerationList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_propertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_actionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_actionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_actionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_actionMap (const GALGAS_actionMap & inSource) ;
  public : GALGAS_actionMap & operator = (const GALGAS_actionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actionMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_actionMap constructor_mapWithMapToOverride (const class GALGAS_actionMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_actionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_actionMap ;
 
} ; // End of GALGAS_actionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_actionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_propertyMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_propertyMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_propertyMap (const GALGAS_propertyMap & inSource) ;
  public : GALGAS_propertyMap & operator = (const GALGAS_propertyMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_propertyMap constructor_mapWithMapToOverride (const class GALGAS_propertyMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_propertyKind & inOperand1,
                                                      const class GALGAS_actionMap & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_propertyKind constinArgument1,
                                                   class GALGAS_actionMap constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsOverridingForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GALGAS_propertyKind constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_propertyKind & outArgument1,
                                                   class GALGAS_actionMap & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverridingForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_propertyKind & outOperand1,
                                                     class GALGAS_actionMap & outOperand2,
                                                     class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_propertyMap ;
 
} ; // End of GALGAS_propertyMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_propertyMap : public cGenericAbstractEnumerator {
  public : cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsOverriding (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@classMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_classMap : public cMapElement {
//--- Map attributes
  public : GALGAS_classKind mProperty_mClassKind ;
  public : GALGAS_propertyMap mProperty_mPropertyMap ;
  public : GALGAS_actionMap mProperty_mActionMap ;
  public : GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;

//--- Constructor
  public : cMapElement_classMap (const GALGAS_lstring & inKey,
                                 const GALGAS_classKind & in_mClassKind,
                                 const GALGAS_propertyMap & in_mPropertyMap,
                                 const GALGAS_actionMap & in_mActionMap,
                                 const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_classKind mProperty_mClassKind ;

  public : GALGAS_propertyMap mProperty_mPropertyMap ;

  public : GALGAS_actionMap mProperty_mActionMap ;

  public : GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_classMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_classMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_classMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_classKind & in_mClassKind,
                                       const GALGAS_propertyMap & in_mPropertyMap,
                                       const GALGAS_actionMap & in_mActionMap,
                                       const GALGAS_propertyGenerationList & in_mPropertyGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_classKind & inOperand1,
                                                                    const class GALGAS_propertyMap & inOperand2,
                                                                    const class GALGAS_actionMap & inOperand3,
                                                                    const class GALGAS_propertyGenerationList & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classKind getter_mClassKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mPropertyMap (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletClassMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_outletClassMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_outletClassMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_outletClassMap (const GALGAS_outletClassMap & inSource) ;
  public : GALGAS_outletClassMap & operator = (const GALGAS_outletClassMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_outletClassMap constructor_mapWithMapToOverride (const class GALGAS_outletClassMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_bool & inOperand5,
                                                      const class GALGAS_bool & inOperand6,
                                                      const class GALGAS_bool & inOperand7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   class GALGAS_bool constinArgument4,
                                                   class GALGAS_bool constinArgument5,
                                                   class GALGAS_bool constinArgument6,
                                                   class GALGAS_bool constinArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GALGAS_bool constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GALGAS_bool constinArgument0,
                                                                                  class GALGAS_string constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GALGAS_bool constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GALGAS_bool constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_bool & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   class GALGAS_bool & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleEnabledBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleGraphicControllerBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleHiddenBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesRunActionForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefinedForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_lstring & outOperand1,
                                                     class GALGAS_bool & outOperand2,
                                                     class GALGAS_bool & outOperand3,
                                                     class GALGAS_bool & outOperand4,
                                                     class GALGAS_bool & outOperand5,
                                                     class GALGAS_bool & outOperand6,
                                                     class GALGAS_bool & outOperand7) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_outletClassMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_outletClassMap ;
 
} ; // End of GALGAS_outletClassMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletClassMap : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassMap (const GALGAS_outletClassMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mUserDefined (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@outletClassMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletClassMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mProperty_mSuperClassName ;
  public : GALGAS_bool mProperty_mHandlesRunAction ;
  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public : GALGAS_bool mProperty_mHandleEnabledBinding ;
  public : GALGAS_bool mProperty_mHandleHiddenBinding ;
  public : GALGAS_bool mProperty_mHandleGraphicControllerBinding ;
  public : GALGAS_bool mProperty_mUserDefined ;

//--- Constructor
  public : cMapElement_outletClassMap (const GALGAS_lstring & inKey,
                                       const GALGAS_lstring & in_mSuperClassName,
                                       const GALGAS_bool & in_mHandlesRunAction,
                                       const GALGAS_bool & in_mHandlesTableValueBinding,
                                       const GALGAS_bool & in_mHandleEnabledBinding,
                                       const GALGAS_bool & in_mHandleHiddenBinding,
                                       const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                       const GALGAS_bool & in_mUserDefined
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_lstring mProperty_mSuperClassName ;

  public : GALGAS_bool mProperty_mHandlesRunAction ;

  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;

  public : GALGAS_bool mProperty_mHandleEnabledBinding ;

  public : GALGAS_bool mProperty_mHandleHiddenBinding ;

  public : GALGAS_bool mProperty_mHandleGraphicControllerBinding ;

  public : GALGAS_bool mProperty_mUserDefined ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletClassMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletClassMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_lstring & in_mSuperClassName,
                                             const GALGAS_bool & in_mHandlesRunAction,
                                             const GALGAS_bool & in_mHandlesTableValueBinding,
                                             const GALGAS_bool & in_mHandleEnabledBinding,
                                             const GALGAS_bool & in_mHandleHiddenBinding,
                                             const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                             const GALGAS_bool & in_mUserDefined) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_bool & inOperand3,
                                                                          const class GALGAS_bool & inOperand4,
                                                                          const class GALGAS_bool & inOperand5,
                                                                          const class GALGAS_bool & inOperand6,
                                                                          const class GALGAS_bool & inOperand7
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleEnabledBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleHiddenBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_bindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inSource) ;
  public : GALGAS_bindingSpecificationMap & operator = (const GALGAS_bindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_bindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_bindingSpecificationMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_outletBindingSpecificationMap & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_outletBindingSpecificationMap constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_outletBindingSpecificationMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GALGAS_outletBindingSpecificationMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_outletBindingSpecificationMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap getter_mBindingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_lstring & outOperand1,
                                                     class GALGAS_outletBindingSpecificationMap & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_bindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bindingSpecificationMap ;
 
} ; // End of GALGAS_bindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_bindingSpecificationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public : class GALGAS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inSource) ;
  public : GALGAS_outletBindingSpecificationMap & operator = (const GALGAS_outletBindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_outletBindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_outletBindingSpecificationMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                      const class GALGAS_controllerBindingOptionDecoratedList & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationModelList constinArgument1,
                                                   class GALGAS_controllerBindingOptionDecoratedList constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GALGAS_controllerBindingOptionDecoratedList constinArgument0,
                                                                               class GALGAS_string constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GALGAS_outletBindingSpecificationModelList constinArgument0,
                                                                                       class GALGAS_string constinArgument1,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationModelList & outArgument1,
                                                   class GALGAS_controllerBindingOptionDecoratedList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_outletBindingSpecificationModelList & outOperand1,
                                                     class GALGAS_controllerBindingOptionDecoratedList & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_outletBindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_outletBindingSpecificationMap ;
 
} ; // End of GALGAS_outletBindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingSpecificationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public : class GALGAS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletBindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@bindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_bindingSpecificationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mProperty_mOutletSuperClassName ;
  public : GALGAS_outletBindingSpecificationMap mProperty_mBindingMap ;

//--- Constructor
  public : cMapElement_bindingSpecificationMap (const GALGAS_lstring & inKey,
                                                const GALGAS_lstring & in_mOutletSuperClassName,
                                                const GALGAS_outletBindingSpecificationMap & in_mBindingMap
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_lstring mProperty_mOutletSuperClassName ;

  public : GALGAS_outletBindingSpecificationMap mProperty_mBindingMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_bindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_lstring & in_mOutletSuperClassName,
                                                      const GALGAS_outletBindingSpecificationMap & in_mBindingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_outletBindingSpecificationMap & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap getter_mBindingMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletSuperClassName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingSpecificationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autolayoutViewClassMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autolayoutViewClassMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autolayoutViewClassMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autolayoutViewClassMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_autolayoutViewClassMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_autolayoutViewClassMap (const GALGAS_autolayoutViewClassMap & inSource) ;
  public : GALGAS_autolayoutViewClassMap & operator = (const GALGAS_autolayoutViewClassMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autolayoutViewClassMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autolayoutViewClassMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_autolayoutViewClassMap constructor_mapWithMapToOverride (const class GALGAS_autolayoutViewClassMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_bool & inOperand5,
                                                      const class GALGAS_bool & inOperand6,
                                                      const class GALGAS_bool & inOperand7,
                                                      const class GALGAS_autoLayoutClassParameterList & inOperand8,
                                                      const class GALGAS_astAutoLayoutViewFunctionMap & inOperand9,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   class GALGAS_bool constinArgument4,
                                                   class GALGAS_bool constinArgument5,
                                                   class GALGAS_bool constinArgument6,
                                                   class GALGAS_bool constinArgument7,
                                                   class GALGAS_autoLayoutClassParameterList constinArgument8,
                                                   class GALGAS_astAutoLayoutViewFunctionMap constinArgument9,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMapForKey (class GALGAS_astAutoLayoutViewFunctionMap constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GALGAS_bool constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandleGraphicControllerBindingForKey (class GALGAS_bool constinArgument0,
                                                                                  class GALGAS_string constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandleHiddenBindingForKey (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesRunActionForKey (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBindingForKey (class GALGAS_bool constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterListForKey (class GALGAS_autoLayoutClassParameterList constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GALGAS_bool constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_bool & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   class GALGAS_bool & outArgument7,
                                                   class GALGAS_autoLayoutClassParameterList & outArgument8,
                                                   class GALGAS_astAutoLayoutViewFunctionMap & outArgument9,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleEnabledBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleGraphicControllerBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleHiddenBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesRunActionForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefinedForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autolayoutViewClassMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_lstring & outOperand1,
                                                     class GALGAS_bool & outOperand2,
                                                     class GALGAS_bool & outOperand3,
                                                     class GALGAS_bool & outOperand4,
                                                     class GALGAS_bool & outOperand5,
                                                     class GALGAS_bool & outOperand6,
                                                     class GALGAS_bool & outOperand7,
                                                     class GALGAS_autoLayoutClassParameterList & outOperand8,
                                                     class GALGAS_astAutoLayoutViewFunctionMap & outOperand9) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_autolayoutViewClassMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autolayoutViewClassMap ;
 
} ; // End of GALGAS_autolayoutViewClassMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autolayoutViewClassMap : public cGenericAbstractEnumerator {
  public : cEnumerator_autolayoutViewClassMap (const GALGAS_autolayoutViewClassMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public : class GALGAS_autoLayoutClassParameterList current_mParameterList (LOCATION_ARGS) const ;
  public : class GALGAS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autolayoutViewClassMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autolayoutViewClassMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autolayoutViewClassMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mProperty_mSuperClassName ;
  public : GALGAS_bool mProperty_mHandlesRunAction ;
  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public : GALGAS_bool mProperty_mHandleEnabledBinding ;
  public : GALGAS_bool mProperty_mHandleHiddenBinding ;
  public : GALGAS_bool mProperty_mHandleGraphicControllerBinding ;
  public : GALGAS_bool mProperty_mUserDefined ;
  public : GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;
  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--- Constructor
  public : cMapElement_autolayoutViewClassMap (const GALGAS_lstring & inKey,
                                               const GALGAS_lstring & in_mSuperClassName,
                                               const GALGAS_bool & in_mHandlesRunAction,
                                               const GALGAS_bool & in_mHandlesTableValueBinding,
                                               const GALGAS_bool & in_mHandleEnabledBinding,
                                               const GALGAS_bool & in_mHandleHiddenBinding,
                                               const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                               const GALGAS_bool & in_mUserDefined,
                                               const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                               const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autolayoutViewClassMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autolayoutViewClassMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_lstring mProperty_mSuperClassName ;

  public : GALGAS_bool mProperty_mHandlesRunAction ;

  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;

  public : GALGAS_bool mProperty_mHandleEnabledBinding ;

  public : GALGAS_bool mProperty_mHandleHiddenBinding ;

  public : GALGAS_bool mProperty_mHandleGraphicControllerBinding ;

  public : GALGAS_bool mProperty_mUserDefined ;

  public : GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;

  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autolayoutViewClassMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autolayoutViewClassMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autolayoutViewClassMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autolayoutViewClassMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_lstring & in_mSuperClassName,
                                                     const GALGAS_bool & in_mHandlesRunAction,
                                                     const GALGAS_bool & in_mHandlesTableValueBinding,
                                                     const GALGAS_bool & in_mHandleEnabledBinding,
                                                     const GALGAS_bool & in_mHandleHiddenBinding,
                                                     const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                     const GALGAS_bool & in_mUserDefined,
                                                     const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                     const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autolayoutViewClassMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autolayoutViewClassMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_bool & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4,
                                                                                  const class GALGAS_bool & inOperand5,
                                                                                  const class GALGAS_bool & inOperand6,
                                                                                  const class GALGAS_bool & inOperand7,
                                                                                  const class GALGAS_autoLayoutClassParameterList & inOperand8,
                                                                                  const class GALGAS_astAutoLayoutViewFunctionMap & inOperand9
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autolayoutViewClassMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleEnabledBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleHiddenBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autolayoutViewClassMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutBindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutBindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_autoLayoutBindingSpecificationMap (const GALGAS_autoLayoutBindingSpecificationMap & inSource) ;
  public : GALGAS_autoLayoutBindingSpecificationMap & operator = (const GALGAS_autoLayoutBindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutBindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutBindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutBindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutBindingSpecificationMap & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_autoLayoutViewBindingSpecificationMap & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_autoLayoutViewBindingSpecificationMap constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GALGAS_autoLayoutViewBindingSpecificationMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletSuperClassNameForKey (class GALGAS_lstring constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewBindingSpecificationMap getter_mBindingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletSuperClassNameForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutBindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_lstring & outOperand1,
                                                     class GALGAS_autoLayoutViewBindingSpecificationMap & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_autoLayoutBindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutBindingSpecificationMap ;
 
} ; // End of GALGAS_autoLayoutBindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutBindingSpecificationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutBindingSpecificationMap (const GALGAS_autoLayoutBindingSpecificationMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public : class GALGAS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutBindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewBindingSpecificationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutViewBindingSpecificationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewBindingSpecificationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewBindingSpecificationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) ;
  public : GALGAS_autoLayoutViewBindingSpecificationMap & operator = (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewBindingSpecificationMap extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewBindingSpecificationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewBindingSpecificationMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutViewBindingSpecificationMap & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                      const class GALGAS_controllerBindingOptionDecoratedList & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationModelList constinArgument1,
                                                   class GALGAS_controllerBindingOptionDecoratedList constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControllerBindingOptionListForKey (class GALGAS_controllerBindingOptionDecoratedList constinArgument0,
                                                                               class GALGAS_string constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletBindingSpecificationModelListForKey (class GALGAS_outletBindingSpecificationModelList constinArgument0,
                                                                                       class GALGAS_string constinArgument1,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationModelList & outArgument1,
                                                   class GALGAS_controllerBindingOptionDecoratedList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewBindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_outletBindingSpecificationModelList & outOperand1,
                                                     class GALGAS_controllerBindingOptionDecoratedList & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_autoLayoutViewBindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewBindingSpecificationMap ;
 
} ; // End of GALGAS_autoLayoutViewBindingSpecificationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewBindingSpecificationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public : class GALGAS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutViewBindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutBindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mProperty_mOutletSuperClassName ;
  public : GALGAS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;

//--- Constructor
  public : cMapElement_autoLayoutBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_lstring & in_mOutletSuperClassName,
                                                          const GALGAS_autoLayoutViewBindingSpecificationMap & in_mBindingMap
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutBindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutBindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_lstring mProperty_mOutletSuperClassName ;

  public : GALGAS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutBindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutBindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                                const GALGAS_lstring & in_mOutletSuperClassName,
                                                                const GALGAS_autoLayoutViewBindingSpecificationMap & in_mBindingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutBindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_autoLayoutViewBindingSpecificationMap & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewBindingSpecificationMap getter_mBindingMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletSuperClassName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutBindingSpecificationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationPrecedenceGraph graph
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declarationPrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_declarationPrecedenceGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationPrecedenceGraph extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declarationPrecedenceGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                 class GALGAS_abstractDeclarationAST inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_declarationListAST & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_declarationListAST & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_declarationListAST & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_declarationListAST & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_declarationListAST & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                 const class GALGAS_stringset & constinOperand1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationPrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationPrecedenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                              const class GALGAS_stringset & constinOperand1,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declarationPrecedenceGraph class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftDelegateList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftDelegateList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mExternSwiftDelegateName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externSwiftDelegateList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externSwiftDelegateList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_externSwiftDelegateList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externSwiftDelegateList_2D_element (const GALGAS_lstring & in_mExternSwiftDelegateName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externSwiftDelegateList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externSwiftDelegateList_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externSwiftDelegateList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternSwiftDelegateName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externSwiftDelegateList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externSwiftFunctionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externSwiftFunctionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mExternSwiftFunctionName ;

  public : GALGAS_lstring mProperty_mCallerName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externSwiftFunctionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externSwiftFunctionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_externSwiftFunctionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externSwiftFunctionList_2D_element (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                      const GALGAS_lstring & in_mCallerName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externSwiftFunctionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externSwiftFunctionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externSwiftFunctionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCallerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternSwiftFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externSwiftFunctionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_externFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_externFunctionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_externFunctionMap (const GALGAS_externFunctionMap & inSource) ;
  public : GALGAS_externFunctionMap & operator = (const GALGAS_externFunctionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_externFunctionMap constructor_mapWithMapToOverride (const class GALGAS_externFunctionMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_externFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_externFunctionMap ;
 
} ; // End of GALGAS_externFunctionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externFunctionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_externFunctionMap (const GALGAS_externFunctionMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@externFunctionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_externFunctionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_externFunctionMap (const GALGAS_lstring & inKey
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externFunctionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externFunctionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_externFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externFunctionMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) ;
  public : GALGAS_enumConstantMap & operator = (const GALGAS_enumConstantMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_enumConstantMap constructor_mapWithMapToOverride (const class GALGAS_enumConstantMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumConstantMap ;
 
} ; // End of GALGAS_enumConstantMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@enumConstantMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public : cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFunAssociationSortedList sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFunAssociationSortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_enumFunAssociationSortedList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumFunAssociationSortedList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumFunAssociationSortedList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_enumFunAssociationSortedList constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                                             const class GALGAS_string & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumFunAssociationSortedList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_uint & outArgument0,
                                                     class GALGAS_string & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_uint & outArgument0,
                                                     class GALGAS_string & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumFunAssociationSortedList ;
 
} ; // End of GALGAS_enumFunAssociationSortedList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumFunAssociationSortedList : public cGenericAbstractEnumerator {
  public : cEnumerator_enumFunAssociationSortedList (const GALGAS_enumFunAssociationSortedList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mAssociatedString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumFunAssociationSortedList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFunAssociationSortedList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFunAssociationSortedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_uint mProperty_mIndex ;

  public : GALGAS_string mProperty_mAssociatedString ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumFunAssociationSortedList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumFunAssociationSortedList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_enumFunAssociationSortedList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumFunAssociationSortedList_2D_element (const GALGAS_uint & in_mIndex,
                                                           const GALGAS_string & in_mAssociatedString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumFunAssociationSortedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumFunAssociationSortedList_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                        const class GALGAS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumFunAssociationSortedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssociatedString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumFunAssociationSortedList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFuncMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumFuncMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_enumFuncMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFuncMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_enumFuncMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_enumFuncMap (const GALGAS_enumFuncMap & inSource) ;
  public : GALGAS_enumFuncMap & operator = (const GALGAS_enumFuncMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumFuncMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumFuncMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_enumFuncMap constructor_mapWithMapToOverride (const class GALGAS_enumFuncMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_enumFunAssociationSortedList & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_enumFunAssociationSortedList constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAssociationSortedListForKey (class GALGAS_enumFunAssociationSortedList constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_enumFunAssociationSortedList & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumFunAssociationSortedList getter_mAssociationSortedListForKey (const class GALGAS_string & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumFuncMap getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_enumFunAssociationSortedList & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_enumFuncMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumFuncMap ;
 
} ; // End of GALGAS_enumFuncMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumFuncMap : public cGenericAbstractEnumerator {
  public : cEnumerator_enumFuncMap (const GALGAS_enumFuncMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_enumFunAssociationSortedList current_mAssociationSortedList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumFuncMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@enumFuncMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_enumFuncMap : public cMapElement {
//--- Map attributes
  public : GALGAS_enumFunAssociationSortedList mProperty_mAssociationSortedList ;

//--- Constructor
  public : cMapElement_enumFuncMap (const GALGAS_lstring & inKey,
                                    const GALGAS_enumFunAssociationSortedList & in_mAssociationSortedList
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumFuncMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumFuncMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_enumFunAssociationSortedList mProperty_mAssociationSortedList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumFuncMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumFuncMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_enumFuncMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumFuncMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_enumFunAssociationSortedList & in_mAssociationSortedList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumFuncMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumFuncMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_enumFunAssociationSortedList & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumFuncMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumFunAssociationSortedList getter_mAssociationSortedList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumFuncMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractFileGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractFileGeneration (void) ;

//---
  public : inline const class cPtr_abstractFileGeneration * ptr (void) const { return (const cPtr_abstractFileGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractFileGeneration (const cPtr_abstractFileGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractFileGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractFileGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractFileGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @typeKind enum                                               *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_typeKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_boolType,
    kEnum_integerType,
    kEnum_uint_33__32_Type,
    kEnum_doubleType,
    kEnum_stringType,
    kEnum_dataType,
    kEnum_dateType,
    kEnum_fontType,
    kEnum_colorType,
    kEnum_bezierPathType,
    kEnum_bezierPathArrayType,
    kEnum_enumType,
    kEnum_entityType,
    kEnum_classType,
    kEnum_transientPropertyExternType
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeKind extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeKind constructor_bezierPathArrayType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_bezierPathType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_boolType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_classType (const class GALGAS_string & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_colorType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_dataType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_dateType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_doubleType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_entityType (const class GALGAS_string & inOperand0,
                                                                const class GALGAS_bool & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_enumType (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_enumConstantMap & inOperand1,
                                                              const class GALGAS_enumFuncMap & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_fontType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_integerType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_stringType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_transientPropertyExternType (const class GALGAS_string & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_uint_33__32_Type (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_classType (class GALGAS_string & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_entityType (class GALGAS_string & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_enumType (class GALGAS_string & outArgument0,
                                                  class GALGAS_enumConstantMap & outArgument1,
                                                  class GALGAS_enumFuncMap & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_transientPropertyExternType (class GALGAS_string & outArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBezierPathArrayType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBezierPathType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isColorType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDataType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDateType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDoubleType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFontType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIntegerType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStringType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientPropertyExternType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUint_33__32_Type (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @typeKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_enumType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_enumConstantMap mAssociatedValue1 ;
  public : const GALGAS_enumFuncMap mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_enumType (const GALGAS_string & inAssociatedValue0,
                                                    const GALGAS_enumConstantMap & inAssociatedValue1,
                                                    const GALGAS_enumFuncMap & inAssociatedValue2
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_enumType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_entityType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_entityType (const GALGAS_string & inAssociatedValue0,
                                                      const GALGAS_bool & inAssociatedValue1
                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_entityType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_classType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_classType (const GALGAS_string & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_classType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_transientPropertyExternType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_transientPropertyExternType (const GALGAS_string & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_transientPropertyExternType (void) {}
} ;

