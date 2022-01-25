#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@mainXibDescriptorList generateCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateCode (const class GALGAS_mainXibDescriptorList & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'easyBindings_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_easyBindings_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_action_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GALGAS_lstring constinArgument0,
                                                                                  class GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                         class GALGAS_lstring & outArgument2,
                                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_ (class GALGAS_bindingOptionList & outArgument0,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_column_5F_bindings_ (class GALGAS_tableViewColumnBindingAST & outArgument0,
                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_column_5F_bindings_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_ (class GALGAS_astComputedViewInstruction & outArgument0,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_ (class GALGAS_bool inArgument0,
                                                         const class GALGAS_lstring constinArgument1,
                                                         const class GALGAS_lstring constinArgument2,
                                                         class GALGAS_arrayControllerBindingListAST & ioArgument3,
                                                         class GALGAS_astDeclarationStruct & ioArgument4,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_ (class GALGAS_abstractDefaultValue & outArgument0,
                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_ (class GALGAS_externSwiftDelegateList & ioArgument0,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_ (class GALGAS_externSwiftFunctionList & ioArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_ (class GALGAS_mainXibDescriptorList & ioArgument0,
                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_ (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_ (class GALGAS_observablePropertyAST & outArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_ (class GALGAS_tableValueBinding & outArgument0,
                                                 class GALGAS_runActionDescriptor & outArgument1,
                                                 class GALGAS_multipleBindingDescriptor & outArgument2,
                                                 class GALGAS_multipleBindingDescriptor & outArgument3,
                                                 class GALGAS_graphicController & outArgument4,
                                                 class GALGAS_regularBindingList & outArgument5,
                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_ (class GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                              class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_ (class GALGAS_outletDeclarationList & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                               class GALGAS_simpleStoredPropertyList & ioArgument1,
                                                               class GALGAS_stringset & ioArgument2,
                                                               class GALGAS_astDeclarationStruct & ioArgument3,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_ (class GALGAS_astViewDeclarationList & ioArgument0,
                                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                               class GALGAS_location & outArgument1,
                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                      class GALGAS_stringset & ioArgument1,
                                                      class GALGAS_astDeclarationStruct & ioArgument2,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                     class GALGAS_astDeclarationStruct & ioArgument1,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                        const class GALGAS_lstring constinArgument1,
                                                        class GALGAS_astDeclarationStruct & ioArgument2,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_ (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_ (class GALGAS_bool inArgument0,
                                                           class GALGAS_astViewInstructionList & ioArgument1,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_ (class GALGAS_lstring & ioArgument0,
                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                   GALGAS_location & outArgument1,
                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_ (const GALGAS_lstring constinArgument0,
                                                                                              GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                                              GALGAS_lstring & outArgument2,
                                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_ (const GALGAS_lstring constinArgument0,
                                                                                                       GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i18_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i18_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i19_ (GALGAS_bool inArgument0,
                                                                                GALGAS_astViewInstructionList & ioArgument1,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i19_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i21_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i21_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i22_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i22_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i23_ (GALGAS_astComputedViewInstruction & outArgument0,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i23_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i24_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i24_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i25_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i25_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i26_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i26_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i27_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i27_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i28_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i28_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i29_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i29_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i30_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i31_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i31_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i32_ (GALGAS_outletDeclarationList & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i32_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i33_ (GALGAS_tableValueBinding & outArgument0,
                                                                      GALGAS_runActionDescriptor & outArgument1,
                                                                      GALGAS_multipleBindingDescriptor & outArgument2,
                                                                      GALGAS_multipleBindingDescriptor & outArgument3,
                                                                      GALGAS_graphicController & outArgument4,
                                                                      GALGAS_regularBindingList & outArgument5,
                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i33_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i34_ (GALGAS_observablePropertyAST & outArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i34_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i35_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i35_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i36_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i36_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i37_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i37_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i38_ (GALGAS_bool inArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              const GALGAS_lstring constinArgument2,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument3,
                                                                              GALGAS_astDeclarationStruct & ioArgument4,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i38_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i39_ (const GALGAS_lstring constinArgument0,
                                                                                    GALGAS_simpleStoredPropertyList & ioArgument1,
                                                                                    GALGAS_stringset & ioArgument2,
                                                                                    GALGAS_astDeclarationStruct & ioArgument3,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i39_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i40_ (const GALGAS_lstring constinArgument0,
                                                                          GALGAS_astDeclarationStruct & ioArgument1,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i40_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i41_ (const GALGAS_lstring constinArgument0,
                                                                           GALGAS_stringset & ioArgument1,
                                                                           GALGAS_astDeclarationStruct & ioArgument2,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i41_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i42_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i42_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i43_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i44_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i45_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i45_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i48_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i48_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i49_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i49_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i50_ (GALGAS_bindingOptionList & outArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i50_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i51_ (GALGAS_bool inArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              const GALGAS_lstring constinArgument2,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument3,
                                                                              GALGAS_astDeclarationStruct & ioArgument4,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i51_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i52_ (GALGAS_bool inArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              const GALGAS_lstring constinArgument2,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument3,
                                                                              GALGAS_astDeclarationStruct & ioArgument4,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i52_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_column_5F_bindings_i53_ (GALGAS_tableViewColumnBindingAST & outArgument0,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_column_5F_bindings_i53_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i54_ (GALGAS_bool inArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              const GALGAS_lstring constinArgument2,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument3,
                                                                              GALGAS_astDeclarationStruct & ioArgument4,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i54_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i55_ (GALGAS_bool inArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              const GALGAS_lstring constinArgument2,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument3,
                                                                              GALGAS_astDeclarationStruct & ioArgument4,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i55_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i56_ (GALGAS_abstractDefaultValue & outArgument0,
                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i56_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i57_ (GALGAS_lstring & ioArgument0,
                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i57_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i58_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i58_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i59_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i59_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_61 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_62 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_63 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_64 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_65 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_66 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_67 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_68 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_69 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_70 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_71 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_72 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_73 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_74 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_75 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_76 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_77 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_78 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_79 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_80 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_81 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_82 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_83 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_84 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_85 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_86 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_87 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_88 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_89 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_90 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_91 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_92 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_93 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_94 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_95 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_96 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_97 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_98 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_99 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_100 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_101 (C_Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_arrayControllerDeclarationAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_arrayControllerDeclarationAST (const class cPtr_arrayControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mControllerName (void) const ;

  public: class GALGAS_arrayControllerBoundModelAST readProperty_mModel (void) const ;

  public: class GALGAS_lstring readProperty_mToManyPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_arrayControllerBoundModelAST & inOperand2,
                                                                             const class GALGAS_lstring & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModel (class GALGAS_arrayControllerBoundModelAST inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayControllerDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mControllerName ;
  public: GALGAS_arrayControllerBoundModelAST mProperty_mModel ;
  public: GALGAS_lstring mProperty_mToManyPropertyName ;

//--- Constructor
  public: cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                              const GALGAS_lstring & in_mControllerName,
                                              const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                              const GALGAS_lstring & in_mToManyPropertyName
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedHorizontalViewDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedHorizontalViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedHorizontalViewDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_astComputedHorizontalViewDeclaration (const class cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_astViewInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedHorizontalViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedHorizontalViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                    const class GALGAS_astViewInstructionList & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedHorizontalViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedHorizontalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedHorizontalViewDeclaration : public cPtr_astAbstractViewDeclaration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_astViewInstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GALGAS_astViewInstructionList & in_mInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mAutoLayoutViewClassName ;
  public: GALGAS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_tableValueBinding mProperty_mTableValueBinding ;
  public: GALGAS_runActionDescriptor mProperty_mRunActionDescriptor ;
  public: GALGAS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public: GALGAS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public: GALGAS_graphicController mProperty_mGraphicController ;
  public: GALGAS_regularBindingList mProperty_mRegularBindingList ;
  public: GALGAS_lstring mProperty_mConfiguratorName ;
  public: GALGAS_lstring mProperty_mOutletName ;

//--- Constructor
  public: cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                           const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                           const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                           const GALGAS_tableValueBinding & in_mTableValueBinding,
                                           const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                           const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                           const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                           const GALGAS_graphicController & in_mGraphicController,
                                           const GALGAS_regularBindingList & in_mRegularBindingList,
                                           const GALGAS_lstring & in_mConfiguratorName,
                                           const GALGAS_lstring & in_mOutletName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHorizontalStackViewDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHorizontalStackViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astHorizontalStackViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astHorizontalStackViewDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_astHorizontalStackViewDeclaration (const class cPtr_astHorizontalStackViewDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astHorizontalStackViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astHorizontalStackViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astHorizontalStackViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHorizontalStackViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astHorizontalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astHorizontalStackViewDeclaration : public cPtr_astAbstractViewDeclaration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;

//--- Constructor
  public: cPtr_astHorizontalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astLocalViewInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astLocalViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astLocalViewInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astLocalViewInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_astLocalViewInstruction (const class cPtr_astLocalViewInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLocalView (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astLocalViewInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astLocalViewInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLocalView (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astLocalViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astLocalViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astLocalViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLocalView ;

//--- Constructor
  public: cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astStackViewReferenceInstructionDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astStackViewReferenceInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astStackViewReferenceInstructionDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astStackViewReferenceInstructionDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_astStackViewReferenceInstructionDeclaration (const class cPtr_astStackViewReferenceInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mStackViewName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astStackViewReferenceInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astStackViewReferenceInstructionDeclaration constructor_new (const class GALGAS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astStackViewReferenceInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMStackViewName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astStackViewReferenceInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astStackViewReferenceInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astStackViewReferenceInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mStackViewName ;

//--- Constructor
  public: cPtr_astStackViewReferenceInstructionDeclaration (const GALGAS_lstring & in_mStackViewName
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyDeclarationAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_atomicPropertyDeclarationAST (const class cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mPropertyTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mPropertyName (void) const ;

  public: class GALGAS_abstractDefaultValue readProperty_mDefaultValue (void) const ;

  public: class GALGAS_bool readProperty_mNeedsValidation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_abstractDefaultValue & inOperand3,
                                                                            const class GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValue (class GALGAS_abstractDefaultValue inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (class GALGAS_bool inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mPropertyTypeName ;
  public: GALGAS_lstring mProperty_mPropertyName ;
  public: GALGAS_abstractDefaultValue mProperty_mDefaultValue ;
  public: GALGAS_bool mProperty_mNeedsValidation ;

//--- Constructor
  public: cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                             const GALGAS_lstring & in_mPropertyTypeName,
                                             const GALGAS_lstring & in_mPropertyName,
                                             const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                             const GALGAS_bool & in_mNeedsValidation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDocumentDeclarationAST (const class cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mMainViewName (void) const ;

  public: class GALGAS_outletDeclarationList readProperty_mOutletDeclarationList (void) const ;

  public: class GALGAS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GALGAS_arrayControllerBindingListAST readProperty_mArrayControllerBindingListAST (void) const ;

  public: class GALGAS_astViewDeclarationList readProperty_mViewDeclarationList (void) const ;

  public: class GALGAS_astAutoLayoutToolbarItemList readProperty_mAutoLayoutToolbarItemList (void) const ;

  public: class GALGAS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GALGAS_astAutoLayoutOutletLinkerList readProperty_mOutletLinkerList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_outletDeclarationList & inOperand3,
                                                                                const class GALGAS_lstringlist & inOperand4,
                                                                                const class GALGAS_arrayControllerBindingListAST & inOperand5,
                                                                                const class GALGAS_astViewDeclarationList & inOperand6,
                                                                                const class GALGAS_astAutoLayoutToolbarItemList & inOperand7,
                                                                                const class GALGAS_string & inOperand8,
                                                                                const class GALGAS_astAutoLayoutOutletLinkerList & inOperand9
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (class GALGAS_arrayControllerBindingListAST inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemList (class GALGAS_astAutoLayoutToolbarItemList inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMainViewName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (class GALGAS_outletDeclarationList inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletLinkerList (class GALGAS_astAutoLayoutOutletLinkerList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (class GALGAS_astViewDeclarationList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mMainViewName ;
  public: GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public: GALGAS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;
  public: GALGAS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public: GALGAS_astAutoLayoutToolbarItemList mProperty_mAutoLayoutToolbarItemList ;
  public: GALGAS_string mProperty_mCustomSuperClassName ;
  public: GALGAS_astAutoLayoutOutletLinkerList mProperty_mOutletLinkerList ;

//--- Constructor
  public: cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                 const GALGAS_lstring & in_mRootEntityName,
                                                 const GALGAS_lstring & in_mMainViewName,
                                                 const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                 const GALGAS_lstringlist & in_mActionDeclarationList,
                                                 const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                 const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                 const GALGAS_astAutoLayoutToolbarItemList & in_mAutoLayoutToolbarItemList,
                                                 const GALGAS_string & in_mCustomSuperClassName,
                                                 const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutTableViewControllerDeclarationAST (const class cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mControllerName (void) const ;

  public: class GALGAS_bool readProperty_mIsRoot (void) const ;

  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mToManyPropertyName (void) const ;

  public: class GALGAS_autoLayoutTableViewControllerBoundColumnListAST readProperty_mTableViewControllerBoundColumnListAST (void) const ;

  public: class GALGAS_autoLayoutTableViewControllerAttributListAST readProperty_mTableViewControllerAttributListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_bool & inOperand2,
                                                                                           const class GALGAS_lstring & inOperand3,
                                                                                           const class GALGAS_lstring & inOperand4,
                                                                                           const class GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                           const class GALGAS_autoLayoutTableViewControllerAttributListAST & inOperand6
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsRoot (class GALGAS_bool inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (class GALGAS_autoLayoutTableViewControllerAttributListAST inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (class GALGAS_autoLayoutTableViewControllerBoundColumnListAST inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutTableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mControllerName ;
  public: GALGAS_bool mProperty_mIsRoot ;
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mToManyPropertyName ;
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListAST mProperty_mTableViewControllerBoundColumnListAST ;
  public: GALGAS_autoLayoutTableViewControllerAttributListAST mProperty_mTableViewControllerAttributListAST ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mControllerName,
                                                            const GALGAS_bool & in_mIsRoot,
                                                            const GALGAS_lstring & in_mRootEntityName,
                                                            const GALGAS_lstring & in_mToManyPropertyName,
                                                            const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                            const GALGAS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutViewClassDeclarationAST (const class cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mUserDefined (void) const ;

  public: class GALGAS_lstring readProperty_mSuperClassName (void) const ;

  public: class GALGAS_bool readProperty_mHasRunAction (void) const ;

  public: class GALGAS_bool readProperty_mHasEnabled (void) const ;

  public: class GALGAS_bool readProperty_mHandlesTableValueBinding (void) const ;

  public: class GALGAS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;

  public: class GALGAS_bool readProperty_mHasHidden (void) const ;

  public: class GALGAS_autoLayoutClassParameterList readProperty_mParameterList (void) const ;

  public: class GALGAS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
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
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMap (class GALGAS_astAutoLayoutViewFunctionMap inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_autoLayoutClassParameterList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutViewClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutViewClassDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mUserDefined ;
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_bool mProperty_mHasRunAction ;
  public: GALGAS_bool mProperty_mHasEnabled ;
  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GALGAS_bool mProperty_mHasHidden ;
  public: GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--- Constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolAsDefaultValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolAsDefaultValue : public GALGAS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GALGAS_boolAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolAsDefaultValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_boolAsDefaultValue (const class cPtr_boolAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbool readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolAsDefaultValue constructor_new (const class GALGAS_lbool & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lbool inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolAsDefaultValue : public cPtr_abstractDefaultValue {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lbool mProperty_mValue ;

//--- Constructor
  public: cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedPropertyDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_computedPropertyDeclarationAST (const class cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mComputedPropertyTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mComputedPropertyName (void) const ;

  public: class GALGAS_observablePropertyList readProperty_mDependencyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3,
                                                                              const class GALGAS_observablePropertyList & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (class GALGAS_lstring inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mComputedPropertyTypeName ;
  public: GALGAS_lstring mProperty_mComputedPropertyName ;
  public: GALGAS_observablePropertyList mProperty_mDependencyList ;

//--- Constructor
  public: cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                               const GALGAS_lstring & in_mRootEntityName,
                                               const GALGAS_lstring & in_mComputedPropertyTypeName,
                                               const GALGAS_lstring & in_mComputedPropertyName,
                                               const GALGAS_observablePropertyList & in_mDependencyList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @doubleAsDefaultValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_doubleAsDefaultValue : public GALGAS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GALGAS_doubleAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_doubleAsDefaultValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_doubleAsDefaultValue (const class cPtr_doubleAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_ldouble readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_doubleAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_doubleAsDefaultValue constructor_new (const class GALGAS_ldouble & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_doubleAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_ldouble inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_doubleAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @doubleAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_doubleAsDefaultValue : public cPtr_abstractDefaultValue {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_ldouble mProperty_mValue ;

//--- Constructor
  public: cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_entityDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_entityDeclarationAST (const class cPtr_entityDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_lstring readProperty_mSuperEntityName (void) const ;

  public: class GALGAS_simpleStoredPropertyList readProperty_mSimpleStoredPropertyList (void) const ;

  public: class GALGAS_stringset readProperty_mSignatureList (void) const ;

  public: class GALGAS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GALGAS_lstringlist readProperty_mObsoleteEntityNames (void) const ;

  public: class GALGAS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GALGAS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GALGAS_lstringlist readProperty_mGraphicOptionArray (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_simpleStoredPropertyList & inOperand3,
                                                                    const class GALGAS_stringset & inOperand4,
                                                                    const class GALGAS_lstringlist & inOperand5,
                                                                    const class GALGAS_lstringlist & inOperand6,
                                                                    const class GALGAS_bool & inOperand7,
                                                                    const class GALGAS_externSwiftDelegateList & inOperand8,
                                                                    const class GALGAS_lstringlist & inOperand9
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGraphicOptionArray (class GALGAS_lstringlist inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNames (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureList (class GALGAS_stringset inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSimpleStoredPropertyList (class GALGAS_simpleStoredPropertyList inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_lstring mProperty_mSuperEntityName ;
  public: GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredPropertyList ;
  public: GALGAS_stringset mProperty_mSignatureList ;
  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public: GALGAS_lstringlist mProperty_mObsoleteEntityNames ;
  public: GALGAS_bool mProperty_mIsGraphicEntity ;
  public: GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GALGAS_lstringlist mProperty_mGraphicOptionArray ;

//--- Constructor
  public: cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_bool & in_mIsAbstract,
                                     const GALGAS_lstring & in_mSuperEntityName,
                                     const GALGAS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                     const GALGAS_stringset & in_mSignatureList,
                                     const GALGAS_lstringlist & in_mActionDeclarationList,
                                     const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                     const GALGAS_bool & in_mIsGraphicEntity,
                                     const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                     const GALGAS_lstringlist & in_mGraphicOptionArray
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_enumerationDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumerationDeclarationAST (const class cPtr_enumerationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstringlist readProperty_mEnumConstantNameList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstringlist & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEnumConstantNameList (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumerationDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstringlist mProperty_mEnumConstantNameList ;

//--- Constructor
  public: cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_lstringlist & in_mEnumConstantNameList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @identifierAsDefaultValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_identifierAsDefaultValue : public GALGAS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GALGAS_identifierAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_identifierAsDefaultValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_identifierAsDefaultValue (const class cPtr_identifierAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_identifierAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_identifierAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_identifierAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @identifierAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_identifierAsDefaultValue : public cPtr_abstractDefaultValue {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public: cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalIntMultipleBindingExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalIntMultipleBindingExpressionAST (const class cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalIntMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalIntMultipleBindingExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalIntMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalIntMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_luint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_outletClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_outletClassDeclarationAST (const class cPtr_outletClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mUserDefined (void) const ;

  public: class GALGAS_lstring readProperty_mSuperClassName (void) const ;

  public: class GALGAS_bool readProperty_mHasRunAction (void) const ;

  public: class GALGAS_bool readProperty_mHasEnabled (void) const ;

  public: class GALGAS_bool readProperty_mHandlesTableValueBinding (void) const ;

  public: class GALGAS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;

  public: class GALGAS_bool readProperty_mHasHidden (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_bool & inOperand4,
                                                                         const class GALGAS_bool & inOperand5,
                                                                         const class GALGAS_bool & inOperand6,
                                                                         const class GALGAS_bool & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outletClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_outletClassDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mUserDefined ;
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_bool mProperty_mHasRunAction ;
  public: GALGAS_bool mProperty_mHasEnabled ;
  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GALGAS_bool mProperty_mHasHidden ;

//--- Constructor
  public: cPtr_outletClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_bool & in_mUserDefined,
                                          const GALGAS_lstring & in_mSuperClassName,
                                          const GALGAS_bool & in_mHasRunAction,
                                          const GALGAS_bool & in_mHasEnabled,
                                          const GALGAS_bool & in_mHandlesTableValueBinding,
                                          const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                          const GALGAS_bool & in_mHasHidden
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsAsDefaultValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsAsDefaultValue : public GALGAS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GALGAS_prefsAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefsAsDefaultValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_prefsAsDefaultValue (const class cPtr_prefsAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mPrefPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefsAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefsAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefsAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPrefPropertyName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefsAsDefaultValue : public cPtr_abstractDefaultValue {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mPrefPropertyName ;

//--- Constructor
  public: cPtr_prefsAsDefaultValue (const GALGAS_lstring & in_mPrefPropertyName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_proxyDeclarationAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_proxyDeclarationAST (const class cPtr_proxyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_proxyKind readProperty_mProxyKind (void) const ;

  public: class GALGAS_lstring readProperty_mProxyTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mProxyName (void) const ;

  public: class GALGAS_lstring readProperty_mToOneRelationshipName (void) const ;

  public: class GALGAS_lstring readProperty_mPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_proxyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_proxyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_proxyKind & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_lstring & inOperand3,
                                                                   const class GALGAS_lstring & inOperand4,
                                                                   const class GALGAS_lstring & inOperand5
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProxyTypeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_proxyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @proxyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_proxyDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_proxyKind mProperty_mProxyKind ;
  public: GALGAS_lstring mProperty_mProxyTypeName ;
  public: GALGAS_lstring mProperty_mProxyName ;
  public: GALGAS_lstring mProperty_mToOneRelationshipName ;
  public: GALGAS_lstring mProperty_mPropertyName ;

//--- Constructor
  public: cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                    const GALGAS_proxyKind & in_mProxyKind,
                                    const GALGAS_lstring & in_mProxyTypeName,
                                    const GALGAS_lstring & in_mProxyName,
                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                    const GALGAS_lstring & in_mPropertyName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_selectionControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectionControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selectionControllerDeclarationAST (const class cPtr_selectionControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mSelectionControllerName (void) const ;

  public: class GALGAS_lstring readProperty_mModelControllerName (void) const ;

  public: class GALGAS_lstring readProperty_mModelControllerPropertyName (void) const ;

  public: class GALGAS_lstring readProperty_mSelectionEntityName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectionControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectionControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstring & inOperand3,
                                                                                 const class GALGAS_lstring & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectionControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMModelControllerName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (class GALGAS_lstring inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionControllerName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectionEntityName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectionControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selectionControllerDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mSelectionControllerName ;
  public: GALGAS_lstring mProperty_mModelControllerName ;
  public: GALGAS_lstring mProperty_mModelControllerPropertyName ;
  public: GALGAS_lstring mProperty_mSelectionEntityName ;

//--- Constructor
  public: cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                  const GALGAS_lstring & in_mSelectionControllerName,
                                                  const GALGAS_lstring & in_mModelControllerName,
                                                  const GALGAS_lstring & in_mModelControllerPropertyName,
                                                  const GALGAS_lstring & in_mSelectionEntityName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @stringAsDefaultValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringAsDefaultValue : public GALGAS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GALGAS_stringAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_stringAsDefaultValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_stringAsDefaultValue (const class cPtr_stringAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_stringAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_stringAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_stringAsDefaultValue : public cPtr_abstractDefaultValue {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public: cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_tableViewControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tableViewControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_tableViewControllerDeclarationAST (const class cPtr_tableViewControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mControllerName (void) const ;

  public: class GALGAS_bool readProperty_mIsRoot (void) const ;

  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mToManyPropertyName (void) const ;

  public: class GALGAS_tableViewControllerBoundColumnListAST readProperty_mTableViewControllerBoundColumnListAST (void) const ;

  public: class GALGAS_tableViewControllerAttributListAST readProperty_mTableViewControllerAttributListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_lstring & inOperand3,
                                                                                 const class GALGAS_lstring & inOperand4,
                                                                                 const class GALGAS_tableViewControllerBoundColumnListAST & inOperand5,
                                                                                 const class GALGAS_tableViewControllerAttributListAST & inOperand6
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableViewControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsRoot (class GALGAS_bool inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (class GALGAS_tableViewControllerAttributListAST inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (class GALGAS_tableViewControllerBoundColumnListAST inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tableViewControllerDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mControllerName ;
  public: GALGAS_bool mProperty_mIsRoot ;
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mToManyPropertyName ;
  public: GALGAS_tableViewControllerBoundColumnListAST mProperty_mTableViewControllerBoundColumnListAST ;
  public: GALGAS_tableViewControllerAttributListAST mProperty_mTableViewControllerAttributListAST ;

//--- Constructor
  public: cPtr_tableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                  const GALGAS_lstring & in_mControllerName,
                                                  const GALGAS_bool & in_mIsRoot,
                                                  const GALGAS_lstring & in_mRootEntityName,
                                                  const GALGAS_lstring & in_mToManyPropertyName,
                                                  const GALGAS_tableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                  const GALGAS_tableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_toManyRelationshipAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_toManyRelationshipAST (const class cPtr_toManyRelationshipAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDestinationEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mToManyRelationshipName (void) const ;

  public: class GALGAS_toManyRelationshipOptionAST readProperty_mOption (void) const ;

  public: class GALGAS_bool readProperty_mCustomStore (void) const ;

  public: class GALGAS_bool readProperty_mUsedForSignature (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyRelationshipAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_toManyRelationshipOptionAST & inOperand3,
                                                                     const class GALGAS_bool & inOperand4,
                                                                     const class GALGAS_bool & inOperand5
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCustomStore (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_toManyRelationshipOptionAST inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToManyRelationshipName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyRelationshipAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mDestinationEntityName ;
  public: GALGAS_lstring mProperty_mToManyRelationshipName ;
  public: GALGAS_toManyRelationshipOptionAST mProperty_mOption ;
  public: GALGAS_bool mProperty_mCustomStore ;
  public: GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public: cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_lstring & in_mDestinationEntityName,
                                      const GALGAS_lstring & in_mToManyRelationshipName,
                                      const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                      const GALGAS_bool & in_mCustomStore,
                                      const GALGAS_bool & in_mUsedForSignature
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOneRelationshipAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneRelationshipAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_toOneRelationshipAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_toOneRelationshipAST (const class cPtr_toOneRelationshipAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDestinationEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mToOneRelationshipName (void) const ;

  public: class GALGAS_toOneOppositeRelationship readProperty_mOpposite (void) const ;

  public: class GALGAS_bool readProperty_mUsedForSignature (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_toOneRelationshipAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOneRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                                    const class GALGAS_bool & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOpposite (class GALGAS_toOneOppositeRelationship inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toOneRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toOneRelationshipAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mDestinationEntityName ;
  public: GALGAS_lstring mProperty_mToOneRelationshipName ;
  public: GALGAS_toOneOppositeRelationship mProperty_mOpposite ;
  public: GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public: cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_lstring & in_mDestinationEntityName,
                                     const GALGAS_lstring & in_mToOneRelationshipName,
                                     const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                     const GALGAS_bool & in_mUsedForSignature
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_transientClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_transientClassDeclarationAST (const class cPtr_transientClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsClass (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bool & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsClass (class GALGAS_bool inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientClassDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mIsClass ;

//--- Constructor
  public: cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                             const GALGAS_bool & in_mIsClass
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_transientDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_transientDeclarationAST (const class cPtr_transientDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mTransientTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mTransientName (void) const ;

  public: class GALGAS_observablePropertyList readProperty_mDependencyList (void) const ;

  public: class GALGAS_bool readProperty_mIsOverriding (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2,
                                                                       const class GALGAS_lstring & inOperand3,
                                                                       const class GALGAS_observablePropertyList & inOperand4,
                                                                       const class GALGAS_bool & inOperand5
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsOverriding (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientTypeName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mTransientTypeName ;
  public: GALGAS_lstring mProperty_mTransientName ;
  public: GALGAS_observablePropertyList mProperty_mDependencyList ;
  public: GALGAS_bool mProperty_mIsOverriding ;

//--- Constructor
  public: cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                        const GALGAS_lstring & in_mRootEntityName,
                                        const GALGAS_lstring & in_mTransientTypeName,
                                        const GALGAS_lstring & in_mTransientName,
                                        const GALGAS_observablePropertyList & in_mDependencyList,
                                        const GALGAS_bool & in_mIsOverriding
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR easyBindings_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_action_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GALGAS_lstring inArgument0,
                                                                               GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GALGAS_lstring inArgument0,
                                                                      GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                      GALGAS_lstring & outArgument2,
                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public: virtual void nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList & outArgument0,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingComparison_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'column_bindings' non terminal
//--- 'parse' label
  public: virtual void nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST & outArgument0,
                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_computed_5F_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_computed_5F_view_5F_instruction_ (GALGAS_astComputedViewInstruction & outArgument0,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_controller_5F_declaration_ (GALGAS_bool inArgument0,
                                                      const GALGAS_lstring inArgument1,
                                                      const GALGAS_lstring inArgument2,
                                                      GALGAS_arrayControllerBindingListAST & ioArgument3,
                                                      GALGAS_astDeclarationStruct & ioArgument4,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_document_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_function_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_value_ (GALGAS_abstractDefaultValue & outArgument0,
                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_delegate_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_func_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_graphviz_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public: virtual void nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_observable_5F_property_ (GALGAS_observablePropertyAST & outArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_ (GALGAS_tableValueBinding & outArgument0,
                                              GALGAS_runActionDescriptor & outArgument1,
                                              GALGAS_multipleBindingDescriptor & outArgument2,
                                              GALGAS_multipleBindingDescriptor & outArgument3,
                                              GALGAS_graphicController & outArgument4,
                                              GALGAS_regularBindingList & outArgument5,
                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                            GALGAS_simpleStoredPropertyList & ioArgument1,
                                                            GALGAS_stringset & ioArgument2,
                                                            GALGAS_astDeclarationStruct & ioArgument3,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_stack_5F_view_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_stack_5F_view_5F_declaration_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_astDeclarationStruct & ioArgument0,
                                            GALGAS_location & outArgument1,
                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_astDeclarationStruct & ioArgument0,
                                                  GALGAS_location & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_astDeclarationStruct & ioArgument0,
                                                    GALGAS_location & outArgument1
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toMany_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                   GALGAS_stringset & ioArgument1,
                                                   GALGAS_astDeclarationStruct & ioArgument2,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toOne_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                  GALGAS_astDeclarationStruct & ioArgument1,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_transient_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                     const GALGAS_lstring inArgument1,
                                                     GALGAS_astDeclarationStruct & ioArgument2,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_5F_list_ (GALGAS_bool inArgument0,
                                                        GALGAS_astViewInstructionList & ioArgument1,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
  public: virtual void nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_xcode_5F_project_ (GALGAS_lstring & ioArgument0,
                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

  public: virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_61 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_62 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_63 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_64 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_65 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_66 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_67 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_68 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_69 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_70 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_71 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_72 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_73 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_74 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_75 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_76 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_77 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_78 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_79 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_80 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_81 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_82 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_83 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_84 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_85 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_86 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_87 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_88 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_89 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_90 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_91 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_92 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_93 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_94 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_95 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_96 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_97 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_98 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_99 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_100 (C_Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_101 (C_Lexique_easyBindings_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefDeclaration struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: inline GALGAS_outletDeclarationList readProperty_mOutletDeclarationList (void) const {
    return mProperty_mOutletDeclarationList ;
  }

  public: GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;
  public: inline GALGAS_simpleStoredPropertyList readProperty_mSimpleStoredAttributeList (void) const {
    return mProperty_mSimpleStoredAttributeList ;
  }

  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public: inline GALGAS_lstringlist readProperty_mActionDeclarationList (void) const {
    return mProperty_mActionDeclarationList ;
  }

  public: GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: inline GALGAS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const {
    return mProperty_mExternSwiftFunctionList ;
  }

  public: GALGAS_stringset mProperty_mSignatureList ;
  public: inline GALGAS_stringset readProperty_mSignatureList (void) const {
    return mProperty_mSignatureList ;
  }

  public: GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: inline GALGAS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_prefDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletDeclarationList (const GALGAS_outletDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletDeclarationList = inValue ;
  }

  public: inline void setter_setMSimpleStoredAttributeList (const GALGAS_simpleStoredPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleStoredAttributeList = inValue ;
  }

  public: inline void setter_setMActionDeclarationList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionDeclarationList = inValue ;
  }

  public: inline void setter_setMExternSwiftFunctionList (const GALGAS_externSwiftFunctionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternSwiftFunctionList = inValue ;
  }

  public: inline void setter_setMSignatureList (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureList = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GALGAS_mainXibDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_prefDeclaration (void) ;

//--------------------------------- Native constructor
  public: GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                  const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                  const GALGAS_lstringlist & in_mActionDeclarationList,
                                  const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                  const GALGAS_stringset & in_mSignatureList,
                                  const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefDeclaration extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefDeclaration constructor_new (const class GALGAS_outletDeclarationList & inOperand0,
                                                               const class GALGAS_simpleStoredPropertyList & inOperand1,
                                                               const class GALGAS_lstringlist & inOperand2,
                                                               const class GALGAS_externSwiftFunctionList & inOperand3,
                                                               const class GALGAS_stringset & inOperand4,
                                                               const class GALGAS_mainXibDescriptorList & inOperand5
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
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
  public: GALGAS_declarationListAST mProperty_mUnifiedDeclarationList ;
  public: inline GALGAS_declarationListAST readProperty_mUnifiedDeclarationList (void) const {
    return mProperty_mUnifiedDeclarationList ;
  }

  public: GALGAS_outletClassBindingSpecificationList mProperty_mBindingSpecificationListMap ;
  public: inline GALGAS_outletClassBindingSpecificationList readProperty_mBindingSpecificationListMap (void) const {
    return mProperty_mBindingSpecificationListMap ;
  }

  public: GALGAS_autoLayoutViewClassBindingSpecificationList mProperty_mAutoLayoutBindingSpecificationList ;
  public: inline GALGAS_autoLayoutViewClassBindingSpecificationList readProperty_mAutoLayoutBindingSpecificationList (void) const {
    return mProperty_mAutoLayoutBindingSpecificationList ;
  }

  public: GALGAS_prefDeclaration mProperty_mPreferences ;
  public: inline GALGAS_prefDeclaration readProperty_mPreferences (void) const {
    return mProperty_mPreferences ;
  }

  public: GALGAS_lstring mProperty_mXcodeProject ;
  public: inline GALGAS_lstring readProperty_mXcodeProject (void) const {
    return mProperty_mXcodeProject ;
  }

  public: GALGAS_lstringlist mProperty_mGraphvizList ;
  public: inline GALGAS_lstringlist readProperty_mGraphvizList (void) const {
    return mProperty_mGraphvizList ;
  }

  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;
  public: inline GALGAS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutVStackFunctionMap (void) const {
    return mProperty_mAutoLayoutVStackFunctionMap ;
  }

  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;
  public: inline GALGAS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutHStackFunctionMap (void) const {
    return mProperty_mAutoLayoutHStackFunctionMap ;
  }

  public: GALGAS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;
  public: inline GALGAS_enumerationFunctionListAST readProperty_mEnumerationFunctionListAST (void) const {
    return mProperty_mEnumerationFunctionListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astDeclarationStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUnifiedDeclarationList (const GALGAS_declarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnifiedDeclarationList = inValue ;
  }

  public: inline void setter_setMBindingSpecificationListMap (const GALGAS_outletClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationListMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationList (const GALGAS_autoLayoutViewClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationList = inValue ;
  }

  public: inline void setter_setMPreferences (const GALGAS_prefDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreferences = inValue ;
  }

  public: inline void setter_setMXcodeProject (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXcodeProject = inValue ;
  }

  public: inline void setter_setMGraphvizList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGraphvizList = inValue ;
  }

  public: inline void setter_setMAutoLayoutVStackFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutVStackFunctionMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutHStackFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutHStackFunctionMap = inValue ;
  }

  public: inline void setter_setMEnumerationFunctionListAST (const GALGAS_enumerationFunctionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationFunctionListAST = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Native constructor
  public: GALGAS_astDeclarationStruct (const GALGAS_declarationListAST & in_mUnifiedDeclarationList,
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
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astDeclarationStruct extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astDeclarationStruct constructor_new (const class GALGAS_declarationListAST & inOperand0,
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
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astDeclarationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractDeclarationAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractDeclarationAST_2D_weak (const class GALGAS_abstractDeclarationAST & inSource) ;

  public: GALGAS_abstractDeclarationAST_2D_weak & operator = (const class GALGAS_abstractDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractDeclarationAST bang_abstractDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                        class GALGAS_declarationPrecedenceGraph & ioArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (const class cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_lstring (*enterExtensionGetter_abstractDeclarationAST_nodeKey) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_nodeKey (const int32_t inClassIndex,
                                   enterExtensionGetter_abstractDeclarationAST_nodeKey inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_nodeKey (const class cPtr_abstractDeclarationAST * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                    class GALGAS_semanticContext & ioArgument0,
                                                                                    class GALGAS_generationStruct & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_firstAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @generationStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_generationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_validationStubRoutineListForGeneration mProperty_mValidationStubRoutineListForGeneration ;
  public: inline GALGAS_validationStubRoutineListForGeneration readProperty_mValidationStubRoutineListForGeneration (void) const {
    return mProperty_mValidationStubRoutineListForGeneration ;
  }

  public: GALGAS_fileGenerationList mProperty_mFileGenerationList ;
  public: inline GALGAS_fileGenerationList readProperty_mFileGenerationList (void) const {
    return mProperty_mFileGenerationList ;
  }

  public: GALGAS_entityListForGeneratingEBManagedObjectContext mProperty_mEntityListForGeneration ;
  public: inline GALGAS_entityListForGeneratingEBManagedObjectContext readProperty_mEntityListForGeneration (void) const {
    return mProperty_mEntityListForGeneration ;
  }

  public: GALGAS_bool mProperty_mGenerateEBManagedXibDocumentSwift ;
  public: inline GALGAS_bool readProperty_mGenerateEBManagedXibDocumentSwift (void) const {
    return mProperty_mGenerateEBManagedXibDocumentSwift ;
  }

  public: GALGAS_bool mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  public: inline GALGAS_bool readProperty_mGenerateEBManagedAutoLayoutDocumentSwift (void) const {
    return mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  }

  public: GALGAS_stringset mProperty_mNeededOutletClasses ;
  public: inline GALGAS_stringset readProperty_mNeededOutletClasses (void) const {
    return mProperty_mNeededOutletClasses ;
  }

  public: GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: inline GALGAS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const {
    return mProperty_mMainXibDescriptorList ;
  }

  public: GALGAS_selectionControllerForGeneration mProperty_mSelectionControllerListForGeneration ;
  public: inline GALGAS_selectionControllerForGeneration readProperty_mSelectionControllerListForGeneration (void) const {
    return mProperty_mSelectionControllerListForGeneration ;
  }

  public: GALGAS_stringlist mProperty_mPropertyClassList ;
  public: inline GALGAS_stringlist readProperty_mPropertyClassList (void) const {
    return mProperty_mPropertyClassList ;
  }

  public: GALGAS_transientExternTypeList mProperty_mTransientPropertyTypeList ;
  public: inline GALGAS_transientExternTypeList readProperty_mTransientPropertyTypeList (void) const {
    return mProperty_mTransientPropertyTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_generationStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_generationStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValidationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValidationStubRoutineListForGeneration = inValue ;
  }

  public: inline void setter_setMFileGenerationList (const GALGAS_fileGenerationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileGenerationList = inValue ;
  }

  public: inline void setter_setMEntityListForGeneration (const GALGAS_entityListForGeneratingEBManagedObjectContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntityListForGeneration = inValue ;
  }

  public: inline void setter_setMGenerateEBManagedXibDocumentSwift (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateEBManagedXibDocumentSwift = inValue ;
  }

  public: inline void setter_setMGenerateEBManagedAutoLayoutDocumentSwift (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = inValue ;
  }

  public: inline void setter_setMNeededOutletClasses (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeededOutletClasses = inValue ;
  }

  public: inline void setter_setMMainXibDescriptorList (const GALGAS_mainXibDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainXibDescriptorList = inValue ;
  }

  public: inline void setter_setMSelectionControllerListForGeneration (const GALGAS_selectionControllerForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectionControllerListForGeneration = inValue ;
  }

  public: inline void setter_setMPropertyClassList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyClassList = inValue ;
  }

  public: inline void setter_setMTransientPropertyTypeList (const GALGAS_transientExternTypeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTransientPropertyTypeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_generationStruct (void) ;

//--------------------------------- Native constructor
  public: GALGAS_generationStruct (const GALGAS_validationStubRoutineListForGeneration & in_mValidationStubRoutineListForGeneration,
                                   const GALGAS_fileGenerationList & in_mFileGenerationList,
                                   const GALGAS_entityListForGeneratingEBManagedObjectContext & in_mEntityListForGeneration,
                                   const GALGAS_bool & in_mGenerateEBManagedXibDocumentSwift,
                                   const GALGAS_bool & in_mGenerateEBManagedAutoLayoutDocumentSwift,
                                   const GALGAS_stringset & in_mNeededOutletClasses,
                                   const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                   const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration,
                                   const GALGAS_stringlist & in_mPropertyClassList,
                                   const GALGAS_transientExternTypeList & in_mTransientPropertyTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_generationStruct extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_generationStruct constructor_new (const class GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                                const class GALGAS_fileGenerationList & inOperand1,
                                                                const class GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                                const class GALGAS_bool & inOperand3,
                                                                const class GALGAS_bool & inOperand4,
                                                                const class GALGAS_stringset & inOperand5,
                                                                const class GALGAS_mainXibDescriptorList & inOperand6,
                                                                const class GALGAS_selectionControllerForGeneration & inOperand7,
                                                                const class GALGAS_stringlist & inOperand8,
                                                                const class GALGAS_transientExternTypeList & inOperand9
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_generationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                     class GALGAS_semanticContext & ioArgument0,
                                                                                     class GALGAS_generationStruct & ioArgument1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_secondAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                    class GALGAS_semanticContext & ioArgument0,
                                                                                    class GALGAS_generationStruct & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_thirdAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                     class GALGAS_semanticContext & ioArgument0,
                                                                                     class GALGAS_generationStruct & ioArgument1,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_fourthAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (const class cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_transientClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientClassDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_transientClassDeclarationAST_2D_weak (const class GALGAS_transientClassDeclarationAST & inSource) ;

  public: GALGAS_transientClassDeclarationAST_2D_weak & operator = (const class GALGAS_transientClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_transientClassDeclarationAST bang_transientClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientClassDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumerationDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumerationDeclarationAST_2D_weak (const class GALGAS_enumerationDeclarationAST & inSource) ;

  public: GALGAS_enumerationDeclarationAST_2D_weak & operator = (const class GALGAS_enumerationDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumerationDeclarationAST bang_enumerationDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumForGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_enumForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumForGeneration (const class cPtr_enumForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mEnumName (void) const ;

  public: class GALGAS_lstringlist readProperty_mEnumConstantList (void) const ;

  public: class GALGAS_enumFuncMap readProperty_mEnumFuncMap (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumForGeneration extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                 const class GALGAS_lstringlist & inOperand1,
                                                                 const class GALGAS_enumFuncMap & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEnumConstantList (class GALGAS_lstringlist inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumFuncMap (class GALGAS_enumFuncMap inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumName (class GALGAS_string inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumForGeneration : public cPtr_abstractFileGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mEnumName ;
  public: GALGAS_lstringlist mProperty_mEnumConstantList ;
  public: GALGAS_enumFuncMap mProperty_mEnumFuncMap ;

//--- Constructor
  public: cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                  const GALGAS_lstringlist & in_mEnumConstantList,
                                  const GALGAS_enumFuncMap & in_mEnumFuncMap
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumForGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumForGeneration_2D_weak (const class GALGAS_enumForGeneration & inSource) ;

  public: GALGAS_enumForGeneration_2D_weak & operator = (const class GALGAS_enumForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumForGeneration bang_enumForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_atomicClassDeclarationAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_atomicClassDeclarationAST (const class cPtr_atomicClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_typeKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_typeKind & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_typeKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicClassDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_typeKind mProperty_mKind ;

//--- Constructor
  public: cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_typeKind & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicClassDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_atomicClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_atomicClassDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_atomicClassDeclarationAST_2D_weak (const class GALGAS_atomicClassDeclarationAST & inSource) ;

  public: GALGAS_atomicClassDeclarationAST_2D_weak & operator = (const class GALGAS_atomicClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_atomicClassDeclarationAST bang_atomicClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicClassDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_entityDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_entityDeclarationAST_2D_weak (const class GALGAS_entityDeclarationAST & inSource) ;

  public: GALGAS_entityDeclarationAST_2D_weak & operator = (const class GALGAS_entityDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_entityDeclarationAST bang_entityDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2D_weak ;

