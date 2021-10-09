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

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_ (const GALGAS_lstring constinArgument0,
                                                                                              GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                                              GALGAS_lstring & outArgument2,
                                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_ (const GALGAS_lstring constinArgument0,
                                                                                                       GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i17_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i19_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i19_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_ (GALGAS_bool inArgument0,
                                                                                GALGAS_astViewInstructionList & ioArgument1,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i21_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i21_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i22_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i22_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_ (GALGAS_astComputedViewInstruction & outArgument0,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

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
// Phase 1: @arrayControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_arrayControllerDeclarationAST (void) ;

//---
  public: inline const class cPtr_arrayControllerDeclarationAST * ptr (void) const { return (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundModelAST getter_mModel (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundModelAST getter_mModel (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMModel (GALGAS_arrayControllerBoundModelAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedHorizontalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedHorizontalViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public: GALGAS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedHorizontalViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_astComputedHorizontalViewDeclaration * ptr (void) const { return (const cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_astViewInstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GALGAS_astViewInstructionList & in_mInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_astViewInstructionList inValue COMMA_LOCATION_ARGS) ;
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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAutoLayoutViewClassName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewInstructionParameterList getter_mParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMParameterList (GALGAS_astAutoLayoutViewInstructionParameterList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_tableValueBinding getter_mTableValueBinding (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTableValueBinding (GALGAS_tableValueBinding inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_runActionDescriptor getter_mRunActionDescriptor (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRunActionDescriptor (GALGAS_runActionDescriptor inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptor (GALGAS_multipleBindingDescriptor inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptor (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptor (GALGAS_multipleBindingDescriptor inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_graphicController getter_mGraphicController (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMGraphicController (GALGAS_graphicController inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_regularBindingList getter_mRegularBindingList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingList (GALGAS_regularBindingList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConfiguratorName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOutletName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOutletName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHorizontalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHorizontalStackViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public: GALGAS_astHorizontalStackViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astHorizontalStackViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_astHorizontalStackViewDeclaration * ptr (void) const { return (const cPtr_astHorizontalStackViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_astHorizontalStackViewDeclaration (const cPtr_astHorizontalStackViewDeclaration * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;

//--- Constructor
  public: cPtr_astHorizontalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astLocalViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astLocalViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public: GALGAS_astLocalViewInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astLocalViewInstruction constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_astLocalViewInstruction * ptr (void) const { return (const cPtr_astLocalViewInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLocalView (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_lstring mProperty_mLocalView ;

//--- Constructor
  public: cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLocalView (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMLocalView (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astStackViewReferenceInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astStackViewReferenceInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public: GALGAS_astStackViewReferenceInstructionDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astStackViewReferenceInstructionDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_astStackViewReferenceInstructionDeclaration * ptr (void) const { return (const cPtr_astStackViewReferenceInstructionDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_astStackViewReferenceInstructionDeclaration (const cPtr_astStackViewReferenceInstructionDeclaration * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStackViewName (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_lstring mProperty_mStackViewName ;

//--- Constructor
  public: cPtr_astStackViewReferenceInstructionDeclaration (const GALGAS_lstring & in_mStackViewName
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStackViewName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStackViewName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_atomicPropertyDeclarationAST (void) ;

//---
  public: inline const class cPtr_atomicPropertyDeclarationAST * ptr (void) const { return (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValue (GALGAS_abstractDefaultValue inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_autoLayoutDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_autoLayoutDocumentDeclarationAST * ptr (void) const { return (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_mAutoLayoutToolbarItemList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCustomSuperClassName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMainViewName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutOutletLinkerList getter_mOutletLinkerList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_mViewDeclarationList (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMainViewName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMMainViewName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_astViewDeclarationList getter_mViewDeclarationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (GALGAS_astViewDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutToolbarItemList getter_mAutoLayoutToolbarItemList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemList (GALGAS_astAutoLayoutToolbarItemList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mCustomSuperClassName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutOutletLinkerList getter_mOutletLinkerList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOutletLinkerList (GALGAS_astAutoLayoutOutletLinkerList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_autoLayoutTableViewControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_autoLayoutTableViewControllerDeclarationAST * ptr (void) const { return (const cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutTableViewControllerDeclarationAST (const cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutTableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsRoot (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (GALGAS_autoLayoutTableViewControllerBoundColumnListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutTableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (GALGAS_autoLayoutTableViewControllerAttributListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_autoLayoutViewClassDeclarationAST * ptr (void) const { return (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMUserDefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasRunAction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasEnabled (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasHidden (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutClassParameterList getter_mParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMParameterList (GALGAS_autoLayoutClassParameterList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMap (GALGAS_astAutoLayoutViewFunctionMap inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public: GALGAS_boolAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_boolAsDefaultValue * ptr (void) const { return (const cPtr_boolAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lbool getter_mValue (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_lbool mProperty_mValue ;

//--- Constructor
  public: cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lbool getter_mValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lbool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedPropertyDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_computedPropertyDeclarationAST * ptr (void) const { return (const cPtr_computedPropertyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComputedPropertyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComputedPropertyTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mComputedPropertyTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mComputedPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_observablePropertyList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @doubleAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_doubleAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public: GALGAS_doubleAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_doubleAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_doubleAsDefaultValue * ptr (void) const { return (const cPtr_doubleAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_ldouble mProperty_mValue ;

//--- Constructor
  public: cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_ldouble inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_entityDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_entityDeclarationAST * ptr (void) const { return (const cPtr_entityDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGraphicOptionArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mObsoleteEntityNames (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredPropertyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList getter_mSimpleStoredPropertyList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSimpleStoredPropertyList (GALGAS_simpleStoredPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSignatureList (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mObsoleteEntityNames (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNames (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mGraphicOptionArray (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMGraphicOptionArray (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_enumerationDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_enumerationDeclarationAST * ptr (void) const { return (const cPtr_enumerationDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_lstringlist mProperty_mEnumConstantNameList ;

//--- Constructor
  public: cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_lstringlist & in_mEnumConstantNameList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEnumConstantNameList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @identifierAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_identifierAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public: GALGAS_identifierAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_identifierAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_identifierAsDefaultValue * ptr (void) const { return (const cPtr_identifierAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public: cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public: GALGAS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalIntMultipleBindingExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_literalIntMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_luint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_outletClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_outletClassDeclarationAST * ptr (void) const { return (const cPtr_outletClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMUserDefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasRunAction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasEnabled (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasHidden (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public: GALGAS_prefsAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefsAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_prefsAsDefaultValue * ptr (void) const { return (const cPtr_prefsAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefPropertyName (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_lstring mProperty_mPrefPropertyName ;

//--- Constructor
  public: cPtr_prefsAsDefaultValue (const GALGAS_lstring & in_mPrefPropertyName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPrefPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMPrefPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_proxyDeclarationAST (void) ;

//---
  public: inline const class cPtr_proxyDeclarationAST * ptr (void) const { return (const cPtr_proxyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProxyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProxyTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMProxyKind (GALGAS_proxyKind inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mProxyTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMProxyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mProxyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMProxyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_selectionControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectionControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_selectionControllerDeclarationAST * ptr (void) const { return (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectionEntityName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSelectionControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMModelControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSelectionEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSelectionEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @stringAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public: GALGAS_stringAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_stringAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_stringAsDefaultValue * ptr (void) const { return (const cPtr_stringAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public: cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_tableViewControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tableViewControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_tableViewControllerDeclarationAST * ptr (void) const { return (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_tableViewControllerDeclarationAST (const cPtr_tableViewControllerDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsRoot (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_tableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (GALGAS_tableViewControllerBoundColumnListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_tableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (GALGAS_tableViewControllerAttributListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_toManyRelationshipAST (void) ;

//---
  public: inline const class cPtr_toManyRelationshipAST * ptr (void) const { return (const cPtr_toManyRelationshipAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mCustomStore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipOptionAST getter_mOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyRelationshipName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyRelationshipName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMToManyRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_toManyRelationshipOptionAST getter_mOption (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOption (GALGAS_toManyRelationshipOptionAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mCustomStore (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMCustomStore (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOneRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneRelationshipAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_toOneRelationshipAST (void) ;

//---
  public: inline const class cPtr_toOneRelationshipAST * ptr (void) const { return (const cPtr_toOneRelationshipAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_transientClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_transientClassDeclarationAST * ptr (void) const { return (const cPtr_transientClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsClass (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_bool mProperty_mIsClass ;

//--- Constructor
  public: cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                             const GALGAS_bool & in_mIsClass
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsClass (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsClass (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_transientDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_transientDeclarationAST * ptr (void) const { return (const cPtr_transientDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTransientTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTransientName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_observablePropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsOverriding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xibDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xibDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_xibDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xibDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_xibDocumentDeclarationAST * ptr (void) const { return (const cPtr_xibDocumentDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_xibDocumentDeclarationAST (const cPtr_xibDocumentDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_xibDocumentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xibDocumentDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_outletDeclarationList & inOperand2,
                                                                         const class GALGAS_lstringlist & inOperand3,
                                                                         const class GALGAS_arrayControllerBindingListAST & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xibDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (class GALGAS_arrayControllerBindingListAST inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (class GALGAS_outletDeclarationList inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
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
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public: GALGAS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;

//--- Constructor
  public: cPtr_xibDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_lstring & in_mRootEntityName,
                                          const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                          const GALGAS_lstringlist & in_mActionDeclarationList,
                                          const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue COMMA_LOCATION_ARGS) ;
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

  public: GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;

  public: GALGAS_lstringlist mProperty_mActionDeclarationList ;

  public: GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;

  public: GALGAS_stringset mProperty_mSignatureList ;

  public: GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;


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

  public: GALGAS_outletClassBindingSpecificationList mProperty_mBindingSpecificationListMap ;

  public: GALGAS_autoLayoutViewClassBindingSpecificationList mProperty_mAutoLayoutBindingSpecificationList ;

  public: GALGAS_prefDeclaration mProperty_mPreferences ;

  public: GALGAS_lstring mProperty_mXcodeProject ;

  public: GALGAS_lstringlist mProperty_mGraphvizList ;

  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;

  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;

  public: GALGAS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_mAutoLayoutBindingSpecificationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutHStackFunctionMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutVStackFunctionMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_mBindingSpecificationListMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_mEnumerationFunctionListAST (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGraphvizList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prefDeclaration getter_mPreferences (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_mUnifiedDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mXcodeProject (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;

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

  public: GALGAS_fileGenerationList mProperty_mFileGenerationList ;

  public: GALGAS_entityListForGeneratingEBManagedObjectContext mProperty_mEntityListForGeneration ;

  public: GALGAS_bool mProperty_mGenerateEBManagedXibDocumentSwift ;

  public: GALGAS_bool mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;

  public: GALGAS_stringset mProperty_mNeededOutletClasses ;

  public: GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;

  public: GALGAS_selectionControllerForGeneration mProperty_mSelectionControllerListForGeneration ;

  public: GALGAS_stringlist mProperty_mPropertyClassList ;

  public: GALGAS_transientExternTypeList mProperty_mTransientPropertyTypeList ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_entityListForGeneratingEBManagedObjectContext getter_mEntityListForGeneration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_mFileGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateEBManagedAutoLayoutDocumentSwift (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateEBManagedXibDocumentSwift (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mNeededOutletClasses (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mPropertyClassList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_mSelectionControllerListForGeneration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_mTransientPropertyTypeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_mValidationStubRoutineListForGeneration (LOCATION_ARGS) const ;


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
// Phase 1: @enumForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumForGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public: GALGAS_enumForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_enumForGeneration * ptr (void) const { return (const cPtr_enumForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumFuncMap getter_mEnumFuncMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumName (LOCATION_ARGS) const ;


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
//--- Attributes
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
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEnumName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mEnumConstantList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEnumConstantList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_enumFuncMap getter_mEnumFuncMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEnumFuncMap (GALGAS_enumFuncMap inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_atomicClassDeclarationAST (void) ;

//---
  public: inline const class cPtr_atomicClassDeclarationAST * ptr (void) const { return (const cPtr_atomicClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mKind (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_typeKind mProperty_mKind ;

//--- Constructor
  public: cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_typeKind & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mKind (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityForGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public: GALGAS_entityForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_entityForGeneration * ptr (void) const { return (const cPtr_entityForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityForGeneration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_propertyGenerationList & inOperand2,
                                                                   const class GALGAS_stringset & inOperand3,
                                                                   const class GALGAS_bool & inOperand4,
                                                                   const class GALGAS_bool & inOperand5,
                                                                   const class GALGAS_stringset & inOperand6,
                                                                   const class GALGAS_externSwiftDelegateList & inOperand7,
                                                                   const class GALGAS_bool & inOperand8,
                                                                   const class GALGAS_bool & inOperand9,
                                                                   const class GALGAS_bool & inOperand10
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCanCopyAndPaste_5F_option (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCannotBeDeleted_5F_option (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntityName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasSubEntity (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverridenTransients (class GALGAS_stringset inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationList (class GALGAS_propertyGenerationList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureSet (class GALGAS_stringset inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mCanCopyAndPaste_5F_option (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mCannotBeDeleted_5F_option (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasSubEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mOverridenTransients (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mPropertyGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureSet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSuperEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityForGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public: GALGAS_string mProperty_mEntityName ;
  public: GALGAS_string mProperty_mSuperEntityName ;
  public: GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: GALGAS_stringset mProperty_mSignatureSet ;
  public: GALGAS_bool mProperty_mIsGraphicEntity ;
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_stringset mProperty_mOverridenTransients ;
  public: GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GALGAS_bool mProperty_mHasSubEntity ;
  public: GALGAS_bool mProperty_mCanCopyAndPaste_5F_option ;
  public: GALGAS_bool mProperty_mCannotBeDeleted_5F_option ;

//--- Constructor
  public: cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                    const GALGAS_string & in_mSuperEntityName,
                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                    const GALGAS_stringset & in_mSignatureSet,
                                    const GALGAS_bool & in_mIsGraphicEntity,
                                    const GALGAS_bool & in_mIsAbstract,
                                    const GALGAS_stringset & in_mOverridenTransients,
                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                    const GALGAS_bool & in_mHasSubEntity,
                                    const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                    const GALGAS_bool & in_mCannotBeDeleted_5F_option
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEntityName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mSuperEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mPropertyGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationList (GALGAS_propertyGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_stringset getter_mSignatureSet (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSignatureSet (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_stringset getter_mOverridenTransients (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOverridenTransients (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasSubEntity (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasSubEntity (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mCanCopyAndPaste_5F_option (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMCanCopyAndPaste_5F_option (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mCannotBeDeleted_5F_option (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMCannotBeDeleted_5F_option (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xibDocumentFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xibDocumentFileGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public: GALGAS_xibDocumentFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xibDocumentFileGeneration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_xibDocumentFileGeneration * ptr (void) const { return (const cPtr_xibDocumentFileGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_xibDocumentFileGeneration (const cPtr_xibDocumentFileGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_xibDocumentFileGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xibDocumentFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_propertyGenerationList & inOperand2,
                                                                         const class GALGAS_decoratedOutletMap & inOperand3,
                                                                         const class GALGAS_actionBindingListForGeneration & inOperand4,
                                                                         const class GALGAS_regularBindingsGenerationList & inOperand5,
                                                                         const class GALGAS_multipleBindingGenerationList & inOperand6,
                                                                         const class GALGAS_tableViewBindingGenerationList & inOperand7,
                                                                         const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand8
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xibDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDocumentName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentPropertyGenearionList (class GALGAS_propertyGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (class GALGAS_ebViewGraphicControllerBindingGenerationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (class GALGAS_decoratedOutletMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_regularBindingsGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (class GALGAS_tableViewBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetActionList (class GALGAS_actionBindingListForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMultipleBindingGenerationList (class GALGAS_multipleBindingGenerationList inArgument0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDocumentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mDocumentPropertyGenearionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mRootEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_mTargetActionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_multipleBindingGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xibDocumentFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xibDocumentFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xibDocumentFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xibDocumentFileGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public: GALGAS_string mProperty_mDocumentName ;
  public: GALGAS_string mProperty_mRootEntityName ;
  public: GALGAS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public: GALGAS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GALGAS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;

//--- Constructor
  public: cPtr_xibDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                          const GALGAS_string & in_mRootEntityName,
                                          const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                          const GALGAS_decoratedOutletMap & in_mOutletMap,
                                          const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                          const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                          const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                          const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                          const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mDocumentName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDocumentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mDocumentPropertyGenearionList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (GALGAS_decoratedOutletMap inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_actionBindingListForGeneration getter_mTargetActionList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_multipleBindingGenerationList getter_multipleBindingGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentFileGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public: GALGAS_autoLayoutDocumentFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentFileGeneration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_autoLayoutDocumentFileGeneration * ptr (void) const { return (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentFileGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_propertyGenerationList & inOperand3,
                                                                                const class GALGAS_decoratedOutletMap & inOperand4,
                                                                                const class GALGAS_autoLayoutOutletMap & inOperand5,
                                                                                const class GALGAS_actionBindingListForGeneration & inOperand6,
                                                                                const class GALGAS_regularBindingsGenerationList & inOperand7,
                                                                                const class GALGAS_multipleBindingGenerationList & inOperand8,
                                                                                const class GALGAS_tableViewBindingGenerationList & inOperand9,
                                                                                const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                const class GALGAS_viewGenerationList & inOperand11,
                                                                                const class GALGAS_autoLayoutToolbarItemGenerationList & inOperand12,
                                                                                const class GALGAS_implicitViewFunctionGenerationList & inOperand13,
                                                                                const class GALGAS_autoLayoutConfiguratorMap & inOperand14,
                                                                                const class GALGAS_string & inOperand15,
                                                                                const class GALGAS_autoLayoutOutletLinkerGenerationList & inOperand16
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletMap (class GALGAS_autoLayoutOutletMap inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemGenerationList (class GALGAS_autoLayoutToolbarItemGenerationList inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorMap (class GALGAS_autoLayoutConfiguratorMap inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentPropertyGenearionList (class GALGAS_propertyGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (class GALGAS_ebViewGraphicControllerBindingGenerationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplicitViewFunctionGenerationList (class GALGAS_implicitViewFunctionGenerationList inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMainViewName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletLinkerGenerationList (class GALGAS_autoLayoutOutletLinkerGenerationList inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (class GALGAS_decoratedOutletMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_regularBindingsGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (class GALGAS_tableViewBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetActionList (class GALGAS_actionBindingListForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (class GALGAS_viewGenerationList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMultipleBindingGenerationList (class GALGAS_multipleBindingGenerationList inArgument0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutOutletMap getter_mAutoLayoutOutletMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutToolbarItemGenerationList getter_mAutoLayoutToolbarItemGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutConfiguratorMap getter_mConfiguratorMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCustomSuperClassName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDocumentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGenerationList getter_mDocumentPropertyGenearionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_implicitViewFunctionGenerationList getter_mImplicitViewFunctionGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mMainViewName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutOutletLinkerGenerationList getter_mOutletLinkerGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mRootEntityName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actionBindingListForGeneration getter_mTargetActionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_viewGenerationList getter_mViewDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_multipleBindingGenerationList getter_multipleBindingGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentFileGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public: GALGAS_string mProperty_mDocumentName ;
  public: GALGAS_string mProperty_mRootEntityName ;
  public: GALGAS_string mProperty_mMainViewName ;
  public: GALGAS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public: GALGAS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;
  public: GALGAS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GALGAS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GALGAS_viewGenerationList mProperty_mViewDeclarationList ;
  public: GALGAS_autoLayoutToolbarItemGenerationList mProperty_mAutoLayoutToolbarItemGenerationList ;
  public: GALGAS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GALGAS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GALGAS_string mProperty_mCustomSuperClassName ;
  public: GALGAS_autoLayoutOutletLinkerGenerationList mProperty_mOutletLinkerGenerationList ;

//--- Constructor
  public: cPtr_autoLayoutDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                 const GALGAS_string & in_mRootEntityName,
                                                 const GALGAS_string & in_mMainViewName,
                                                 const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                 const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                 const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                 const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                 const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                 const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                 const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                 const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                 const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                 const GALGAS_autoLayoutToolbarItemGenerationList & in_mAutoLayoutToolbarItemGenerationList,
                                                 const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                 const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                 const GALGAS_string & in_mCustomSuperClassName,
                                                 const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mDocumentName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDocumentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mRootEntityName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mMainViewName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMMainViewName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_propertyGenerationList getter_mDocumentPropertyGenearionList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedOutletMap getter_mOutletMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (GALGAS_decoratedOutletMap inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutOutletMap getter_mAutoLayoutOutletMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletMap (GALGAS_autoLayoutOutletMap inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_actionBindingListForGeneration getter_mTargetActionList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_multipleBindingGenerationList getter_multipleBindingGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_tableViewBindingGenerationList getter_mTableViewBindingGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_ebViewGraphicControllerBindingGenerationList getter_mEBViewBindingGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_viewGenerationList getter_mViewDeclarationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (GALGAS_viewGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutToolbarItemGenerationList getter_mAutoLayoutToolbarItemGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemGenerationList (GALGAS_autoLayoutToolbarItemGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_implicitViewFunctionGenerationList getter_mImplicitViewFunctionGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMImplicitViewFunctionGenerationList (GALGAS_implicitViewFunctionGenerationList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutConfiguratorMap getter_mConfiguratorMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorMap (GALGAS_autoLayoutConfiguratorMap inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mCustomSuperClassName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutOutletLinkerGenerationList getter_mOutletLinkerGenerationList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMOutletLinkerGenerationList (GALGAS_autoLayoutOutletLinkerGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_prefsDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefsDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_prefsDeclarationAST * ptr (void) const { return (const cPtr_prefsDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefsDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefsDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_prefDeclaration & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDeclaration (class GALGAS_prefDeclaration inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_prefDeclaration getter_mDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public: GALGAS_prefDeclaration mProperty_mDeclaration ;

//--- Constructor
  public: cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                    const GALGAS_prefDeclaration & in_mDeclaration
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_prefDeclaration getter_mDeclaration (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDeclaration (GALGAS_prefDeclaration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

