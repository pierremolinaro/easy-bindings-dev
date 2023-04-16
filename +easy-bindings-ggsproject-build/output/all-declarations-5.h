#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

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

  protected: virtual void nt_action_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GALGAS_stringset & ioArgument0,
                                                                      class GALGAS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GALGAS_lstring constinArgument0,
                                                                                  class GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                         class GALGAS_lstring & outArgument2,
                                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_ (class GALGAS_bindingOptionList & outArgument0,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_ (class GALGAS_stringset & ioArgument0,
                                                               class GALGAS_astComputedViewInstruction & outArgument1,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                         const class GALGAS_lstring constinArgument1,
                                                         class GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                         class GALGAS_astDeclarationStruct & ioArgument3,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_ (class GALGAS_abstractDefaultValue & outArgument0,
                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_ (class GALGAS_externSwiftDelegateList & ioArgument0,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_ (class GALGAS_externSwiftFunctionList & ioArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_ (class GALGAS_mainXibDescriptorList & ioArgument0,
                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_ (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_ (class GALGAS_observablePropertyAST & outArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_ (class GALGAS_tableValueBinding & outArgument0,
                                                 class GALGAS_runActionDescriptor & outArgument1,
                                                 class GALGAS_multipleBindingDescriptor & outArgument2,
                                                 class GALGAS_multipleBindingDescriptor & outArgument3,
                                                 class GALGAS_graphicController & outArgument4,
                                                 class GALGAS_regularBindingList & outArgument5,
                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_ (class GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                              class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_ (class GALGAS_outletDeclarationList & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                               class GALGAS_simpleStoredPropertyList & ioArgument1,
                                                               class GALGAS_stringset & ioArgument2,
                                                               class GALGAS_astDeclarationStruct & ioArgument3,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_ (class GALGAS_astViewDeclarationList & ioArgument0,
                                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                               class GALGAS_location & outArgument1,
                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                      class GALGAS_stringset & ioArgument1,
                                                      class GALGAS_astDeclarationStruct & ioArgument2,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                     class GALGAS_astDeclarationStruct & ioArgument1,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                        const class GALGAS_lstring constinArgument1,
                                                        class GALGAS_astDeclarationStruct & ioArgument2,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GALGAS_stringset & ioArgument0,
                                                                   class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_ (class GALGAS_stringset & ioArgument0,
                                                   class GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_ (class GALGAS_bool inArgument0,
                                                           class GALGAS_stringset & ioArgument1,
                                                           class GALGAS_astNewStackViewDeclarationList & ioArgument2,
                                                           class GALGAS_astViewInstructionList & ioArgument3,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_ (class GALGAS_lstring & ioArgument0,
                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_indexing (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                   GALGAS_location & outArgument1,
                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_ (const GALGAS_lstring constinArgument0,
                                                                                              GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                                              GALGAS_lstring & outArgument2,
                                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_ (const GALGAS_lstring constinArgument0,
                                                                                                       GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_ (GALGAS_stringset & ioArgument0,
                                                                                           GALGAS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_ (GALGAS_bool inArgument0,
                                                                                GALGAS_stringset & ioArgument1,
                                                                                GALGAS_astNewStackViewDeclarationList & ioArgument2,
                                                                                GALGAS_astViewInstructionList & ioArgument3,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_ (GALGAS_stringset & ioArgument0,
                                                                                    GALGAS_astComputedViewInstruction & outArgument1,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_ (GALGAS_stringset & ioArgument0,
                                                                                        GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_ (GALGAS_outletDeclarationList & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_ (GALGAS_tableValueBinding & outArgument0,
                                                                      GALGAS_runActionDescriptor & outArgument1,
                                                                      GALGAS_multipleBindingDescriptor & outArgument2,
                                                                      GALGAS_multipleBindingDescriptor & outArgument3,
                                                                      GALGAS_graphicController & outArgument4,
                                                                      GALGAS_regularBindingList & outArgument5,
                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_ (GALGAS_observablePropertyAST & outArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_ (const GALGAS_lstring constinArgument0,
                                                                                    GALGAS_simpleStoredPropertyList & ioArgument1,
                                                                                    GALGAS_stringset & ioArgument2,
                                                                                    GALGAS_astDeclarationStruct & ioArgument3,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_ (const GALGAS_lstring constinArgument0,
                                                                          GALGAS_astDeclarationStruct & ioArgument1,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_ (const GALGAS_lstring constinArgument0,
                                                                           GALGAS_stringset & ioArgument1,
                                                                           GALGAS_astDeclarationStruct & ioArgument2,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i37_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i37_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i37_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_ (GALGAS_bindingOptionList & outArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i46_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i46_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i46_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i49_ (GALGAS_abstractDefaultValue & outArgument0,
                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i49_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i49_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i50_ (GALGAS_lstring & ioArgument0,
                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i50_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i50_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i51_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i51_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i51_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_indexing (C_Lexique_easyBindings_5F_lexique * inLexique) ;



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


} ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR easyBindings_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_action_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_action_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GALGAS_stringset & ioArgument0,
                                                                   GALGAS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GALGAS_lstring inArgument0,
                                                                               GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_class_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GALGAS_lstring inArgument0,
                                                                      GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                      GALGAS_lstring & outArgument2,
                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public: virtual void nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_binding_5F_option_5F_list_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList & outArgument0,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingComparison_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingComparison_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingExpression_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingOperand_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingTerm_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_class_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_computed_5F_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_computed_5F_view_5F_instruction_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_computed_5F_view_5F_instruction_ (GALGAS_stringset & ioArgument0,
                                                            GALGAS_astComputedViewInstruction & outArgument1,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_controller_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_controller_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                      const GALGAS_lstring inArgument1,
                                                      GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                      GALGAS_astDeclarationStruct & ioArgument3,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_document_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_document_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_entity_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_function_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_function_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_explicit_5F_value_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_value_ (GALGAS_abstractDefaultValue & outArgument0,
                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_delegate_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_delegate_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_func_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_func_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_graphviz_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_graphviz_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_5F_line_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public: virtual void nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_observable_5F_property_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_observable_5F_property_ (GALGAS_observablePropertyAST & outArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_binding_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

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

//--- indexing
  public: virtual void nt_outlet_5F_binding_5F_specification_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_class_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_preferences_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_stored_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                            GALGAS_simpleStoredPropertyList & ioArgument1,
                                                            GALGAS_stringset & ioArgument2,
                                                            GALGAS_astDeclarationStruct & ioArgument3,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_stack_5F_view_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_stack_5F_view_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_stack_5F_view_5F_declaration_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

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

//--- indexing
  public: virtual void nt_toMany_5F_relationship_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toMany_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                   GALGAS_stringset & ioArgument1,
                                                   GALGAS_astDeclarationStruct & ioArgument2,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_toOne_5F_relationship_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toOne_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                  GALGAS_astDeclarationStruct & ioArgument1,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_transient_5F_declaration_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_transient_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                     const GALGAS_lstring inArgument1,
                                                     GALGAS_astDeclarationStruct & ioArgument2,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GALGAS_stringset & ioArgument0,
                                                                GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_instruction_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_ (GALGAS_stringset & ioArgument0,
                                                GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_instruction_5F_list_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_5F_list_ (GALGAS_bool inArgument0,
                                                        GALGAS_stringset & ioArgument1,
                                                        GALGAS_astNewStackViewDeclarationList & ioArgument2,
                                                        GALGAS_astViewInstructionList & ioArgument3,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
  public: virtual void nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_xcode_5F_project_indexing (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

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
} ;

//----------------------------------------------------------------------------------------------------------------------
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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astDeclarationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_astDeclarationStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (class cPtr_abstractDeclarationAST * inObject,
                                                 class GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_nodeKey (const class cPtr_abstractDeclarationAST * inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GALGAS_semanticContext & io_ioSemanticContext,
                                             class GALGAS_generationStruct & io_ioGeneration,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GALGAS_semanticContext & io_ioSemanticContext,
                                              class GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GALGAS_semanticContext & io_ioSemanticContext,
                                             class GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GALGAS_semanticContext & io_ioSemanticContext,
                                              class GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Constructor from pointer
  public: GALGAS_enumForGeneration (const class cPtr_enumForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mEnumName (void) const ;

  public: class GALGAS_lstringlist readProperty_mEnumConstantList (void) const ;

  public: class GALGAS_enumFuncMap readProperty_mEnumFuncMap (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration_2D_weak ;

