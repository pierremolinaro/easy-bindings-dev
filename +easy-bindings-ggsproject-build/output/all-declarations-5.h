#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'easyBindings_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_easyBindings_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_action_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GALGAS_stringset & ioArgument0,
                                                                      class GALGAS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GALGAS_lstring constinArgument0,
                                                                                  class GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                         class GALGAS_lstring & outArgument2,
                                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_ (class GALGAS_bindingOptionList & outArgument0,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                    class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_ (class GALGAS_stringset & ioArgument0,
                                                               class GALGAS_astComputedViewInstruction & outArgument1,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                         const class GALGAS_lstring constinArgument1,
                                                         class GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                         class GALGAS_astDeclarationStruct & ioArgument3,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_ (class GALGAS_abstractDefaultValue & outArgument0,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_ (class GALGAS_externSwiftDelegateList & ioArgument0,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_ (class GALGAS_externSwiftFunctionList & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_ (class GALGAS_mainXibDescriptorList & ioArgument0,
                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_ (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_ (class GALGAS_observablePropertyAST & outArgument0,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_ (class GALGAS_tableValueBinding & outArgument0,
                                                 class GALGAS_runActionDescriptor & outArgument1,
                                                 class GALGAS_multipleBindingDescriptor & outArgument2,
                                                 class GALGAS_multipleBindingDescriptor & outArgument3,
                                                 class GALGAS_graphicController & outArgument4,
                                                 class GALGAS_regularBindingList & outArgument5,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_ (class GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                              class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_ (class GALGAS_outletDeclarationList & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                               class GALGAS_simpleStoredPropertyList & ioArgument1,
                                                               class GALGAS_stringset & ioArgument2,
                                                               class GALGAS_astDeclarationStruct & ioArgument3,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_ (class GALGAS_astViewDeclarationList & ioArgument0,
                                                            class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                               class GALGAS_location & outArgument1,
                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                      class GALGAS_stringset & ioArgument1,
                                                      class GALGAS_astDeclarationStruct & ioArgument2,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                     class GALGAS_astDeclarationStruct & ioArgument1,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                        const class GALGAS_lstring constinArgument1,
                                                        class GALGAS_astDeclarationStruct & ioArgument2,
                                                        class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GALGAS_stringset & ioArgument0,
                                                                   class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_ (class GALGAS_stringset & ioArgument0,
                                                   class GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_ (class GALGAS_bool inArgument0,
                                                           class GALGAS_stringset & ioArgument1,
                                                           class GALGAS_astNewStackViewDeclarationList & ioArgument2,
                                                           class GALGAS_astViewInstructionList & ioArgument3,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_ (class GALGAS_lstring & ioArgument0,
                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_parse (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                   GALGAS_location & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i3_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                         Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_ (const GALGAS_lstring constinArgument0,
                                                                                              GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                                              GALGAS_lstring & outArgument2,
                                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_ (const GALGAS_lstring constinArgument0,
                                                                                                       GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_ (GALGAS_stringset & ioArgument0,
                                                                                           GALGAS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_ (GALGAS_bool inArgument0,
                                                                                GALGAS_stringset & ioArgument1,
                                                                                GALGAS_astNewStackViewDeclarationList & ioArgument2,
                                                                                GALGAS_astViewInstructionList & ioArgument3,
                                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i19_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i20_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_ (GALGAS_stringset & ioArgument0,
                                                                                    GALGAS_astComputedViewInstruction & outArgument1,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_ (GALGAS_stringset & ioArgument0,
                                                                                        GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_ (GALGAS_stringset & ioArgument0,
                                                                        GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i24_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_ (GALGAS_outletDeclarationList & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_ (GALGAS_tableValueBinding & outArgument0,
                                                                      GALGAS_runActionDescriptor & outArgument1,
                                                                      GALGAS_multipleBindingDescriptor & outArgument2,
                                                                      GALGAS_multipleBindingDescriptor & outArgument3,
                                                                      GALGAS_graphicController & outArgument4,
                                                                      GALGAS_regularBindingList & outArgument5,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i28_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_ (GALGAS_observablePropertyAST & outArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i29_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i31_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_ (const GALGAS_lstring constinArgument0,
                                                                             const GALGAS_lstring constinArgument1,
                                                                             GALGAS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i33_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_ (const GALGAS_lstring constinArgument0,
                                                                                    GALGAS_simpleStoredPropertyList & ioArgument1,
                                                                                    GALGAS_stringset & ioArgument2,
                                                                                    GALGAS_astDeclarationStruct & ioArgument3,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_ (const GALGAS_lstring constinArgument0,
                                                                          GALGAS_astDeclarationStruct & ioArgument1,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_ (const GALGAS_lstring constinArgument0,
                                                                           GALGAS_stringset & ioArgument1,
                                                                           GALGAS_astDeclarationStruct & ioArgument2,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i37_ (GALGAS_lstringlist & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i37_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i37_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_ (GALGAS_bindingOptionList & outArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i46_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i46_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i46_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i47_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                              GALGAS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i48_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i49_ (GALGAS_abstractDefaultValue & outArgument0,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i49_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i49_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i50_ (GALGAS_lstring & ioArgument0,
                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i50_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i50_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i51_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i51_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i51_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_parse (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR easyBindings_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_action_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_action_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_action_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GALGAS_stringset & ioArgument0,
                                                                   GALGAS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GALGAS_lstring inArgument0,
                                                                               GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GALGAS_lstring inArgument0,
                                                                      GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                      GALGAS_lstring & outArgument2,
                                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public: virtual void nt_binding_5F_option_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_binding_5F_option_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList & outArgument0,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingComparison_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingComparison_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingExpression_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingExpression_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingOperand_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingOperand_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public: virtual void nt_booleanMultipleBindingTerm_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_booleanMultipleBindingTerm_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                 Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_computed_5F_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_computed_5F_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_computed_5F_view_5F_instruction_ (GALGAS_stringset & ioArgument0,
                                                            GALGAS_astComputedViewInstruction & outArgument1,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_controller_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_controller_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_controller_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                      const GALGAS_lstring inArgument1,
                                                      GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                      GALGAS_astDeclarationStruct & ioArgument3,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_document_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_document_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_document_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_entity_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_entity_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_enum_5F_function_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_enum_5F_function_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public: virtual void nt_explicit_5F_value_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_explicit_5F_value_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_value_ (GALGAS_abstractDefaultValue & outArgument0,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_delegate_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_delegate_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
  public: virtual void nt_extern_5F_swift_5F_func_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_func_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_graphviz_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_graphviz_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
  public: virtual void nt_main_5F_xib_5F_line_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_main_5F_xib_5F_line_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public: virtual void nt_observable_5F_property_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_observable_5F_property_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_observable_5F_property_ (GALGAS_observablePropertyAST & outArgument0,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_binding_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_ (GALGAS_tableValueBinding & outArgument0,
                                              GALGAS_runActionDescriptor & outArgument1,
                                              GALGAS_multipleBindingDescriptor & outArgument2,
                                              GALGAS_multipleBindingDescriptor & outArgument3,
                                              GALGAS_graphicController & outArgument4,
                                              GALGAS_regularBindingList & outArgument5,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                           Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_outlet_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_outlet_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_preferences_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_preferences_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_stored_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_stored_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                            GALGAS_simpleStoredPropertyList & ioArgument1,
                                                            GALGAS_stringset & ioArgument2,
                                                            GALGAS_astDeclarationStruct & ioArgument3,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_stack_5F_view_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_stack_5F_view_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_stack_5F_view_5F_declaration_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                         Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_astDeclarationStruct & ioArgument0,
                                            GALGAS_location & outArgument1,
                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_astDeclarationStruct & ioArgument0,
                                                  GALGAS_location & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_astDeclarationStruct & ioArgument0,
                                                    GALGAS_location & outArgument1
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toMany_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_toMany_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toMany_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                   GALGAS_stringset & ioArgument1,
                                                   GALGAS_astDeclarationStruct & ioArgument2,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public: virtual void nt_toOne_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_toOne_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toOne_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                  GALGAS_astDeclarationStruct & ioArgument1,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_transient_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_transient_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_transient_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                     const GALGAS_lstring inArgument1,
                                                     GALGAS_astDeclarationStruct & ioArgument2,
                                                     Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GALGAS_stringset & ioArgument0,
                                                                GALGAS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_ (GALGAS_stringset & ioArgument0,
                                                GALGAS_astAbstractViewInstructionDeclaration & outArgument1,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_view_5F_instruction_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_view_5F_instruction_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_5F_list_ (GALGAS_bool inArgument0,
                                                        GALGAS_stringset & ioArgument1,
                                                        GALGAS_astNewStackViewDeclarationList & ioArgument2,
                                                        GALGAS_astViewInstructionList & ioArgument3,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
  public: virtual void nt_xcode_5F_project_parse (Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_xcode_5F_project_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_xcode_5F_project_ (GALGAS_lstring & ioArgument0,
                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

  public: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
// Phase 1: @astDeclarationStruct struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_astDeclarationStruct extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_astDeclarationStruct class_func_new (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_astDeclarationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_astDeclarationStruct class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (class cPtr_abstractDeclarationAST * inObject,
                                                 class GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_nodeKey (const class cPtr_abstractDeclarationAST * inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GALGAS_semanticContext & io_ioSemanticContext,
                                             class GALGAS_generationStruct & io_ioGeneration,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GALGAS_semanticContext & io_ioSemanticContext,
                                              class GALGAS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                             class GALGAS_semanticContext & io_ioSemanticContext,
                                             class GALGAS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (class cPtr_abstractDeclarationAST * inObject,
                                              class GALGAS_semanticContext & io_ioSemanticContext,
                                              class GALGAS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumForGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_enumForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumForGeneration (const class cPtr_enumForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mEnumName (void) const ;

  public: class GALGAS_lstringlist readProperty_mEnumConstantList (void) const ;

  public: class GALGAS_enumFuncMap readProperty_mEnumFuncMap (void) const ;

  public: class GALGAS_bool readProperty_mCaseIterable (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumForGeneration extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumForGeneration class_func_new (const class GALGAS_string & inOperand0,
                                                                const class GALGAS_lstringlist & inOperand1,
                                                                const class GALGAS_enumFuncMap & inOperand2,
                                                                const class GALGAS_bool & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mEnumName ;
  public: GALGAS_lstringlist mProperty_mEnumConstantList ;
  public: GALGAS_enumFuncMap mProperty_mEnumFuncMap ;
  public: GALGAS_bool mProperty_mCaseIterable ;

//--- Constructor
  public: cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                  const GALGAS_lstringlist & in_mEnumConstantList,
                                  const GALGAS_enumFuncMap & in_mEnumFuncMap,
                                  const GALGAS_bool & in_mCaseIterable
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumForGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumForGeneration_2D_weak (const class GALGAS_enumForGeneration & inSource) ;

  public: GALGAS_enumForGeneration_2D_weak & operator = (const class GALGAS_enumForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumForGeneration bang_enumForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @entityStrongReferenceGraph graph
//
//--------------------------------------------------------------------------------------------------

class GALGAS_entityStrongReferenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GALGAS_entityStrongReferenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_entityStrongReferenceGraph extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_entityStrongReferenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                class GALGAS_string inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_stringlist & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_stringlist & outArgument0,
                                                                  class GALGAS_lstringlist & outArgument1,
                                                                  class GALGAS_stringlist & outArgument2,
                                                                  class GALGAS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_stringlist & outArgument0,
                                                               class GALGAS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_stringlist & outArgument0,
                                                             class GALGAS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_stringlist & outArgument0,
                                                        class GALGAS_lstringlist & outArgument1,
                                                        class GALGAS_stringlist & outArgument2,
                                                        class GALGAS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                const class GALGAS_stringset & constinOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_entityStrongReferenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_entityStrongReferenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                             const class GALGAS_stringset & constinOperand1,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_entityStrongReferenceGraph class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;

