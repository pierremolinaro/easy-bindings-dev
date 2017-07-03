#ifndef all_2D_declarations_2D__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           LEXIQUE easyBindings_5F_lexique                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    R O U T I N E S                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    F U N C T I O N S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                       T O K E N    C L A S S                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_easyBindings_5F_lexique : public cToken {
  public : double mLexicalAttribute_floatValue ;
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;

  public : cTokenFor_easyBindings_5F_lexique (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                     S C A N N E R    C L A S S                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

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
   kToken_bindingName,
   kToken_literal_5F_integer,
   kToken_literal_5F_double,
   kToken_literal_5F_string,
   kToken_comment,
   kToken_action,
   kToken_all,
   kToken_array,
   kToken_arrayController,
   kToken_binding,
   kToken_calledBy,
   kToken_class,
   kToken_classForSwift,
   kToken_column,
   kToken_customObjectController,
   kToken_default,
   kToken_dependsFrom,
   kToken_document,
   kToken_enum,
   kToken_entity,
   kToken_externDelegate,
   kToken_externFunc,
   kToken_filter,
   kToken_include,
   kToken_inverse,
   kToken_mainxib,
   kToken_no,
   kToken_outlet,
   kToken_outletClass,
   kToken_prefs,
   kToken_property,
   kToken_root,
   kToken_selectionController,
   kToken_self,
   kToken_signature,
   kToken_sort,
   kToken_struct,
   kToken_to,
   kToken_toMany,
   kToken_toOne,
   kToken_transient,
   kToken_validates,
   kToken_version,
   kToken_versionShouldChange,
   kToken_xcodeproject,
   kToken_yes,
   kToken_enabled,
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
   kToken__5E_} ;

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
  public : virtual int16_t terminalVocabularyCount (void) const { return 68 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'easyBindings_syntax' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_easyBindings_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_action_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_action_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_array_5F_controller_5F_declaration_ (class GALGAS_secondaryPropertyList & ioArgument0,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_array_5F_controller_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_ (class GALGAS_bindingOptionList & outArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_specification_ (const class GALGAS_bool constinArgument0,
                                                         class GALGAS_bindingSpecificationListMap & ioArgument1,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

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

  protected : virtual void nt_class_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                     class GALGAS_astDeclarationStruct & ioArgument1,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_column_5F_bindings_ (class GALGAS_columnBindingAST & outArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_column_5F_bindings_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                        class GALGAS_astDeclarationStruct & ioArgument1,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                      class GALGAS_astDeclarationStruct & ioArgument1,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                    class GALGAS_astDeclarationStruct & ioArgument1,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_ (class GALGAS_abstractDefaultValue & outArgument0,
                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_delegate_ (class GALGAS_externSwiftDelegateList & ioArgument0,
                                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_delegate_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_func_ (class GALGAS_externSwiftFunctionList & ioArgument0,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_func_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_ (class GALGAS_mainXibDescriptorList & ioArgument0,
                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_5F_line_ (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_5F_line_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_ (class GALGAS_observablePropertyAST & outArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                               class GALGAS_outletClassDeclarationList & ioArgument1,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_ (class GALGAS_outletDeclarationList & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_ (const class GALGAS_bool constinArgument0,
                                                           class GALGAS_astDeclarationStruct & ioArgument1,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_stored_5F_declaration_ (class GALGAS_simpleStoredPropertyList & ioArgument0,
                                                                class GALGAS_stringset & ioArgument1,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_stored_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (const class GALGAS_bool constinArgument0,
                                                class GALGAS_astDeclarationStruct & ioArgument1,
                                                class GALGAS_location & outArgument2,
                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_stored_5F_array_5F_declaration_ (class GALGAS_storedArrayPropertyList & ioArgument0,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_stored_5F_array_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toMany_5F_relationship_ (class GALGAS_toManyRelationshipList & ioArgument0,
                                                       class GALGAS_stringset & ioArgument1,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toMany_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toOne_5F_relationship_ (class GALGAS_toOneRelationshipList & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toOne_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_ (class GALGAS_secondaryPropertyList & ioArgument0,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_xcode_5F_project_ (class GALGAS_lstring & ioArgument0,
                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_xcode_5F_project_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (const GALGAS_bool constinArgument0,
                                                                    GALGAS_astDeclarationStruct & ioArgument1,
                                                                    GALGAS_location & outArgument2,
                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (const GALGAS_bool constinArgument0,
                                                                         GALGAS_astDeclarationStruct & ioArgument1,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i4_ (const GALGAS_bool constinArgument0,
                                                                         GALGAS_astDeclarationStruct & ioArgument1,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i5_ (const GALGAS_bool constinArgument0,
                                                                        GALGAS_astDeclarationStruct & ioArgument1,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_ (GALGAS_toManyRelationshipList & ioArgument0,
                                                                           GALGAS_stringset & ioArgument1,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_ (GALGAS_toOneRelationshipList & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i8_ (const GALGAS_bool constinArgument0,
                                                                         GALGAS_astDeclarationStruct & ioArgument1,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i9_ (const GALGAS_bool constinArgument0,
                                                                          GALGAS_astDeclarationStruct & ioArgument1,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i10_ (const GALGAS_bool constinArgument0,
                                                                             GALGAS_astDeclarationStruct & ioArgument1,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_ (const GALGAS_bool constinArgument0,
                                                                                GALGAS_astDeclarationStruct & ioArgument1,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_ (const GALGAS_bool constinArgument0,
                                                                                    GALGAS_outletClassDeclarationList & ioArgument1,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_specification_i13_ (const GALGAS_bool constinArgument0,
                                                                              GALGAS_bindingSpecificationListMap & ioArgument1,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_specification_i13_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_ (GALGAS_outletDeclarationList & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i15_ (GALGAS_observablePropertyAST & outArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i15_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i16_ (GALGAS_secondaryPropertyList & ioArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i17_ (GALGAS_simpleStoredPropertyList & ioArgument0,
                                                                                     GALGAS_stringset & ioArgument1,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_ (GALGAS_storedArrayPropertyList & ioArgument0,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i19_ (GALGAS_lstringlist & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i19_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_ (GALGAS_bindingOptionList & outArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i28_ (GALGAS_secondaryPropertyList & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i28_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_column_5F_bindings_i29_ (GALGAS_columnBindingAST & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_column_5F_bindings_i29_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i30_ (GALGAS_secondaryPropertyList & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_ (GALGAS_secondaryPropertyList & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i32_ (GALGAS_abstractDefaultValue & outArgument0,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i32_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_xcode_5F_project_i33_ (GALGAS_lstring & ioArgument0,
                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_xcode_5F_project_i33_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_i34_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_i34_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;



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


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @abstractBooleanMultipleBindingExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @abstractBooleanMultipleBindingExpressionAST class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @abstractDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @andBooleanMultipleBindingExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @andBooleanMultipleBindingExpressionAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @abstractSecondaryProperty class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractSecondaryProperty : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractSecondaryProperty (void) ;

//---
  public : inline const class cPtr_abstractSecondaryProperty * ptr (void) const { return (const cPtr_abstractSecondaryProperty *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractSecondaryProperty (const cPtr_abstractSecondaryProperty * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractSecondaryProperty extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractSecondaryProperty & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractSecondaryProperty class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSecondaryProperty ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @abstractSecondaryProperty class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractSecondaryProperty : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractSecondaryProperty (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @arrayControllerDeclaration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerDeclaration : public GALGAS_abstractSecondaryProperty {
//--- Constructor
  public : GALGAS_arrayControllerDeclaration (void) ;

//---
  public : inline const class cPtr_arrayControllerDeclaration * ptr (void) const { return (const cPtr_arrayControllerDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerDeclaration (const cPtr_arrayControllerDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerDeclaration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_arrayControllerModel & inOperand1,
                                                                           const class GALGAS_lstringlist & inOperand2,
                                                                           const class GALGAS_arrayControllerBoundColumnListAST & inOperand3,
                                                                           const class GALGAS_arrayControllerAttributListAST & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerAttributListAST getter_mArrayControllerAttributListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST getter_mArrayControllerBoundColumnListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerModel getter_mArrayControllerModel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilterProperties (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @arrayControllerModel enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerModel : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerModel (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_rootToManyRelationship,
    kEnum_selfCollection,
    kEnum_controllerArray
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
  public : static GALGAS_arrayControllerModel extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerModel constructor_controllerArray (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerModel constructor_rootToManyRelationship (const class GALGAS_lstring & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerModel constructor_selfCollection (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerModel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_controllerArray (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootToManyRelationship (class GALGAS_lstring & outArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfCollection (class GALGAS_lstring & outArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isControllerArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootToManyRelationship (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfCollection (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerModel class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerModel ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @arrayControllerModel enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_arrayControllerModel_selfCollection : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_arrayControllerModel_selfCollection (const GALGAS_lstring & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_arrayControllerModel_selfCollection (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_arrayControllerModel_controllerArray : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_arrayControllerModel_controllerArray (const GALGAS_lstring & inAssociatedValue0,
                                                                       const GALGAS_lstring & inAssociatedValue1
                                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_arrayControllerModel_controllerArray (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @arrayControllerAttributListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerAttributListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerAttributListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerAttributListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_abstractDefaultValue & in_mAttributeValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerAttributListAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerAttributListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerAttributListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_abstractDefaultValue & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_arrayControllerAttributListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractDefaultValue & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerAttributListAST add_operation (const GALGAS_arrayControllerAttributListAST & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
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

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerAttributListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerAttributListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerAttributListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerAttributListAST ;
 
} ; // End of GALGAS_arrayControllerAttributListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerAttributListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mAttributeValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerAttributListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerAttributListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @arrayControllerBoundColumnListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerBoundColumnListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBoundColumnListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mColumnName,
                                                  const class GALGAS_lstring & in_mColumnOutletTypeName,
                                                  const class GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                  const class GALGAS_lstring & in_mSortPropertyName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBoundColumnListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerBoundColumnListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerBoundColumnListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_columnBindingAST & inOperand2,
                                                                                            const class GALGAS_lstring & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_arrayControllerBoundColumnListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_columnBindingAST & inOperand2,
                                                      const class GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListAST add_operation (const GALGAS_arrayControllerBoundColumnListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_columnBindingAST constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_columnBindingAST & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_columnBindingAST & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_columnBindingAST & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_columnBindingAST & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_columnBindingAST & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_columnBindingAST getter_mColumnBindingASTAtIndex (const class GALGAS_uint & constinOperand0,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerBoundColumnListAST ;
 
} ; // End of GALGAS_arrayControllerBoundColumnListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerBoundColumnListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mColumnName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mColumnOutletTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_columnBindingAST current_mColumnBindingAST (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSortPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerBoundColumnListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @arrayControllerDeclaration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_arrayControllerDeclaration : public cPtr_abstractSecondaryProperty {
//--- Attributes
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_arrayControllerModel mProperty_mArrayControllerModel ;
  public : GALGAS_lstringlist mProperty_mFilterProperties ;
  public : GALGAS_arrayControllerBoundColumnListAST mProperty_mArrayControllerBoundColumnListAST ;
  public : GALGAS_arrayControllerAttributListAST mProperty_mArrayControllerAttributListAST ;

//--- Constructor
  public : cPtr_arrayControllerDeclaration (const GALGAS_lstring & in_mControllerName,
                                            const GALGAS_arrayControllerModel & in_mArrayControllerModel,
                                            const GALGAS_lstringlist & in_mFilterProperties,
                                            const GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST,
                                            const GALGAS_arrayControllerAttributListAST & in_mArrayControllerAttributListAST
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerModel getter_mArrayControllerModel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFilterProperties (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListAST getter_mArrayControllerBoundColumnListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerAttributListAST getter_mArrayControllerAttributListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @boolAsDefaultValue class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbool getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @boolAsDefaultValue class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @astDeclaration class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclaration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_astDeclaration (void) ;

//---
  public : inline const class cPtr_astDeclaration * ptr (void) const { return (const cPtr_astDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astDeclaration (const cPtr_astDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclaration extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @astDeclaration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_astDeclaration : public acPtr_class {
//--- Attributes
  public : GALGAS_bool mProperty_mUserDefined ;

//--- Constructor
  public : cPtr_astDeclaration (const GALGAS_bool & in_mUserDefined
                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @classDeclaration class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_classDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_classDeclaration * ptr (void) const { return (const cPtr_classDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_classDeclaration (const cPtr_classDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classDeclaration extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_simpleStoredPropertyList & inOperand2,
                                                                 const class GALGAS_secondaryPropertyList & inOperand3,
                                                                 const class GALGAS_externSwiftFunctionList & inOperand4,
                                                                 const class GALGAS_externSwiftDelegateList & inOperand5,
                                                                 const class GALGAS_lstringlist & inOperand6
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @externSwiftDelegateList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externSwiftDelegateList ;
 
} ; // End of GALGAS_externSwiftDelegateList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externSwiftDelegateList : public cGenericAbstractEnumerator {
  public : cEnumerator_externSwiftDelegateList (const GALGAS_externSwiftDelegateList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExternSwiftDelegateName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externSwiftDelegateList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @externSwiftFunctionList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externSwiftFunctionList ;
 
} ; // End of GALGAS_externSwiftFunctionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externSwiftFunctionList : public cGenericAbstractEnumerator {
  public : cEnumerator_externSwiftFunctionList (const GALGAS_externSwiftFunctionList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExternSwiftFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mCallerName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externSwiftFunctionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @secondaryPropertyList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_secondaryPropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_secondaryPropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_secondaryPropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractSecondaryProperty & in_mSecondaryProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_secondaryPropertyList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_secondaryPropertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_secondaryPropertyList constructor_listWithValue (const class GALGAS_abstractSecondaryProperty & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_secondaryPropertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractSecondaryProperty & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_secondaryPropertyList add_operation (const GALGAS_secondaryPropertyList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractSecondaryProperty constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractSecondaryProperty & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractSecondaryProperty & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractSecondaryProperty & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractSecondaryProperty & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractSecondaryProperty & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractSecondaryProperty getter_mSecondaryPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_secondaryPropertyList ;
 
} ; // End of GALGAS_secondaryPropertyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_secondaryPropertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_secondaryPropertyList (const GALGAS_secondaryPropertyList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractSecondaryProperty current_mSecondaryProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_secondaryPropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_secondaryPropertyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @simpleStoredPropertyList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_simpleStoredPropertyList ;
 
} ; // End of GALGAS_simpleStoredPropertyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @classDeclaration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_classDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mClassName ;
  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;
  public : GALGAS_secondaryPropertyList mProperty_mSecondaryPropertyList ;
  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public : GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;

//--- Constructor
  public : cPtr_classDeclaration (const GALGAS_bool & in_mUserDefined,
                                  const GALGAS_lstring & in_mClassName,
                                  const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                  const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                  const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                  const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                  const GALGAS_lstringlist & in_mActionDeclarationList
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @comparisonMultipleBindingExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @multipleBindingComparisonAST enum                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multipleBindingComparisonAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @comparisonMultipleBindingExpressionAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @customObjectControllerDeclaration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_customObjectControllerDeclaration : public GALGAS_abstractSecondaryProperty {
//--- Constructor
  public : GALGAS_customObjectControllerDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_customObjectControllerDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_customObjectControllerDeclaration * ptr (void) const { return (const cPtr_customObjectControllerDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_customObjectControllerDeclaration (const cPtr_customObjectControllerDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_customObjectControllerDeclaration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_customObjectControllerDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_customObjectControllerDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassNameForSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCustomObjectControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyEntityName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_customObjectControllerDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_customObjectControllerDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @customObjectControllerDeclaration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_customObjectControllerDeclaration : public cPtr_abstractSecondaryProperty {
//--- Attributes
  public : GALGAS_lstring mProperty_mCustomObjectControllerName ;
  public : GALGAS_lstring mProperty_mClassNameForSwift ;
  public : GALGAS_lstring mProperty_mPropertyEntityName ;

//--- Constructor
  public : cPtr_customObjectControllerDeclaration (const GALGAS_lstring & in_mCustomObjectControllerName,
                                                   const GALGAS_lstring & in_mClassNameForSwift,
                                                   const GALGAS_lstring & in_mPropertyEntityName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mCustomObjectControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mClassNameForSwift (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyEntityName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @documentDeclaration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_documentDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_documentDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_documentDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_documentDeclaration * ptr (void) const { return (const cPtr_documentDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_documentDeclaration (const cPtr_documentDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_documentDeclaration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_documentDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_outletDeclarationList & inOperand3,
                                                                    const class GALGAS_simpleStoredPropertyList & inOperand4,
                                                                    const class GALGAS_lstringlist & inOperand5,
                                                                    const class GALGAS_secondaryPropertyList & inOperand6
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_documentDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDocumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_documentDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_documentDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @outletDeclarationList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
                                                  const class GALGAS_regularBindingList & in_mRegularBindingList
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
                                                                                const class GALGAS_regularBindingList & inOperand6
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
                                                      const class GALGAS_regularBindingList & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_tableValueBinding constinArgument2,
                                                       class GALGAS_runActionDescriptor constinArgument3,
                                                       class GALGAS_multipleBindingDescriptor constinArgument4,
                                                       class GALGAS_multipleBindingDescriptor constinArgument5,
                                                       class GALGAS_regularBindingList constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_tableValueBinding & outArgument2,
                                                  class GALGAS_runActionDescriptor & outArgument3,
                                                  class GALGAS_multipleBindingDescriptor & outArgument4,
                                                  class GALGAS_multipleBindingDescriptor & outArgument5,
                                                  class GALGAS_regularBindingList & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_tableValueBinding & outArgument2,
                                                 class GALGAS_runActionDescriptor & outArgument3,
                                                 class GALGAS_multipleBindingDescriptor & outArgument4,
                                                 class GALGAS_multipleBindingDescriptor & outArgument5,
                                                 class GALGAS_regularBindingList & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_tableValueBinding & outArgument2,
                                                       class GALGAS_runActionDescriptor & outArgument3,
                                                       class GALGAS_multipleBindingDescriptor & outArgument4,
                                                       class GALGAS_multipleBindingDescriptor & outArgument5,
                                                       class GALGAS_regularBindingList & outArgument6,
                                                       class GALGAS_uint constinArgument7,
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
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_tableValueBinding & outArgument2,
                                              class GALGAS_runActionDescriptor & outArgument3,
                                              class GALGAS_multipleBindingDescriptor & outArgument4,
                                              class GALGAS_multipleBindingDescriptor & outArgument5,
                                              class GALGAS_regularBindingList & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptorAtIndex (const class GALGAS_uint & constinOperand0,
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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletDeclarationList ;
 
} ; // End of GALGAS_outletDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Current element access
  public : class GALGAS_outletDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @documentDeclaration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_documentDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mDocumentName ;
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public : GALGAS_secondaryPropertyList mProperty_mSecondaryPropertyList ;

//--- Constructor
  public : cPtr_documentDeclaration (const GALGAS_bool & in_mUserDefined,
                                     const GALGAS_lstring & in_mDocumentName,
                                     const GALGAS_lstring & in_mRootEntityName,
                                     const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                     const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                     const GALGAS_lstringlist & in_mActionDeclarationList,
                                     const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDocumentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @doubleAsDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_doubleAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @doubleAsDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @entityDeclaration class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_entityDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_entityDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_entityDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_entityDeclaration * ptr (void) const { return (const cPtr_entityDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_entityDeclaration (const cPtr_entityDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityDeclaration extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_entityDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_simpleStoredPropertyList & inOperand3,
                                                                  const class GALGAS_toOneRelationshipList & inOperand4,
                                                                  const class GALGAS_toManyRelationshipList & inOperand5,
                                                                  const class GALGAS_secondaryPropertyList & inOperand6,
                                                                  const class GALGAS_stringset & inOperand7,
                                                                  const class GALGAS_lstringlist & inOperand8
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_entityDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipList getter_mToManyRelationshipList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneRelationshipList getter_mToOneRelationshipList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @toManyRelationshipList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toManyRelationshipList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toManyRelationshipList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toManyRelationshipList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mDestinationEntityName,
                                                  const class GALGAS_lstring & in_mToManyRelationshipName,
                                                  const class GALGAS_lstring & in_mInverseRelationshipName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyRelationshipList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyRelationshipList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toManyRelationshipList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toManyRelationshipList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toManyRelationshipList add_operation (const GALGAS_toManyRelationshipList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInverseRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toManyRelationshipList ;
 
} ; // End of GALGAS_toManyRelationshipList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_toManyRelationshipList : public cGenericAbstractEnumerator {
  public : cEnumerator_toManyRelationshipList (const GALGAS_toManyRelationshipList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mDestinationEntityName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mToManyRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mInverseRelationshipName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toManyRelationshipList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @toOneRelationshipList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toOneRelationshipList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toOneRelationshipList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toOneRelationshipList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mDestinationEntityName,
                                                  const class GALGAS_lstring & in_mToOneRelationshipName,
                                                  const class GALGAS_lstring & in_mInverseRelationshipName,
                                                  const class GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOneRelationshipList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneRelationshipList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toOneRelationshipList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_propertyMultiplicity & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toOneRelationshipList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_propertyMultiplicity & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toOneRelationshipList add_operation (const GALGAS_toOneRelationshipList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_propertyMultiplicity constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_propertyMultiplicity & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_propertyMultiplicity & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_propertyMultiplicity & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_propertyMultiplicity & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_propertyMultiplicity & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMultiplicity getter_mInverseRelationMultiplicityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInverseRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneRelationshipList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneRelationshipList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneRelationshipList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toOneRelationshipList ;
 
} ; // End of GALGAS_toOneRelationshipList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_toOneRelationshipList : public cGenericAbstractEnumerator {
  public : cEnumerator_toOneRelationshipList (const GALGAS_toOneRelationshipList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mDestinationEntityName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mToOneRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mInverseRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_propertyMultiplicity current_mInverseRelationMultiplicity (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toOneRelationshipList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @entityDeclaration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_entityDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mEntityName ;
  public : GALGAS_lstring mProperty_mSuperEntityName ;
  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;
  public : GALGAS_toOneRelationshipList mProperty_mToOneRelationshipList ;
  public : GALGAS_toManyRelationshipList mProperty_mToManyRelationshipList ;
  public : GALGAS_secondaryPropertyList mProperty_mSecondaryPropertyList ;
  public : GALGAS_stringset mProperty_mSignatureList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;

//--- Constructor
  public : cPtr_entityDeclaration (const GALGAS_bool & in_mUserDefined,
                                   const GALGAS_lstring & in_mEntityName,
                                   const GALGAS_lstring & in_mSuperEntityName,
                                   const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                   const GALGAS_toOneRelationshipList & in_mToOneRelationshipList,
                                   const GALGAS_toManyRelationshipList & in_mToManyRelationshipList,
                                   const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                   const GALGAS_stringset & in_mSignatureList,
                                   const GALGAS_lstringlist & in_mActionDeclarationList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_toOneRelationshipList getter_mToOneRelationshipList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_toManyRelationshipList getter_mToManyRelationshipList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @enumDeclaration class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_enumDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumDeclaration * ptr (void) const { return (const cPtr_enumDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumDeclaration (const cPtr_enumDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumDeclaration extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_lstringlist & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @enumDeclaration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mEnumTypeName ;
  public : GALGAS_lstringlist mProperty_mEnumConstantNameList ;

//--- Constructor
  public : cPtr_enumDeclaration (const GALGAS_bool & in_mUserDefined,
                                 const GALGAS_lstring & in_mEnumTypeName,
                                 const GALGAS_lstringlist & in_mEnumConstantNameList
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @identifierAsDefaultValue class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_identifierAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @identifierAsDefaultValue class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @integerAsDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : static class GALGAS_integerAsDefaultValue constructor_new (const class GALGAS_luint & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @integerAsDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_luint mProperty_mValue ;

//--- Constructor
  public : cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @listAsDefaultValue class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_listAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_listAsDefaultValue * ptr (void) const { return (const cPtr_listAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_listAsDefaultValue (const cPtr_listAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_listAsDefaultValue constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_defaultValueList & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_defaultValueList getter_mDefaultValueList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mStartLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @defaultValueList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_defaultValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_defaultValueList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_defaultValueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractDefaultValue & in_mDefaultValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultValueList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_defaultValueList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_defaultValueList constructor_listWithValue (const class GALGAS_abstractDefaultValue & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_defaultValueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDefaultValue & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_defaultValueList add_operation (const GALGAS_defaultValueList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDefaultValue & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDefaultValue & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDefaultValue & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDefaultValue & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDefaultValue & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_defaultValueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_defaultValueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_defaultValueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_defaultValueList ;
 
} ; // End of GALGAS_defaultValueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_defaultValueList : public cGenericAbstractEnumerator {
  public : cEnumerator_defaultValueList (const GALGAS_defaultValueList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractDefaultValue current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_defaultValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultValueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @listAsDefaultValue class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_location mProperty_mStartLocation ;
  public : GALGAS_defaultValueList mProperty_mDefaultValueList ;

//--- Constructor
  public : cPtr_listAsDefaultValue (const GALGAS_location & in_mStartLocation,
                                    const GALGAS_defaultValueList & in_mDefaultValueList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mStartLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_defaultValueList getter_mDefaultValueList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @literalIntMultipleBindingExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @literalIntMultipleBindingExpressionAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @negateBooleanMultipleBindingExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @negateBooleanMultipleBindingExpressionAST class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @observablePropertyInMultipleBindingExpressionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyInMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @observablePropertyAST enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_observablePropertyAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_rootProperty,
    kEnum_rootPropertyWithOption,
    kEnum_rootPropertyRelationship,
    kEnum_selfProperty,
    kEnum_selfPropertyWithOption,
    kEnum_selfPropertyArray,
    kEnum_prefsProperty,
    kEnum_prefsPropertyWithOption,
    kEnum_controllerProperty,
    kEnum_controllerSecondaryProperty,
    kEnum_signatureProperty,
    kEnum_versionProperty,
    kEnum_versionShouldChangeProperty
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
  public : static class GALGAS_observablePropertyAST constructor_controllerProperty (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_controllerSecondaryProperty (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_prefsProperty (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_prefsPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootProperty (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyRelationship (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_rootPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfProperty (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyArray (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_selfPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyAST constructor_signatureProperty (const class GALGAS_location & inOperand0
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
  public : VIRTUAL_IN_DEBUG void method_controllerProperty (class GALGAS_lstring & outArgument0,
                                                            class GALGAS_lstring & outArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_controllerSecondaryProperty (class GALGAS_lstring & outArgument0,
                                                                     class GALGAS_lstring & outArgument1,
                                                                     class GALGAS_lstring & outArgument2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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

  public : VIRTUAL_IN_DEBUG void method_rootPropertyRelationship (class GALGAS_lstring & outArgument0,
                                                                  class GALGAS_lstring & outArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_rootPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfProperty (class GALGAS_lstring & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyArray (class GALGAS_lstring & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selfPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_signatureProperty (class GALGAS_location & outArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isControllerProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isControllerSecondaryProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyRelationship (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyWithOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSignatureProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionShouldChangeProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @observablePropertyAST enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_observablePropertyAST_controllerProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_controllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_controllerProperty (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @observablePropertyInMultipleBindingExpressionAST class                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @orBooleanMultipleBindingExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @orBooleanMultipleBindingExpressionAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @propertyClassDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyClassDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_propertyClassDeclaration (void) ;

//---
  public : inline const class cPtr_propertyClassDeclaration * ptr (void) const { return (const cPtr_propertyClassDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_propertyClassDeclaration (const cPtr_propertyClassDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyClassDeclaration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyClassDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_propertyClassDefaultValues & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyClassDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyClassDefaultValues getter_mDefaultValues (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyClassDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyClassDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @propertyClassDefaultValues enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyClassDefaultValues : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyClassDefaultValues (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_string
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
  public : static GALGAS_propertyClassDefaultValues extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyClassDefaultValues constructor_string (const class GALGAS_stringset & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyClassDefaultValues & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_string (class GALGAS_stringset & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyClassDefaultValues class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyClassDefaultValues ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @propertyClassDefaultValues enum, associated values                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_propertyClassDefaultValues_string : public cEnumAssociatedValues {
  public : const GALGAS_stringset mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyClassDefaultValues_string (const GALGAS_stringset & inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyClassDefaultValues_string (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @propertyClassDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_propertyClassDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mClassPropertyName ;
  public : GALGAS_propertyClassDefaultValues mProperty_mDefaultValues ;

//--- Constructor
  public : cPtr_propertyClassDeclaration (const GALGAS_bool & in_mUserDefined,
                                          const GALGAS_lstring & in_mClassPropertyName,
                                          const GALGAS_propertyClassDefaultValues & in_mDefaultValues
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mClassPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyClassDefaultValues getter_mDefaultValues (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @selectionControllerDeclaration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selectionControllerDeclaration : public GALGAS_abstractSecondaryProperty {
//--- Constructor
  public : GALGAS_selectionControllerDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectionControllerDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectionControllerDeclaration * ptr (void) const { return (const cPtr_selectionControllerDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectionControllerDeclaration (const cPtr_selectionControllerDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectionControllerDeclaration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectionControllerDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectionControllerDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @selectionControllerDeclaration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selectionControllerDeclaration : public cPtr_abstractSecondaryProperty {
//--- Attributes
  public : GALGAS_lstring mProperty_mSelectionControllerName ;
  public : GALGAS_lstring mProperty_mModelControllerName ;
  public : GALGAS_lstring mProperty_mModelControllerPropertyName ;

//--- Constructor
  public : cPtr_selectionControllerDeclaration (const GALGAS_lstring & in_mSelectionControllerName,
                                                const GALGAS_lstring & in_mModelControllerName,
                                                const GALGAS_lstring & in_mModelControllerPropertyName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @stringAsDefaultValue class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringAsDefaultValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @stringAsDefaultValue class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @transientAST class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientAST : public GALGAS_abstractSecondaryProperty {
//--- Constructor
  public : GALGAS_transientAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientAST * ptr (void) const { return (const cPtr_transientAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientAST (const cPtr_transientAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientAST extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_bool & inOperand1,
                                                             const class GALGAS_lstring & inOperand2,
                                                             const class GALGAS_observablePropertyList & inOperand3
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @observablePropertyList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_observablePropertyList ;
 
} ; // End of GALGAS_observablePropertyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_observablePropertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_observablePropertyList (const GALGAS_observablePropertyList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_observablePropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @transientAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientAST : public cPtr_abstractSecondaryProperty {
//--- Attributes
  public : GALGAS_lstring mProperty_mTransientTypeName ;
  public : GALGAS_bool mProperty_mIsArray ;
  public : GALGAS_lstring mProperty_mTransientName ;
  public : GALGAS_observablePropertyList mProperty_mDependencyList ;

//--- Constructor
  public : cPtr_transientAST (const GALGAS_lstring & in_mTransientTypeName,
                              const GALGAS_bool & in_mIsArray,
                              const GALGAS_lstring & in_mTransientName,
                              const GALGAS_observablePropertyList & in_mDependencyList
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsArray (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @transientPropertyClassDeclaration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientPropertyClassDeclaration : public GALGAS_astDeclaration {
//--- Constructor
  public : GALGAS_transientPropertyClassDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientPropertyClassDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientPropertyClassDeclaration * ptr (void) const { return (const cPtr_transientPropertyClassDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientPropertyClassDeclaration (const cPtr_transientPropertyClassDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPropertyClassDeclaration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientPropertyClassDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientPropertyClassDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientPropertyClassDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyClassDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @transientPropertyClassDeclaration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_transientPropertyClassDeclaration : public cPtr_astDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mClassPropertyName ;

//--- Constructor
  public : cPtr_transientPropertyClassDeclaration (const GALGAS_bool & in_mUserDefined,
                                                   const GALGAS_lstring & in_mClassPropertyName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mClassPropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @xorBooleanMultipleBindingExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @xorBooleanMultipleBindingExpressionAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionAST getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @mainXibElement enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibElement class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @mainXibElement enum, associated values                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @multipleBindingDescriptor enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multipleBindingDescriptor class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @multipleBindingDescriptor enum, associated values                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @propertyMultiplicity enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyMultiplicity : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyMultiplicity (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_single,
    kEnum_collection
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
  public : static GALGAS_propertyMultiplicity extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyMultiplicity constructor_collection (LOCATION_ARGS) ;

  public : static class GALGAS_propertyMultiplicity constructor_single (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyMultiplicity & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCollection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSingle (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyMultiplicity class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMultiplicity ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @runActionDescriptor enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_runActionDescriptor class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @runActionDescriptor enum, associated values                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @tableValueBinding enum                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableValueBinding class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableValueBinding ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @tableValueBinding enum, associated values                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR easyBindings_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_action_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'array_controller_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_array_5F_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_array_5F_controller_5F_declaration_ (GALGAS_secondaryPropertyList & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public : virtual void nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList & outArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_specification' non terminal
//--- 'parse' label
  public : virtual void nt_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_binding_5F_specification_ (const GALGAS_bool inArgument0,
                                                      GALGAS_bindingSpecificationListMap & ioArgument1,
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
  public : virtual void nt_class_5F_declaration_ (const GALGAS_bool inArgument0,
                                                  GALGAS_astDeclarationStruct & ioArgument1,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'column_bindings' non terminal
//--- 'parse' label
  public : virtual void nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_column_5F_bindings_ (GALGAS_columnBindingAST & outArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_document_5F_declaration_ (const GALGAS_bool inArgument0,
                                                     GALGAS_astDeclarationStruct & ioArgument1,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_entity_5F_declaration_ (const GALGAS_bool inArgument0,
                                                   GALGAS_astDeclarationStruct & ioArgument1,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_declaration_ (const GALGAS_bool inArgument0,
                                                 GALGAS_astDeclarationStruct & ioArgument1,
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

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_class_5F_declaration_ (const GALGAS_bool inArgument0,
                                                            GALGAS_outletClassDeclarationList & ioArgument1,
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
  public : virtual void nt_preferences_5F_declaration_ (const GALGAS_bool inArgument0,
                                                        GALGAS_astDeclarationStruct & ioArgument1,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_stored_5F_declaration_ (GALGAS_simpleStoredPropertyList & ioArgument0,
                                                             GALGAS_stringset & ioArgument1,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (const GALGAS_bool inArgument0,
                                             GALGAS_astDeclarationStruct & ioArgument1,
                                             GALGAS_location & outArgument2,
                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   const GALGAS_bool inArgument0,
                                                   GALGAS_astDeclarationStruct & ioArgument1,
                                                   GALGAS_location & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     const GALGAS_bool inArgument0,
                                                     GALGAS_astDeclarationStruct & ioArgument1,
                                                     GALGAS_location & outArgument2
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

//------------------------------------- 'stored_array_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_stored_5F_array_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_stored_5F_array_5F_declaration_ (GALGAS_storedArrayPropertyList & ioArgument0,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
  public : virtual void nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_toMany_5F_relationship_ (GALGAS_toManyRelationshipList & ioArgument0,
                                                    GALGAS_stringset & ioArgument1,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public : virtual void nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_toOne_5F_relationship_ (GALGAS_toOneRelationshipList & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_transient_5F_declaration_ (GALGAS_secondaryPropertyList & ioArgument0,
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
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @astDeclarationList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_astDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_astDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_astDeclaration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_astDeclarationList constructor_listWithValue (const class GALGAS_astDeclaration & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_astDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_astDeclaration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_astDeclarationList add_operation (const GALGAS_astDeclarationList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_astDeclaration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_astDeclaration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_astDeclaration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_astDeclaration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_astDeclaration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_astDeclaration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclaration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_astDeclarationList ;
 
} ; // End of GALGAS_astDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_astDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_astDeclarationList (const GALGAS_astDeclarationList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_astDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_astDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @bindingOptionList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bindingOptionList ;
 
} ; // End of GALGAS_bindingOptionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bindingOptionList : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingOptionList (const GALGAS_bindingOptionList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controllerBindingOptionList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controllerBindingOptionList ;
 
} ; // End of GALGAS_controllerBindingOptionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controllerBindingOptionList : public cGenericAbstractEnumerator {
  public : cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controllerBindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mainXibDescriptorList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mainXibDescriptorList ;
 
} ; // End of GALGAS_mainXibDescriptorList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mainXibDescriptorList : public cGenericAbstractEnumerator {
  public : cEnumerator_mainXibDescriptorList (const GALGAS_mainXibDescriptorList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_mainXibLineDescriptorList current_mLine (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mainXibDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @mainXibLineDescriptorList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mainXibLineDescriptorList ;
 
} ; // End of GALGAS_mainXibLineDescriptorList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mainXibLineDescriptorList : public cGenericAbstractEnumerator {
  public : cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_mainXibElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mainXibLineDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @outletClassBindingSpecificationModelList list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassBindingSpecificationModelList ;
 
} ; // End of GALGAS_outletClassBindingSpecificationModelList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletClassBindingSpecificationModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mModelTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassBindingSpecificationModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @outletClassDeclarationList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletClassDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletClassDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mUserDefined,
                                                  const class GALGAS_lstring & in_mOutletClassName,
                                                  const class GALGAS_bool & in_mHasRunAction,
                                                  const class GALGAS_bool & in_mHasEnabled,
                                                  const class GALGAS_bool & in_mHandlesTableValueBinding
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassDeclarationList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_outletClassDeclarationList constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletClassDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletClassDeclarationList add_operation (const GALGAS_outletClassDeclarationList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_bool constinArgument3,
                                                       class GALGAS_bool constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_bool & outArgument3,
                                                       class GALGAS_bool & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBindingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabledAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunActionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefinedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletClassDeclarationList ;
 
} ; // End of GALGAS_outletClassDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletClassDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassDeclarationList (const GALGAS_outletClassDeclarationList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasRunAction (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasEnabled (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @regularBindingList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_regularBindingList ;
 
} ; // End of GALGAS_regularBindingList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @storedArrayPropertyList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_storedArrayPropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_storedArrayPropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_storedArrayPropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mElementClassName,
                                                  const class GALGAS_lstring & in_mStoredArrayPropertyName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_storedArrayPropertyList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_storedArrayPropertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_storedArrayPropertyList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_storedArrayPropertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_storedArrayPropertyList add_operation (const GALGAS_storedArrayPropertyList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mElementClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStoredArrayPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_storedArrayPropertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_storedArrayPropertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_storedArrayPropertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_storedArrayPropertyList ;
 
} ; // End of GALGAS_storedArrayPropertyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_storedArrayPropertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_storedArrayPropertyList (const GALGAS_storedArrayPropertyList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mElementClassName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStoredArrayPropertyName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_storedArrayPropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storedArrayPropertyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bindingSpecificationListMap list map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bindingSpecificationListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationListMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bindingSpecificationListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                      const class GALGAS_controllerBindingOptionList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_listForKey (const class GALGAS_string & constinOperand0
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bindingSpecificationListMap ;
 
} ; // End of GALGAS_bindingSpecificationListMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bindingSpecificationListMap : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingSpecificationListMap (const GALGAS_bindingSpecificationListMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_outletClassBindingSpecificationList current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingSpecificationListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationListMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @arrayControllerForGeneration list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayControllerForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_arrayControllerForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOwnerName,
                                                  const class GALGAS_string & in_mControllerName,
                                                  const class GALGAS_arrayControllerFilterListForGeneration & in_mArrayControllerFilterListForGeneration,
                                                  const class GALGAS_string & in_mModelString,
                                                  const class GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration,
                                                  const class GALGAS_arrayControllerSortedColumnListForGeneration & in_mArrayControllerSortedColumnListForGeneration,
                                                  const class GALGAS_string & in_mModelTypeName,
                                                  const class GALGAS_string & in_mModelTypeName_32_,
                                                  const class GALGAS_arrayControllerModelKind & in_mModelKind,
                                                  const class GALGAS_string & in_mElementTypeName,
                                                  const class GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       const class GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                       const class GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                                       const class GALGAS_string & inOperand6,
                                                                                       const class GALGAS_string & inOperand7,
                                                                                       const class GALGAS_arrayControllerModelKind & inOperand8,
                                                                                       const class GALGAS_string & inOperand9,
                                                                                       const class GALGAS__32_stringlist & inOperand10
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_arrayControllerForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                      const class GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                      const class GALGAS_string & inOperand6,
                                                      const class GALGAS_string & inOperand7,
                                                      const class GALGAS_arrayControllerModelKind & inOperand8,
                                                      const class GALGAS_string & inOperand9,
                                                      const class GALGAS__32_stringlist & inOperand10
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerForGeneration add_operation (const GALGAS_arrayControllerForGeneration & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_arrayControllerFilterListForGeneration constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_arrayControllerBoundColumnListForGeneration constinArgument4,
                                                       class GALGAS_arrayControllerSortedColumnListForGeneration constinArgument5,
                                                       class GALGAS_string constinArgument6,
                                                       class GALGAS_string constinArgument7,
                                                       class GALGAS_arrayControllerModelKind constinArgument8,
                                                       class GALGAS_string constinArgument9,
                                                       class GALGAS__32_stringlist constinArgument10,
                                                       class GALGAS_uint constinArgument11,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_arrayControllerFilterListForGeneration & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument4,
                                                  class GALGAS_arrayControllerSortedColumnListForGeneration & outArgument5,
                                                  class GALGAS_string & outArgument6,
                                                  class GALGAS_string & outArgument7,
                                                  class GALGAS_arrayControllerModelKind & outArgument8,
                                                  class GALGAS_string & outArgument9,
                                                  class GALGAS__32_stringlist & outArgument10,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_arrayControllerFilterListForGeneration & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument4,
                                                 class GALGAS_arrayControllerSortedColumnListForGeneration & outArgument5,
                                                 class GALGAS_string & outArgument6,
                                                 class GALGAS_string & outArgument7,
                                                 class GALGAS_arrayControllerModelKind & outArgument8,
                                                 class GALGAS_string & outArgument9,
                                                 class GALGAS__32_stringlist & outArgument10,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_arrayControllerFilterListForGeneration & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument4,
                                                       class GALGAS_arrayControllerSortedColumnListForGeneration & outArgument5,
                                                       class GALGAS_string & outArgument6,
                                                       class GALGAS_string & outArgument7,
                                                       class GALGAS_arrayControllerModelKind & outArgument8,
                                                       class GALGAS_string & outArgument9,
                                                       class GALGAS__32_stringlist & outArgument10,
                                                       class GALGAS_uint constinArgument11,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_arrayControllerFilterListForGeneration & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument4,
                                               class GALGAS_arrayControllerSortedColumnListForGeneration & outArgument5,
                                               class GALGAS_string & outArgument6,
                                               class GALGAS_string & outArgument7,
                                               class GALGAS_arrayControllerModelKind & outArgument8,
                                               class GALGAS_string & outArgument9,
                                               class GALGAS__32_stringlist & outArgument10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_arrayControllerFilterListForGeneration & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_arrayControllerBoundColumnListForGeneration & outArgument4,
                                              class GALGAS_arrayControllerSortedColumnListForGeneration & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_string & outArgument7,
                                              class GALGAS_arrayControllerModelKind & outArgument8,
                                              class GALGAS_string & outArgument9,
                                              class GALGAS__32_stringlist & outArgument10,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListForGeneration getter_mArrayControllerBoundColumnListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                                 C_Compiler * inCompiler
                                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerFilterListForGeneration getter_mArrayControllerFilterListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerSortedColumnListForGeneration getter_mArrayControllerSortedColumnListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mAttributeListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerModelKind getter_mModelKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeName_32_AtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arrayControllerForGeneration ;
 
} ; // End of GALGAS_arrayControllerForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_arrayControllerForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_arrayControllerForGeneration (const GALGAS_arrayControllerForGeneration & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOwnerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerFilterListForGeneration current_mArrayControllerFilterListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mModelString (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerBoundColumnListForGeneration current_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerSortedColumnListForGeneration current_mArrayControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mModelTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mModelTypeName_32_ (LOCATION_ARGS) const ;
  public : class GALGAS_arrayControllerModelKind current_mModelKind (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mElementTypeName (LOCATION_ARGS) const ;
  public : class GALGAS__32_stringlist current_mAttributeListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_arrayControllerForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @prefDeclaration struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;

  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;

  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;

  public : GALGAS_secondaryPropertyList mProperty_mSecondaryPropertyList ;

  public : GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;

  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;

  public : GALGAS_storedArrayPropertyList mProperty_mStoredArrayList ;

  public : GALGAS_arrayControllerForGeneration mProperty_mArrayControllerForGeneration ;

  public : GALGAS_stringset mProperty_mSignatureList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_prefDeclaration (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_prefDeclaration (void) ;

//--------------------------------- Native constructor
  public : GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                   const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                   const GALGAS_lstringlist & in_mActionDeclarationList,
                                   const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                   const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                   const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                   const GALGAS_storedArrayPropertyList & in_mStoredArrayList,
                                   const GALGAS_arrayControllerForGeneration & in_mArrayControllerForGeneration,
                                   const GALGAS_stringset & in_mSignatureList) ;

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
                                                                const class GALGAS_secondaryPropertyList & inOperand3,
                                                                const class GALGAS_mainXibDescriptorList & inOperand4,
                                                                const class GALGAS_externSwiftFunctionList & inOperand5,
                                                                const class GALGAS_storedArrayPropertyList & inOperand6,
                                                                const class GALGAS_arrayControllerForGeneration & inOperand7,
                                                                const class GALGAS_stringset & inOperand8
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

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerForGeneration getter_mArrayControllerForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_storedArrayPropertyList getter_mStoredArrayList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @astDeclarationStruct struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_astDeclarationList mProperty_mDeclarationList ;

  public : GALGAS_outletClassDeclarationList mProperty_mOutletClassDeclarationList ;

  public : GALGAS_bindingSpecificationListMap mProperty_mBindingSpecificationListMap ;

  public : GALGAS_prefDeclaration mProperty_mPreferences ;

  public : GALGAS_lstring mProperty_mXcodeProject ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astDeclarationStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astDeclarationStruct (const GALGAS_astDeclarationList & in_mDeclarationList,
                                        const GALGAS_outletClassDeclarationList & in_mOutletClassDeclarationList,
                                        const GALGAS_bindingSpecificationListMap & in_mBindingSpecificationListMap,
                                        const GALGAS_prefDeclaration & in_mPreferences,
                                        const GALGAS_lstring & in_mXcodeProject) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationStruct extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astDeclarationStruct constructor_new (const class GALGAS_astDeclarationList & inOperand0,
                                                                     const class GALGAS_outletClassDeclarationList & inOperand1,
                                                                     const class GALGAS_bindingSpecificationListMap & inOperand2,
                                                                     const class GALGAS_prefDeclaration & inOperand3,
                                                                     const class GALGAS_lstring & inOperand4
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationListMap getter_mBindingSpecificationListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclarationList getter_mDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassDeclarationList getter_mOutletClassDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefDeclaration getter_mPreferences (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mXcodeProject (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @columnBindingAST struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_columnBindingAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mRunActionName ;

  public : GALGAS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;

  public : GALGAS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;

  public : GALGAS_regularBindingList mProperty_mRegularBindingList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_columnBindingAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_columnBindingAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_columnBindingAST (const GALGAS_lstring & in_mRunActionName,
                                    const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                    const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                    const GALGAS_regularBindingList & in_mRegularBindingList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_columnBindingAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_columnBindingAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_multipleBindingDescriptor & inOperand1,
                                                                 const class GALGAS_multipleBindingDescriptor & inOperand2,
                                                                 const class GALGAS_regularBindingList & inOperand3
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_columnBindingAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingList getter_mRegularBindingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRunActionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_columnBindingAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_columnBindingAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @astDeclarationList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_astDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_astDeclaration mProperty_mDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_astDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_astDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astDeclarationList_2D_element (const GALGAS_astDeclaration & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astDeclarationList_2D_element constructor_new (const class GALGAS_astDeclaration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclaration getter_mDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @outletClassDeclarationList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outletClassDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_bool mProperty_mUserDefined ;

  public : GALGAS_lstring mProperty_mOutletClassName ;

  public : GALGAS_bool mProperty_mHasRunAction ;

  public : GALGAS_bool mProperty_mHasEnabled ;

  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletClassDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_outletClassDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletClassDeclarationList_2D_element (const GALGAS_bool & in_mUserDefined,
                                                         const GALGAS_lstring & in_mOutletClassName,
                                                         const GALGAS_bool & in_mHasRunAction,
                                                         const GALGAS_bool & in_mHasEnabled,
                                                         const GALGAS_bool & in_mHandlesTableValueBinding) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassDeclarationList_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3,
                                                                                      const class GALGAS_bool & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutletClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @secondaryPropertyList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_secondaryPropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractSecondaryProperty mProperty_mSecondaryProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_secondaryPropertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_secondaryPropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_secondaryPropertyList_2D_element (const GALGAS_abstractSecondaryProperty & in_mSecondaryProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_secondaryPropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_secondaryPropertyList_2D_element constructor_new (const class GALGAS_abstractSecondaryProperty & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_secondaryPropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractSecondaryProperty getter_mSecondaryProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_secondaryPropertyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_secondaryPropertyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension method '@abstractSecondaryProperty typeInventory'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractSecondaryProperty_typeInventory) (const class cPtr_abstractSecondaryProperty * inObject,
                                                                                  class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_typeInventory (const int32_t inClassIndex,
                                         extensionMethodSignature_abstractSecondaryProperty_typeInventory inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_typeInventory (const class cPtr_abstractSecondaryProperty * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @typeKind enum                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_typeKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_boolType,
    kEnum_integerType,
    kEnum_doubleType,
    kEnum_stringType,
    kEnum_dateType,
    kEnum_fontType,
    kEnum_enumType,
    kEnum_entityType,
    kEnum_classType,
    kEnum_propertyClassType,
    kEnum_transientPropertyClassType
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
  public : static class GALGAS_typeKind constructor_boolType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_classType (const class GALGAS_string & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_dateType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_doubleType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_entityType (const class GALGAS_string & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_enumType (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_enumConstantMap & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_fontType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_integerType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_propertyClassType (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_propertyClassDefaultValues & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_stringType (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_transientPropertyClassType (const class GALGAS_string & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

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
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_enumType (class GALGAS_string & outArgument0,
                                                  class GALGAS_enumConstantMap & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_propertyClassType (class GALGAS_string & outArgument0,
                                                           class GALGAS_propertyClassDefaultValues & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_transientPropertyClassType (class GALGAS_string & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDateType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDoubleType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFontType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIntegerType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPropertyClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStringType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientPropertyClassType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @actionMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_actionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_actionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_actionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_actionMap ;
 
} ; // End of GALGAS_actionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_actionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap unique map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public : GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind constinArgument1,
                                                   class GALGAS_actionMap constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeKindForKey (class GALGAS_typeKind constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind & outArgument1,
                                                   class GALGAS_actionMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeKindForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_mTypeKind (LOCATION_ARGS) const ;
  public : class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_typeKind mProperty_mTypeKind ;
  public : GALGAS_actionMap mProperty_mActionMap ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_typeKind & in_mTypeKind,
                                       const GALGAS_actionMap & in_mActionMap
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract extension method '@abstractSecondaryProperty secondaryPropertySemanticAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis) (const class cPtr_abstractSecondaryProperty * inObject,
                                                                                                      const class GALGAS_string constinArgument0,
                                                                                                      const class GALGAS_string constinArgument1,
                                                                                                      const class GALGAS_observablePropertyMap constinArgument2,
                                                                                                      const class GALGAS_semanticContext constinArgument3,
                                                                                                      const class GALGAS_observablePropertyMap constinArgument4,
                                                                                                      class GALGAS_transientDefinitionListForGeneration & ioArgument5,
                                                                                                      class GALGAS_arrayControllerForGeneration & ioArgument6,
                                                                                                      class GALGAS_selectionControllerForGeneration & ioArgument7,
                                                                                                      class GALGAS_customObjectControllerForGeneration & ioArgument8,
                                                                                                      class GALGAS_stringset & ioArgument9,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_secondaryPropertySemanticAnalysis (const int32_t inClassIndex,
                                                             extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_secondaryPropertySemanticAnalysis (const class cPtr_abstractSecondaryProperty * inObject,
                                                            const GALGAS_string constin_inOwnerName,
                                                            const GALGAS_string constin_inRootEntityName,
                                                            const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                            const GALGAS_semanticContext constin_inSemanticContext,
                                                            const GALGAS_observablePropertyMap constin_inObservableProperties,
                                                            GALGAS_transientDefinitionListForGeneration & io_ioTransientDefinitionListForGeneration,
                                                            GALGAS_arrayControllerForGeneration & io_ioArrayControllerForGeneration,
                                                            GALGAS_selectionControllerForGeneration & io_ioSelectionControllerForGeneration,
                                                            GALGAS_customObjectControllerForGeneration & io_ioCustomObjectControllerDeclaration,
                                                            GALGAS_stringset & io_ioNeededOutletClasses,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @customObjectControllerForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_customObjectControllerForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_customObjectControllerForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_customObjectControllerForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOwnerName,
                                                  const class GALGAS_string & in_mCustomObjectControllerName,
                                                  const class GALGAS_string & in_mClassNameForSwift,
                                                  const class GALGAS_string & in_mEntityTypeName,
                                                  const class GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_customObjectControllerForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_customObjectControllerForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_customObjectControllerForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                              const class GALGAS_string & inOperand1,
                                                                                              const class GALGAS_string & inOperand2,
                                                                                              const class GALGAS_string & inOperand3,
                                                                                              const class GALGAS_observablePropertyMap & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_customObjectControllerForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_observablePropertyMap & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_customObjectControllerForGeneration add_operation (const GALGAS_customObjectControllerForGeneration & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_observablePropertyMap constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_observablePropertyMap & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_observablePropertyMap & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_observablePropertyMap & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_observablePropertyMap & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_observablePropertyMap & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassNameForSwiftAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCustomObjectControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEntityTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mSelectionObservablePropertyMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_customObjectControllerForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_customObjectControllerForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_customObjectControllerForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_customObjectControllerForGeneration ;
 
} ; // End of GALGAS_customObjectControllerForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_customObjectControllerForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_customObjectControllerForGeneration (const GALGAS_customObjectControllerForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOwnerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCustomObjectControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mClassNameForSwift (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mEntityTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_customObjectControllerForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_customObjectControllerForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @selectionControllerForGeneration list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selectionControllerForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_selectionControllerForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOwnerName,
                                                  const class GALGAS_string & in_mSelectionControllerName,
                                                  const class GALGAS_string & in_mBoundControllerName,
                                                  const class GALGAS_string & in_mBoundControllerPropertyName,
                                                  const class GALGAS_string & in_mSelectionTypeName,
                                                  const class GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectionControllerForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectionControllerForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_selectionControllerForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                           const class GALGAS_string & inOperand1,
                                                                                           const class GALGAS_string & inOperand2,
                                                                                           const class GALGAS_string & inOperand3,
                                                                                           const class GALGAS_string & inOperand4,
                                                                                           const class GALGAS_observablePropertyMap & inOperand5
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_selectionControllerForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      const class GALGAS_observablePropertyMap & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_selectionControllerForGeneration add_operation (const GALGAS_selectionControllerForGeneration & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_string constinArgument4,
                                                       class GALGAS_observablePropertyMap constinArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_string & outArgument4,
                                                  class GALGAS_observablePropertyMap & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 class GALGAS_observablePropertyMap & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_string & outArgument4,
                                                       class GALGAS_observablePropertyMap & outArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_string & outArgument4,
                                               class GALGAS_observablePropertyMap & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              class GALGAS_observablePropertyMap & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mSelectionObservablePropertyMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_selectionControllerForGeneration ;
 
} ; // End of GALGAS_selectionControllerForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_selectionControllerForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOwnerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSelectionControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBoundControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBoundControllerPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSelectionTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_selectionControllerForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @transientDefinitionListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDefinitionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientDefinitionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientDefinitionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOwnerName,
                                                  const class GALGAS_string & in_mTransientName,
                                                  const class GALGAS_bool & in_mIsArray,
                                                  const class GALGAS_typeKind & in_mTransientType,
                                                  const class GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDefinitionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientDefinitionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_transientDefinitionListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS_string & inOperand1,
                                                                                               const class GALGAS_bool & inOperand2,
                                                                                               const class GALGAS_typeKind & inOperand3,
                                                                                               const class GALGAS_transientDependencyListForGeneration & inOperand4
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientDefinitionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_typeKind & inOperand3,
                                                      const class GALGAS_transientDependencyListForGeneration & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDefinitionListForGeneration add_operation (const GALGAS_transientDefinitionListForGeneration & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_typeKind constinArgument3,
                                                       class GALGAS_transientDependencyListForGeneration constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_typeKind & outArgument3,
                                                  class GALGAS_transientDependencyListForGeneration & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_typeKind & outArgument3,
                                                 class GALGAS_transientDependencyListForGeneration & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_typeKind & outArgument3,
                                                       class GALGAS_transientDependencyListForGeneration & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_typeKind & outArgument3,
                                               class GALGAS_transientDependencyListForGeneration & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_typeKind & outArgument3,
                                              class GALGAS_transientDependencyListForGeneration & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsArrayAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTransientNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTransientTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientDefinitionListForGeneration ;
 
} ; // End of GALGAS_transientDefinitionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_transientDefinitionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_transientDefinitionListForGeneration (const GALGAS_transientDefinitionListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOwnerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTransientName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsArray (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_mTransientType (LOCATION_ARGS) const ;
  public : class GALGAS_transientDependencyListForGeneration current_mDependencyList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientDefinitionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDefinitionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @propertyKind enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_stored,
    kEnum_transient,
    kEnum_arrayController,
    kEnum_selectionController
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
  public : static GALGAS_propertyKind extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyKind constructor_arrayController (LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_selectionController (LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_stored (LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_transient (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayController (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectionController (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStored (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransient (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @observablePropertyMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_observablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_observablePropertyMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_observablePropertyMap_searchForInverseRelationship ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_observablePropertyMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_observablePropertyMap (const GALGAS_observablePropertyMap & inSource) ;
  public : GALGAS_observablePropertyMap & operator = (const GALGAS_observablePropertyMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_observablePropertyMap constructor_mapWithMapToOverride (const class GALGAS_observablePropertyMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_typeKind & inOperand1,
                                                      const class GALGAS_propertyKind & inOperand2,
                                                      const class GALGAS_propertyMultiplicity & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      const class GALGAS_actionMap & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind constinArgument1,
                                                   class GALGAS_propertyKind constinArgument2,
                                                   class GALGAS_propertyMultiplicity constinArgument3,
                                                   class GALGAS_string constinArgument4,
                                                   class GALGAS_actionMap constinArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInverseRelationshipNameForKey (class GALGAS_string constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GALGAS_propertyKind constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMultiplicityForKey (class GALGAS_propertyMultiplicity constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GALGAS_typeKind constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchForInverseRelationship (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_typeKind & outArgument1,
                                                                      class GALGAS_propertyKind & outArgument2,
                                                                      class GALGAS_propertyMultiplicity & outArgument3,
                                                                      class GALGAS_string & outArgument4,
                                                                      class GALGAS_actionMap & outArgument5,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind & outArgument1,
                                                   class GALGAS_propertyKind & outArgument2,
                                                   class GALGAS_propertyMultiplicity & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   class GALGAS_actionMap & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInverseRelationshipNameForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMultiplicity getter_mMultiplicityForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_observablePropertyMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_observablePropertyMap ;
 
} ; // End of GALGAS_observablePropertyMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_observablePropertyMap : public cGenericAbstractEnumerator {
  public : cEnumerator_observablePropertyMap (const GALGAS_observablePropertyMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_propertyMultiplicity current_mMultiplicity (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mInverseRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_observablePropertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@observablePropertyMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_observablePropertyMap : public cMapElement {
//--- Map attributes
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_propertyKind mProperty_mKind ;
  public : GALGAS_propertyMultiplicity mProperty_mMultiplicity ;
  public : GALGAS_string mProperty_mInverseRelationshipName ;
  public : GALGAS_actionMap mProperty_mActionMap ;

//--- Constructor
  public : cMapElement_observablePropertyMap (const GALGAS_lstring & inKey,
                                              const GALGAS_typeKind & in_mType,
                                              const GALGAS_propertyKind & in_mKind,
                                              const GALGAS_propertyMultiplicity & in_mMultiplicity,
                                              const GALGAS_string & in_mInverseRelationshipName,
                                              const GALGAS_actionMap & in_mActionMap
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bindingSpecificationMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_bindingSpecificationMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_bindingSpecificationMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

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
                                                      const class GALGAS_outletBindingSpecificationMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingMapForKey (class GALGAS_outletBindingSpecificationMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_outletBindingSpecificationMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationMap getter_mBindingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_bindingSpecificationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bindingSpecificationMap ;
 
} ; // End of GALGAS_bindingSpecificationMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bindingSpecificationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bindingSpecificationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @documentObservablePropertyMap map                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_documentObservablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_documentObservablePropertyMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_documentObservablePropertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_documentObservablePropertyMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_documentObservablePropertyMap (const GALGAS_documentObservablePropertyMap & inSource) ;
  public : GALGAS_documentObservablePropertyMap & operator = (const GALGAS_documentObservablePropertyMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_documentObservablePropertyMap extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_documentObservablePropertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_documentObservablePropertyMap constructor_mapWithMapToOverride (const class GALGAS_documentObservablePropertyMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_observablePropertyMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_observablePropertyMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservablePropertyMapForKey (class GALGAS_observablePropertyMap constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_observablePropertyMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mObservablePropertyMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_documentObservablePropertyMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_documentObservablePropertyMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_documentObservablePropertyMap ;
 
} ; // End of GALGAS_documentObservablePropertyMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_documentObservablePropertyMap : public cGenericAbstractEnumerator {
  public : cEnumerator_documentObservablePropertyMap (const GALGAS_documentObservablePropertyMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyMap current_mObservablePropertyMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_documentObservablePropertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_documentObservablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @entityObservablePropertyMap map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_entityObservablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_entityObservablePropertyMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_entityObservablePropertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_entityObservablePropertyMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_entityObservablePropertyMap (const GALGAS_entityObservablePropertyMap & inSource) ;
  public : GALGAS_entityObservablePropertyMap & operator = (const GALGAS_entityObservablePropertyMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityObservablePropertyMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_entityObservablePropertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_entityObservablePropertyMap constructor_mapWithMapToOverride (const class GALGAS_entityObservablePropertyMap & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_observablePropertyMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_observablePropertyMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservablePropertyMapForKey (class GALGAS_observablePropertyMap constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_observablePropertyMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mObservablePropertyMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityObservablePropertyMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_entityObservablePropertyMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_entityObservablePropertyMap ;
 
} ; // End of GALGAS_entityObservablePropertyMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_entityObservablePropertyMap : public cGenericAbstractEnumerator {
  public : cEnumerator_entityObservablePropertyMap (const GALGAS_entityObservablePropertyMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyMap current_mObservablePropertyMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_entityObservablePropertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityObservablePropertyMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @outletClassMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_outletClassMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_outletClassMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

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
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   class GALGAS_bool constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandleEnabledBindingForKey (class GALGAS_bool constinArgument0,
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

  public : VIRTUAL_IN_DEBUG void setter_setMUserDefinedForKey (class GALGAS_bool constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandleEnabledBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesRunActionForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBindingForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefinedForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_outletClassMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_outletClassMap ;
 
} ; // End of GALGAS_outletClassMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_outletClassMap : public cGenericAbstractEnumerator {
  public : cEnumerator_outletClassMap (const GALGAS_outletClassMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mUserDefined (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletClassMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_unifiedTypeMap mProperty_mUnifiedTypeMap ;

  public : GALGAS_outletClassMap mProperty_mOutletClassMap ;

  public : GALGAS_bindingSpecificationMap mProperty_mBindingSpecificationMap ;

  public : GALGAS_observablePropertyMap mProperty_mPreferencesObservablePropertyMap ;

  public : GALGAS_documentObservablePropertyMap mProperty_mDocumentObservablePropertyMap ;

  public : GALGAS_entityObservablePropertyMap mProperty_mEntityObservablePropertyMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_unifiedTypeMap & in_mUnifiedTypeMap,
                                   const GALGAS_outletClassMap & in_mOutletClassMap,
                                   const GALGAS_bindingSpecificationMap & in_mBindingSpecificationMap,
                                   const GALGAS_observablePropertyMap & in_mPreferencesObservablePropertyMap,
                                   const GALGAS_documentObservablePropertyMap & in_mDocumentObservablePropertyMap,
                                   const GALGAS_entityObservablePropertyMap & in_mEntityObservablePropertyMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticContext constructor_new (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                const class GALGAS_outletClassMap & inOperand1,
                                                                const class GALGAS_bindingSpecificationMap & inOperand2,
                                                                const class GALGAS_observablePropertyMap & inOperand3,
                                                                const class GALGAS_documentObservablePropertyMap & inOperand4,
                                                                const class GALGAS_entityObservablePropertyMap & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationMap getter_mBindingSpecificationMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_documentObservablePropertyMap getter_mDocumentObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_entityObservablePropertyMap getter_mEntityObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassMap getter_mOutletClassMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mPreferencesObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap getter_mUnifiedTypeMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @externSwiftDelegateList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externSwiftDelegateList_2D_element (void) ;

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externSwiftDelegateList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @externSwiftFunctionList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externSwiftFunctionList_2D_element (void) ;

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externSwiftFunctionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @externFunctionMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_externFunctionMap ;

//---------------------------------------------------------------------------------------------------------------------*

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_externFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_externFunctionMap ;
 
} ; // End of GALGAS_externFunctionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externFunctionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_externFunctionMap (const GALGAS_externFunctionMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@externFunctionMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @externFunctionMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externFunctionMap_2D_element (void) ;

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumConstantMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumConstantMap ;
 
} ; // End of GALGAS_enumConstantMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@enumConstantMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_enumConstantMap (const GALGAS_lstring & inKey
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @enumListForGeneration list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mEnumName,
                                                  const class GALGAS_lstringlist & in_mEnumConstantList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumListForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_enumListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumListForGeneration add_operation (const GALGAS_enumListForGeneration & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumListForGeneration ;
 
} ; // End of GALGAS_enumListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_enumListForGeneration (const GALGAS_enumListForGeneration & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mEnumName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mEnumConstantList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @enumListForGeneration_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mEnumName ;

  public : GALGAS_lstringlist mProperty_mEnumConstantList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumListForGeneration_2D_element (const GALGAS_string & in_mEnumName,
                                                    const GALGAS_lstringlist & in_mEnumConstantList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_lstringlist & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @toOneRelationshipList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toOneRelationshipList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mDestinationEntityName ;

  public : GALGAS_lstring mProperty_mToOneRelationshipName ;

  public : GALGAS_lstring mProperty_mInverseRelationshipName ;

  public : GALGAS_propertyMultiplicity mProperty_mInverseRelationMultiplicity ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_toOneRelationshipList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_toOneRelationshipList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toOneRelationshipList_2D_element (const GALGAS_lstring & in_mDestinationEntityName,
                                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                                    const GALGAS_lstring & in_mInverseRelationshipName,
                                                    const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOneRelationshipList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneRelationshipList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_propertyMultiplicity & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOneRelationshipList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMultiplicity getter_mInverseRelationMultiplicity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInverseRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneRelationshipList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @toManyRelationshipList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toManyRelationshipList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mDestinationEntityName ;

  public : GALGAS_lstring mProperty_mToManyRelationshipName ;

  public : GALGAS_lstring mProperty_mInverseRelationshipName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_toManyRelationshipList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_toManyRelationshipList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_toManyRelationshipList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toManyRelationshipList_2D_element (const GALGAS_lstring & in_mDestinationEntityName,
                                                     const GALGAS_lstring & in_mToManyRelationshipName,
                                                     const GALGAS_lstring & in_mInverseRelationshipName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyRelationshipList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyRelationshipList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyRelationshipList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInverseRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@toOneRelationshipList typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_typeInventory (const class GALGAS_toOneRelationshipList inObject,
                                    class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @unifiedTypeMap_2D_proxy map proxy                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_searchKey (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeOptionalProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                       COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_unifiedTypeMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMap (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeKind (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_proxy class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@toManyRelationshipList typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_typeInventory (const class GALGAS_toManyRelationshipList inObject,
                                    class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@toOneRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_buildObservablePropertyMap (const class GALGAS_toOneRelationshipList inObject,
                                                 const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                 class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @typeKind enum, associated values                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_enumType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_enumConstantMap mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_enumType (const GALGAS_string & inAssociatedValue0,
                                                    const GALGAS_enumConstantMap & inAssociatedValue1
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_enumType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_entityType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_entityType (const GALGAS_string & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_entityType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_propertyClassType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_propertyClassDefaultValues mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_propertyClassType (const GALGAS_string & inAssociatedValue0,
                                                             const GALGAS_propertyClassDefaultValues & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_propertyClassType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_transientPropertyClassType : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_transientPropertyClassType (const GALGAS_string & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_transientPropertyClassType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@actionMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_actionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_actionMap (const GALGAS_lstring & inKey
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@toManyRelationshipList buildObservablePropertyMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_buildObservablePropertyMap (const class GALGAS_toManyRelationshipList inObject,
                                                 const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                 class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@toOneRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const class GALGAS_toOneRelationshipList inObject,
                                       const class GALGAS_semanticContext constin_inSemanticContext,
                                       class GALGAS_toOneEntityRelationshipListForGeneration & out_outToOneEntityRelationshipListForGeneration,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @toOneEntityRelationshipListForGeneration list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toOneEntityRelationshipListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toOneEntityRelationshipListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toOneEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mToOneRelationshipName,
                                                  const class GALGAS_typeKind & in_mRelationshipType,
                                                  const class GALGAS_string & in_mOppositeRelationshipName,
                                                  const class GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                  const class GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOneEntityRelationshipListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneEntityRelationshipListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toOneEntityRelationshipListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                   const class GALGAS_typeKind & inOperand1,
                                                                                                   const class GALGAS_string & inOperand2,
                                                                                                   const class GALGAS_propertyMultiplicity & inOperand3,
                                                                                                   const class GALGAS_observablePropertyMap & inOperand4
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toOneEntityRelationshipListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_typeKind & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_propertyMultiplicity & inOperand3,
                                                      const class GALGAS_observablePropertyMap & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toOneEntityRelationshipListForGeneration add_operation (const GALGAS_toOneEntityRelationshipListForGeneration & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_typeKind constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_propertyMultiplicity constinArgument3,
                                                       class GALGAS_observablePropertyMap constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_typeKind & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_propertyMultiplicity & outArgument3,
                                                  class GALGAS_observablePropertyMap & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_typeKind & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_propertyMultiplicity & outArgument3,
                                                 class GALGAS_observablePropertyMap & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_typeKind & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_propertyMultiplicity & outArgument3,
                                                       class GALGAS_observablePropertyMap & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_typeKind & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_propertyMultiplicity & outArgument3,
                                               class GALGAS_observablePropertyMap & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_typeKind & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_propertyMultiplicity & outArgument3,
                                              class GALGAS_observablePropertyMap & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mDestinationEntityObservablePropertyMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMultiplicity getter_mInverseRelationMultiplicityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOppositeRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mRelationshipTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mToOneRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneEntityRelationshipListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneEntityRelationshipListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneEntityRelationshipListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toOneEntityRelationshipListForGeneration ;
 
} ; // End of GALGAS_toOneEntityRelationshipListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_toOneEntityRelationshipListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mToOneRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_mRelationshipType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOppositeRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_propertyMultiplicity current_mInverseRelationMultiplicity (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyMap current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toOneEntityRelationshipListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@entityObservablePropertyMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_entityObservablePropertyMap : public cMapElement {
//--- Map attributes
  public : GALGAS_observablePropertyMap mProperty_mObservablePropertyMap ;

//--- Constructor
  public : cMapElement_entityObservablePropertyMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_observablePropertyMap & in_mObservablePropertyMap
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@toManyRelationshipList semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const class GALGAS_toManyRelationshipList inObject,
                                       const class GALGAS_semanticContext constin_inSemanticContext,
                                       class GALGAS_toManyEntityRelationshipListForGeneration & out_outToManyEntityRelationshipListForGeneration,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @toManyEntityRelationshipListForGeneration list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toManyEntityRelationshipListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toManyEntityRelationshipListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toManyEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mToManyRelationshipName,
                                                  const class GALGAS_typeKind & in_mRelationshipType,
                                                  const class GALGAS_string & in_mOppositeRelationshipName,
                                                  const class GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyEntityRelationshipListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyEntityRelationshipListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toManyEntityRelationshipListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                    const class GALGAS_typeKind & inOperand1,
                                                                                                    const class GALGAS_string & inOperand2,
                                                                                                    const class GALGAS_observablePropertyMap & inOperand3
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toManyEntityRelationshipListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_typeKind & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_observablePropertyMap & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toManyEntityRelationshipListForGeneration add_operation (const GALGAS_toManyEntityRelationshipListForGeneration & inOperand,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_typeKind constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_observablePropertyMap constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_typeKind & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_observablePropertyMap & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_typeKind & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_observablePropertyMap & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_typeKind & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_observablePropertyMap & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_typeKind & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_observablePropertyMap & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_typeKind & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_observablePropertyMap & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mDestinationEntityObservablePropertyMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOppositeRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mRelationshipTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mToManyRelationshipNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyEntityRelationshipListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyEntityRelationshipListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyEntityRelationshipListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toManyEntityRelationshipListForGeneration ;
 
} ; // End of GALGAS_toManyEntityRelationshipListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_toManyEntityRelationshipListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mToManyRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_mRelationshipType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOppositeRelationshipName (LOCATION_ARGS) const ;
  public : class GALGAS_observablePropertyMap current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toManyEntityRelationshipListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @toOneEntityRelationshipListForGeneration_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toOneEntityRelationshipListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mToOneRelationshipName ;

  public : GALGAS_typeKind mProperty_mRelationshipType ;

  public : GALGAS_string mProperty_mOppositeRelationshipName ;

  public : GALGAS_propertyMultiplicity mProperty_mInverseRelationMultiplicity ;

  public : GALGAS_observablePropertyMap mProperty_mDestinationEntityObservablePropertyMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toOneEntityRelationshipListForGeneration_2D_element (const GALGAS_string & in_mToOneRelationshipName,
                                                                       const GALGAS_typeKind & in_mRelationshipType,
                                                                       const GALGAS_string & in_mOppositeRelationshipName,
                                                                       const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                       const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOneEntityRelationshipListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneEntityRelationshipListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                    const class GALGAS_typeKind & inOperand1,
                                                                                                    const class GALGAS_string & inOperand2,
                                                                                                    const class GALGAS_propertyMultiplicity & inOperand3,
                                                                                                    const class GALGAS_observablePropertyMap & inOperand4
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMultiplicity getter_mInverseRelationMultiplicity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOppositeRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mRelationshipType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mToOneRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneEntityRelationshipListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @observablePropertyMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_typeKind mProperty_mType ;

  public : GALGAS_propertyKind mProperty_mKind ;

  public : GALGAS_propertyMultiplicity mProperty_mMultiplicity ;

  public : GALGAS_string mProperty_mInverseRelationshipName ;

  public : GALGAS_actionMap mProperty_mActionMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_observablePropertyMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_observablePropertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_observablePropertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_typeKind & in_mType,
                                                    const GALGAS_propertyKind & in_mKind,
                                                    const GALGAS_propertyMultiplicity & in_mMultiplicity,
                                                    const GALGAS_string & in_mInverseRelationshipName,
                                                    const GALGAS_actionMap & in_mActionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_typeKind & inOperand1,
                                                                                 const class GALGAS_propertyKind & inOperand2,
                                                                                 const class GALGAS_propertyMultiplicity & inOperand3,
                                                                                 const class GALGAS_string & inOperand4,
                                                                                 const class GALGAS_actionMap & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInverseRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMultiplicity getter_mMultiplicity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @toManyEntityRelationshipListForGeneration_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_toManyEntityRelationshipListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mToManyRelationshipName ;

  public : GALGAS_typeKind mProperty_mRelationshipType ;

  public : GALGAS_string mProperty_mOppositeRelationshipName ;

  public : GALGAS_observablePropertyMap mProperty_mDestinationEntityObservablePropertyMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toManyEntityRelationshipListForGeneration_2D_element (const GALGAS_string & in_mToManyRelationshipName,
                                                                        const GALGAS_typeKind & in_mRelationshipType,
                                                                        const GALGAS_string & in_mOppositeRelationshipName,
                                                                        const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyEntityRelationshipListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyEntityRelationshipListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                     const class GALGAS_typeKind & inOperand1,
                                                                                                     const class GALGAS_string & inOperand2,
                                                                                                     const class GALGAS_observablePropertyMap & inOperand3
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOppositeRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mRelationshipType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mToManyRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyEntityRelationshipListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @simpleStoredPropertyList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_simpleStoredPropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mPropertyTypeName ;

  public : GALGAS_lstring mProperty_mPropertyName ;

  public : GALGAS_abstractDefaultValue mProperty_mDefaultValue ;

  public : GALGAS_bool mProperty_mNeedsValidation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_simpleStoredPropertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_simpleStoredPropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_simpleStoredPropertyList_2D_element (const GALGAS_lstring & in_mPropertyTypeName,
                                                       const GALGAS_lstring & in_mPropertyName,
                                                       const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                       const GALGAS_bool & in_mNeedsValidation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_simpleStoredPropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_simpleStoredPropertyList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_abstractDefaultValue & inOperand2,
                                                                                    const class GALGAS_bool & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_simpleStoredPropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_simpleStoredPropertyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @classListForGeneration list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_classListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_classListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mClassName,
                                                  const class GALGAS_simpleStoredPropertyListForGeneration & in_mSimpleStoredPropertyListForGeneration,
                                                  const class GALGAS_transientDefinitionListForGeneration & in_mTransientListForGeneration,
                                                  const class GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                  const class GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classListForGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_classListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                 const class GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                 const class GALGAS_externSwiftFunctionList & inOperand3,
                                                                                 const class GALGAS_externSwiftDelegateList & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_classListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                      const class GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                      const class GALGAS_externSwiftFunctionList & inOperand3,
                                                      const class GALGAS_externSwiftDelegateList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_classListForGeneration add_operation (const GALGAS_classListForGeneration & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_simpleStoredPropertyListForGeneration constinArgument1,
                                                       class GALGAS_transientDefinitionListForGeneration constinArgument2,
                                                       class GALGAS_externSwiftFunctionList constinArgument3,
                                                       class GALGAS_externSwiftDelegateList constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_simpleStoredPropertyListForGeneration & outArgument1,
                                                  class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                  class GALGAS_externSwiftFunctionList & outArgument3,
                                                  class GALGAS_externSwiftDelegateList & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_simpleStoredPropertyListForGeneration & outArgument1,
                                                 class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                 class GALGAS_externSwiftFunctionList & outArgument3,
                                                 class GALGAS_externSwiftDelegateList & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_simpleStoredPropertyListForGeneration & outArgument1,
                                                       class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                                       class GALGAS_externSwiftFunctionList & outArgument3,
                                                       class GALGAS_externSwiftDelegateList & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_simpleStoredPropertyListForGeneration & outArgument1,
                                               class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                               class GALGAS_externSwiftFunctionList & outArgument3,
                                               class GALGAS_externSwiftDelegateList & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_simpleStoredPropertyListForGeneration & outArgument1,
                                              class GALGAS_transientDefinitionListForGeneration & outArgument2,
                                              class GALGAS_externSwiftFunctionList & outArgument3,
                                              class GALGAS_externSwiftDelegateList & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyListForGeneration getter_mSimpleStoredPropertyListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_mTransientListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_classListForGeneration ;
 
} ; // End of GALGAS_classListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_classListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_classListForGeneration (const GALGAS_classListForGeneration & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mClassName (LOCATION_ARGS) const ;
  public : class GALGAS_simpleStoredPropertyListForGeneration current_mSimpleStoredPropertyListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_transientDefinitionListForGeneration current_mTransientListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_externSwiftFunctionList current_mExternSwiftFunctionList (LOCATION_ARGS) const ;
  public : class GALGAS_externSwiftDelegateList current_mExternSwiftDelegateList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_classListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @simpleStoredPropertyListForGeneration list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_simpleStoredPropertyListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_simpleStoredPropertyListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_simpleStoredPropertyListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_typeKind & in_mType,
                                                  const class GALGAS_string & in_mStoredPropertyName,
                                                  const class GALGAS_string & in_mDefaultValueInSwift,
                                                  const class GALGAS_bool & in_mNeedsValidation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_simpleStoredPropertyListForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_simpleStoredPropertyListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_simpleStoredPropertyListForGeneration constructor_listWithValue (const class GALGAS_typeKind & inOperand0,
                                                                                                const class GALGAS_string & inOperand1,
                                                                                                const class GALGAS_string & inOperand2,
                                                                                                const class GALGAS_bool & inOperand3
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_simpleStoredPropertyListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyListForGeneration add_operation (const GALGAS_simpleStoredPropertyListForGeneration & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_bool constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_bool & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueInSwiftAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mStoredPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_simpleStoredPropertyListForGeneration ;
 
} ; // End of GALGAS_simpleStoredPropertyListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_simpleStoredPropertyListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_simpleStoredPropertyListForGeneration (const GALGAS_simpleStoredPropertyListForGeneration & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_typeKind current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mStoredPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDefaultValueInSwift (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mNeedsValidation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_simpleStoredPropertyListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @classListForGeneration_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mClassName ;

  public : GALGAS_simpleStoredPropertyListForGeneration mProperty_mSimpleStoredPropertyListForGeneration ;

  public : GALGAS_transientDefinitionListForGeneration mProperty_mTransientListForGeneration ;

  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;

  public : GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_classListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_classListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_classListForGeneration_2D_element (const GALGAS_string & in_mClassName,
                                                     const GALGAS_simpleStoredPropertyListForGeneration & in_mSimpleStoredPropertyListForGeneration,
                                                     const GALGAS_transientDefinitionListForGeneration & in_mTransientListForGeneration,
                                                     const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                     const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                  const class GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                  const class GALGAS_externSwiftFunctionList & inOperand3,
                                                                                  const class GALGAS_externSwiftDelegateList & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyListForGeneration getter_mSimpleStoredPropertyListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDefinitionListForGeneration getter_mTransientListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @simpleStoredPropertyListForGeneration_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_simpleStoredPropertyListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_typeKind mProperty_mType ;

  public : GALGAS_string mProperty_mStoredPropertyName ;

  public : GALGAS_string mProperty_mDefaultValueInSwift ;

  public : GALGAS_bool mProperty_mNeedsValidation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_simpleStoredPropertyListForGeneration_2D_element (const GALGAS_typeKind & in_mType,
                                                                    const GALGAS_string & in_mStoredPropertyName,
                                                                    const GALGAS_string & in_mDefaultValueInSwift,
                                                                    const GALGAS_bool & in_mNeedsValidation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_simpleStoredPropertyListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_simpleStoredPropertyListForGeneration_2D_element constructor_new (const class GALGAS_typeKind & inOperand0,
                                                                                                 const class GALGAS_string & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2,
                                                                                                 const class GALGAS_bool & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_simpleStoredPropertyListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueInSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mStoredPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_simpleStoredPropertyListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @transientDependencyListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDependencyListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientDependencyListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_observablePropertyAST & in_mDependency,
                                                  const class GALGAS_string & in_mFunctionArgumentName,
                                                  const class GALGAS_string & in_mFunctionArgumentTypeString
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDependencyListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientDependencyListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_transientDependencyListForGeneration constructor_listWithValue (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                               const class GALGAS_string & inOperand1,
                                                                                               const class GALGAS_string & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientDependencyListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_observablePropertyAST & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration add_operation (const GALGAS_transientDependencyListForGeneration & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_observablePropertyAST & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_observablePropertyAST & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_observablePropertyAST & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_observablePropertyAST & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_observablePropertyAST & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mDependencyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentTypeStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientDependencyListForGeneration ;
 
} ; // End of GALGAS_transientDependencyListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_transientDependencyListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientDependencyListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @transientDefinitionListForGeneration_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_transientDefinitionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mOwnerName ;

  public : GALGAS_string mProperty_mTransientName ;

  public : GALGAS_bool mProperty_mIsArray ;

  public : GALGAS_typeKind mProperty_mTransientType ;

  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_transientDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_transientDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientDefinitionListForGeneration_2D_element (const GALGAS_string & in_mOwnerName,
                                                                   const GALGAS_string & in_mTransientName,
                                                                   const GALGAS_bool & in_mIsArray,
                                                                   const GALGAS_typeKind & in_mTransientType,
                                                                   const GALGAS_transientDependencyListForGeneration & in_mDependencyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDefinitionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientDefinitionListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                const class GALGAS_string & inOperand1,
                                                                                                const class GALGAS_bool & inOperand2,
                                                                                                const class GALGAS_typeKind & inOperand3,
                                                                                                const class GALGAS_transientDependencyListForGeneration & inOperand4
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientDefinitionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTransientType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDefinitionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @entityObservablePropertyMap_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_entityObservablePropertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_observablePropertyMap mProperty_mObservablePropertyMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_entityObservablePropertyMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_entityObservablePropertyMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_entityObservablePropertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_entityObservablePropertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_observablePropertyMap & in_mObservablePropertyMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityObservablePropertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_entityObservablePropertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_observablePropertyMap & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_entityObservablePropertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyMap getter_mObservablePropertyMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityObservablePropertyMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ;

#endif
