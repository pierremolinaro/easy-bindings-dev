#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 47)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mRootEntityName () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 48)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDocumentDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutDocumentDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       GGS_generationStruct & ioArgument_ioGeneration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_5590 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5590, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 148)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  GGS_propertyMap temp_3 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 152)) ;
  GGS_propertyGenerationList temp_4 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 154)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 151)), temp_3, var_actionMap_5590, temp_4, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 149)) ;
  }
  cEnumerator_actionMap enumerator_5762 (var_actionMap_5590, EnumerationOrder::up) ;
  while (enumerator_5762.hasCurrentObject ()) {
    {
    const GGS_autoLayoutDocumentDeclarationAST temp_5 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_5.readProperty_mClassName ().readProperty_string (), enumerator_5762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 157)) ;
    }
    enumerator_5762.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & ioArgument_ioGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_6304 ;
  GGS_classKind joker_6291 ; // Joker input parameter
  GGS_actionMap joker_6332_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6332_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 172)), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 172)), inCompiler COMMA_HERE), joker_6291, var_preferencesPropertyMap_6304, joker_6332_2, joker_6332_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 171)) ;
  GGS_propertyMap var_documentPropertyMap_6469 ;
  GGS_actionMap var_documentActionMap_6499 ;
  GGS_propertyGenerationList var_documentPropertyGenerationList_6527 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GGS_classKind joker_6456 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 179)), inCompiler COMMA_HERE), joker_6456, var_documentPropertyMap_6469, var_documentActionMap_6499, var_documentPropertyGenerationList_6527, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 178)) ;
  GGS_propertyMap var_rootPropertyMap_6680 ;
  GGS_actionMap var_rootActionMap_6713 ;
  GGS_propertyGenerationList var_rootPropertyGenerationList_6744 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GGS_classKind joker_6667 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_6667, var_rootPropertyMap_6680, var_rootActionMap_6713, var_rootPropertyGenerationList_6744, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 186)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_7106 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_7173 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_7245 ;
  GGS_decoratedOutletMap var_outletMap_7306 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7358 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_7445 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (false), var_rootPropertyMap_6680, var_preferencesPropertyMap_6304, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_6469, var_documentActionMap_6499, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_7106, var_multipleBindingGenerationList_7173, var_actionBindingListForGeneration_7245, var_outletMap_7306, var_tableViewBindingGenerationList_7358, var_ebViewGraphicControllerBindingGenerationList_7445, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 194)) ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  cEnumerator_arrayControllerBindingListAST enumerator_7550 (temp_5.readProperty_mArrayControllerBindingListAST (), EnumerationOrder::up) ;
  while (enumerator_7550.hasCurrentObject ()) {
    switch (enumerator_7550.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_7730_expression_0 ;
        enumerator_7550.current_mHiddenSelectionViewBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_7730_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_8002 ;
        GGS_typeKind var_type_8043 ;
        GGS_location var_errorLocation_8072 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_7730_expression_0.ptr (), GGS_bool (false), var_rootPropertyMap_6680, ioArgument_ioSemanticContext, var_documentPropertyMap_6469, var_preferencesPropertyMap_6304, var_hiddenExpression_8002, var_type_8043, var_errorLocation_8072, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 218)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_type_8043.getter_isBoolType (SOURCE_FILE ("document-auto-layout.ggs", 228)).operator_not (SOURCE_FILE ("document-auto-layout.ggs", 228)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_8072, GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 229)) ;
          }
        }
        {
        var_multipleBindingGenerationList_7173.setter_append (enumerator_7550.current_mControllerName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_8002, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 231)) ;
        }
      }
      break ;
    }
    enumerator_7550.gotoNextObject () ;
  }
  GGS_autoLayoutViewDeclarationMap temp_8 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 239)) ;
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_8419 = temp_8 ;
  GGS_viewGenerationList temp_9 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 240)) ;
  GGS_viewGenerationList var_viewGenerationList_8469 = temp_9 ;
  GGS_implicitViewFunctionGenerationList temp_10 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 241)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_8535 = temp_10 ;
  GGS_autoLayoutConfiguratorMap temp_11 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 242)) ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_8608 = temp_11 ;
  GGS_autoLayoutOutletMap temp_12 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 243)) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_8656 = temp_12 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_13 = this ;
  cEnumerator_astViewDeclarationList enumerator_8698 (temp_13.readProperty_mViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_8698.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_8419.setter_insertKey (enumerator_8698.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 245)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_9184 ;
    const GGS_autoLayoutDocumentDeclarationAST temp_14 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_8698.current_mView (HERE).ptr (), enumerator_8698.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_8419, GGS_bool (false), var_rootPropertyMap_6680, var_preferencesPropertyMap_6304, ioArgument_ioSemanticContext, var_documentPropertyMap_6469, var_documentActionMap_6499, temp_14.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_8535, var_configuratorMap_8608, var_autoLayoutOutletMap_8656, var_viewGeneration_9184, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 246)) ;
    {
    var_viewGenerationList_8469.setter_append (enumerator_8698.current_mViewName (HERE).readProperty_string (), var_viewGeneration_9184, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 262)) ;
    }
    enumerator_8698.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  var_viewDeclarationMap_8419.method_searchKey (temp_15.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 264)) ;
  ioArgument_ioGeneration.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (true) ;
  GGS_autoLayoutOutletLinkerGenerationList temp_16 = GGS_autoLayoutOutletLinkerGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 268)) ;
  GGS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_9476 = temp_16 ;
  GGS_stringset temp_17 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 269)) ;
  GGS_stringset var_linkerNameSet_9525 = temp_17 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_18 = this ;
  cEnumerator_astAutoLayoutOutletLinkerList enumerator_9563 (temp_18.readProperty_mOutletLinkerList (), EnumerationOrder::up) ;
  while (enumerator_9563.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_linkerNameSet_9525.getter_hasKey (enumerator_9563.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 271)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_9563.current_mLinkerName (HERE).readProperty_location (), GGS_string ("duplicated linker name"), fixItArray20  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 272)) ;
      }
    }
    {
    var_linkerNameSet_9525.setter_insert (enumerator_9563.current_mLinkerName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 274)) ;
    }
    GGS__32_stringlist temp_21 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 275)) ;
    GGS__32_stringlist var_outletNameAndTypeNameList_9786 = temp_21 ;
    cEnumerator_lstringlist enumerator_9826 (enumerator_9563.current_mOutletNameList (HERE), EnumerationOrder::up) ;
    while (enumerator_9826.hasCurrentObject ()) {
      GGS_string var_outletTypeName_9912 ;
      GGS_bool var_outletIsArray_9940 ;
      var_autoLayoutOutletMap_8656.method_searchKey (enumerator_9826.current_mValue (HERE), var_outletTypeName_9912, var_outletIsArray_9940, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 277)) ;
      {
      var_outletNameAndTypeNameList_9786.setter_append (enumerator_9826.current_mValue (HERE).readProperty_string (), var_outletTypeName_9912, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 278)) ;
      }
      enumerator_9826.gotoNextObject () ;
    }
    {
    var_outletLinkerGenerationList_9476.setter_append (enumerator_9563.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_9786, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 280)) ;
    }
    enumerator_9563.gotoNextObject () ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_22 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_23 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_24 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_25 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutDocumentFileGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (temp_22.readProperty_mClassName ().readProperty_string (), temp_23.readProperty_mRootEntityName ().readProperty_string (), temp_24.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_6527, var_outletMap_7306, var_autoLayoutOutletMap_8656, var_actionBindingListForGeneration_7245, var_regularBindingsGenerationList_7106, var_multipleBindingGenerationList_7173, var_tableViewBindingGenerationList_7358, var_ebViewGraphicControllerBindingGenerationList_7445, var_viewGenerationList_8469, var_implicitViewFunctionGenerationList_8535, var_configuratorMap_8608, temp_25.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_9476, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 283)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                                 const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                 GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutDocumentFileGeneration temp_0 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_1 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_2 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_3 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_4 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_5 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_6 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_7 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_8 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_9 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_10 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_11 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_12 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_13 = this ;
  GGS_string temp_14 ;
  const enumGalgasBool test_15 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mCustomSuperClassName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GGS_string ("EBAutoLayoutManagedDocument") ;
  }else if (kBoolFalse == test_15) {
    const GGS_autoLayoutDocumentFileGeneration temp_16 = this ;
    temp_14 = temp_16.readProperty_mCustomSuperClassName () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_17 = this ;
  GGS_string var_s_13030 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 347))) ;
  const GGS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GGS_string var_fileName_13701 = GGS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13701, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_13701, var_s_13030, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 366)) ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_19 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_13888 (temp_19.readProperty_mConfiguratorMap (), EnumerationOrder::up) ;
  while (enumerator_13888.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GGS_string var_s_13940 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_13888.current_lkey (HERE).readProperty_string (), enumerator_13888.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 372))) ;
    GGS_string var_header_14122 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GGS_string var_fileName_14464 = GGS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)).add_operation (enumerator_13888.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14464, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 383)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14464, GGS_string ("//"), var_header_14122, GGS_string ("\n\n"), var_s_13940, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 384)) ;
    }
    enumerator_13888.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_22 = this ;
  cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_15041 (temp_22.readProperty_mOutletLinkerGenerationList (), EnumerationOrder::up) ;
  while (enumerator_15041.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GGS_string var_s_15115 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_15041.current_mLinkerName (HERE), enumerator_15041.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 397))) ;
    GGS_string var_header_15287 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 405)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 406)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 406)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 406)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GGS_string var_fileName_15629 = GGS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)).add_operation (enumerator_15041.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15629, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 408)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_15629, GGS_string ("//"), var_header_15287, GGS_string ("\n\n"), var_s_15115, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 409)) ;
    }
    enumerator_15041.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0,
  3,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                            const GGS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                            const GGS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                            const GGS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                            const GGS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                            const GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                            const GGS_actionBindingListForGeneration & /* in_TARGET_5F_ACTION_5F_LIST */,
                                                                                            const GGS_regularBindingsGenerationList & /* in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const GGS_tableViewBindingGenerationList & /* in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_ebViewGraphicControllerBindingGenerationList & /* in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                            const GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                            const GGS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                            const GGS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//——————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n@objc(") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (") class ") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  \n") ;
  GGS_uint index_521_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_521 (in_DOCUMENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_521.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_521.current_mProperty (HERE).ptr (), GGS_bool (false), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue ()) ;
      index_521_.increment () ;
      enumerator_521.gotoNextObject () ;
    }
  }
  result.appendString ("  //································································································\n  //    Outlets\n  //································································································\n\n") ;
  GGS_uint index_901_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_901 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_901.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_901.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      default :
        break ;
      }
      index_901_.increment () ;
      enumerator_901.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //································································································\n  //    Outlets\n  //································································································\n\n") ;
  GGS_uint index_1408_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_1408 (in_OUTLET_5F_GENERATION_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1408.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet final var ") ;
      result.appendString (enumerator_1408.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_1408.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      index_1408_.increment () ;
      enumerator_1408.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //································································································\n  //    Multiple bindings controllers\n  //································································································\n\n") ;
  GGS_uint index_1818_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_1818 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1818.hasCurrentObject ()) {
      result.appendString ("//  final var mController_") ;
      result.appendString (enumerator_1818.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      index_1818_.increment () ;
      enumerator_1818.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //································································································\n  //    displayName\n  //································································································\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  //································································································\n  //    rootEntityClassName\n  //································································································\n\n  override final func rootEntityClassName () -> String {\n    return \"") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n  }\n\n  //································································································\n  //    rootObject\n  //································································································\n\n  final var rootObject : ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mRootObject as! ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n") ;
  GGS_uint index_3064_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_3064 (in_VIEW_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3064.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    VIEW ") ;
      result.appendString (enumerator_3064.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3064.current_mView (HERE).ptr (), GGS_bool (false), enumerator_3064.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue ()) ;
      index_3064_.increment () ;
      enumerator_3064.gotoNextObject () ;
    }
  }
  GGS_uint index_3440_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_3440 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3440.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3440.current_mInstruction (HERE).ptr (), GGS_bool (false), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      index_3440_idx.increment () ;
      enumerator_3440.gotoNextObject () ;
    }
  }
  result.appendString ("  //································································································\n  //    Build User Interface\n  //································································································\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
  result.appendString (in_MAIN_5F_VIEW_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n  //--- Call outlet linkers\n") ;
  GGS_uint index_4631_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_4631 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4631.hasCurrentObject ()) {
      result.appendString ("    self.linker_") ;
      result.appendString (enumerator_4631.current_mLinkerName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_4740_ (0) ;
      if (enumerator_4631.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_4740 (enumerator_4631.current_mOutletNameAndTypeNameList (HERE), EnumerationOrder::up) ;
        while (enumerator_4740.hasCurrentObject ()) {
          result.appendString ("self.") ;
          result.appendString (enumerator_4740.current_mValue_30_ (HERE).stringValue ()) ;
          if (enumerator_4740.hasNextObject ()) {
            result.appendString (", ") ;
          }
          index_4740_.increment () ;
          enumerator_4740.gotoNextObject () ;
        }
      }
      result.appendString (")\n") ;
      index_4631_.increment () ;
      enumerator_4631.gotoNextObject () ;
    }
  }
  result.appendString ("  //--- Assign main view to window\n    self.windowForSheet\?.contentView = AutoLayoutWindowContentView (view: mainView)\n  }\n\n  //································································································\n  //    configureProperties\n  //································································································\n\n  final private func configureProperties () {\n") ;
  GGS_uint index_5257_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5257 (in_DOCUMENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5257.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5257.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString ("\n") ;
      index_5257_.increment () ;
      enumerator_5257.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n\n  //································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (Compiler * /* inCompiler */,
                                                                                                              const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func configure_") ;
  result.appendString (in_OUTLET_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inOutlet : AutoLayout") ;
  result.appendString (in_OUTLET_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (Compiler * /* inCompiler */,
                                                                                                const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                const GGS_string & in_LINKER_5F_NAME,
                                                                                                const GGS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func linker_") ;
  result.appendString (in_LINKER_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_235_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_235 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_235.hasCurrentObject ()) {
      result.appendString ("_ in_") ;
      result.appendString (enumerator_235.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" : AutoLayout") ;
      result.appendString (enumerator_235.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\?") ;
      if (enumerator_235.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_235_.increment () ;
      enumerator_235.gotoNextObject () ;
    }
  }
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 24)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@prefsDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_prefsDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_prefsDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_preferencesName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("Preferences") ;
//---
  return result_outResult ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_preferencesName = false ;
static GGS_string gOnceFunctionResult_preferencesName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_preferencesName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_preferencesName) {
    gOnceFunctionResult_preferencesName = onceFunction_preferencesName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_preferencesName = true ;
  }
  return gOnceFunctionResult_preferencesName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_preferencesName (void) {
  gOnceFunctionResult_preferencesName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_preferencesName (nullptr,
                                                           releaseOnceFunctionResult_preferencesName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_preferencesName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_preferencesName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_preferencesName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_preferencesName ("preferencesName",
                                                                 functionWithGenericHeader_preferencesName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_preferencesName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & ioArgument_ioGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_4173 ;
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_4173, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 96)) ;
  }
  {
  GGS_propertyMap temp_1 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 100)) ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 102)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 98)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 98)), inCompiler COMMA_HERE), GGS_classKind::class_func_prefs (SOURCE_FILE ("preferences.ggs", 99)), temp_1, var_actionMap_4173, temp_2, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 97)) ;
  }
  cEnumerator_actionMap enumerator_4320 (var_actionMap_4173, EnumerationOrder::up) ;
  while (enumerator_4320.hasCurrentObject ()) {
    {
    const GGS_prefsDeclarationAST temp_3 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_3.readProperty_mClassName ().readProperty_string (), enumerator_4320.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 105)) ;
    }
    enumerator_4320.gotoNextObject () ;
  }
  const GGS_prefsDeclarationAST temp_4 = this ;
  ioArgument_ioGeneration.mProperty_mMainXibDescriptorList = temp_4.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 123)) ;
  temp_0.enterElement (GGS_string ("awakeFromNib"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 123)) ;
  temp_0.enterElement (GGS_string ("init"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 123)) ;
  GGS_stringset var_availableCallers_5022 = temp_0 ;
  GGS_externFunctionMap temp_1 = GGS_externFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
  GGS_externFunctionMap var_externFunctionMap_5091 = temp_1 ;
  const GGS_prefsDeclarationAST temp_2 = this ;
  cEnumerator_externSwiftFunctionList enumerator_5147 (temp_2.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), EnumerationOrder::up) ;
  while (enumerator_5147.hasCurrentObject ()) {
    {
    var_externFunctionMap_5091.setter_insertKey (enumerator_5147.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 126)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_availableCallers_5022.getter_hasKey (enumerator_5147.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 127)).operator_not (SOURCE_FILE ("preferences.ggs", 127)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string var_s_5341 = GGS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5393 (var_availableCallers_5022, EnumerationOrder::up) ;
        while (enumerator_5393.hasCurrentObject ()) {
          var_s_5341.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_5393.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 130)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
          enumerator_5393.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5147.current_mCallerName (HERE).readProperty_location (), var_s_5341, fixItArray4  COMMA_SOURCE_FILE ("preferences.ggs", 132)) ;
      }
    }
    enumerator_5147.gotoNextObject () ;
  }
  GGS_propertyMap var_preferencesPropertyMap_5635 ;
  GGS_actionMap var_actionMap_5668 ;
  GGS_propertyGenerationList var_propertyGenerationList_5688 ;
  GGS_classKind joker_5622 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 137)), GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 137)), inCompiler COMMA_HERE), joker_5622, var_preferencesPropertyMap_5635, var_actionMap_5668, var_propertyGenerationList_5688, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 136)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_6052 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_6123 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_6195 ;
  GGS_decoratedOutletMap var_outletMap_6256 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6308 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6395 ;
  {
  GGS_propertyMap temp_5 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 146)) ;
  const GGS_prefsDeclarationAST temp_6 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (true), temp_5, var_preferencesPropertyMap_5635, GGS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_6.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5635, var_actionMap_5668, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 153)), ioArgument_ioGeneration, var_regularBindingsGenerationList_6052, var_multipleBindingGenerationList_6123, var_actionBindingListForGeneration_6195, var_outletMap_6256, var_tableViewBindingGenerationList_6308, var_ebViewGraphicControllerBindingGenerationList_6395, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 144)) ;
  }
  GGS_autoLayoutViewDeclarationMap temp_7 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 163)) ;
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6521 = temp_7 ;
  GGS_viewGenerationList temp_8 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 164)) ;
  GGS_viewGenerationList var_viewGenerationList_6571 = temp_8 ;
  GGS_implicitViewFunctionGenerationList temp_9 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 165)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6637 = temp_9 ;
  GGS_autoLayoutConfiguratorMap temp_10 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 166)) ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_6710 = temp_10 ;
  GGS_autoLayoutOutletMap temp_11 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_6758 = temp_11 ;
  const GGS_prefsDeclarationAST temp_12 = this ;
  cEnumerator_astViewDeclarationList enumerator_6800 (temp_12.readProperty_mDeclaration ().readProperty_mViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_6800.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6521.setter_insertKey (enumerator_6800.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 169)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_7300 ;
    GGS_propertyMap temp_13 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 174)) ;
    GGS_propertyMap temp_14 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 177)) ;
    const GGS_prefsDeclarationAST temp_15 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6800.current_mView (HERE).ptr (), enumerator_6800.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6521, GGS_bool (true), temp_13, var_preferencesPropertyMap_5635, ioArgument_ioSemanticContext, temp_14, var_actionMap_5668, temp_15.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6637, var_configuratorMap_6710, var_autoLayoutOutletMap_6758, var_viewGeneration_7300, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 170)) ;
    {
    var_viewGenerationList_6571.setter_append (enumerator_6800.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7300, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 186)) ;
    }
    enumerator_6800.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_viewDeclarationMap_6521.getter_hasKey (GGS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 188)).operator_not (SOURCE_FILE ("preferences.ggs", 188)).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 189)), GGS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray17  COMMA_SOURCE_FILE ("preferences.ggs", 189)) ;
    }
  }
  {
  const GGS_prefsDeclarationAST temp_18 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5688, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_6052, var_multipleBindingGenerationList_6123, var_actionBindingListForGeneration_6195, var_outletMap_6256, temp_18.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6308, var_ebViewGraphicControllerBindingGenerationList_6395, var_viewGenerationList_6571, var_implicitViewFunctionGenerationList_6637, var_configuratorMap_6710, var_autoLayoutOutletMap_6758, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 192)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_3,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_1,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_2,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_prefsGenerationTemplate,
  & gWrapperDirectory_1_prefsGenerationTemplate,
  & gWrapperDirectory_2_prefsGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_0,
  3,
  gWrapperAllDirectories_prefsGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'prefsGenerationTemplate preferences'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_prefsGenerationTemplate_preferences (Compiler * inCompiler,
                                                                    const GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                    const GGS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                    const GGS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                    const GGS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                    const GGS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                    const GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                    const GGS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                    const GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                    const GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//——————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor var g_") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString ("\? = nil\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n@objc(") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (") final class ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_SuperClass, NSWindowDelegate {\n\n  //································································································\n\n  private final var mWindow : CanariWindow\? = nil\n\n  //································································································\n  //    Show Preferences window\n  //································································································\n\n  @IBAction func showPreferencesWindowAction (_ inSender : Any\?) {\n    let window : CanariWindow\n    if let w = self.mWindow {\n      window = w\n    }else{\n      window = CanariWindow (\n        contentRect: .zero,\n        styleMask: [.closable, .resizable, .titled],\n        backing: .buffered,\n        defer: false\n      )\n      self.mWindow = window\n      window.setFrameAutosaveName (\"PrefsWindowSettings\")\n      window.title = \"Preferences\"\n      window.isReleasedWhenClosed = false\n      window.contentView = AutoLayoutWindowContentView (view: self.mPrefsMainView ())\n    //--- Contrôler le comportement en plein écran\n      window.collectionBehavior = [.fullScreenAuxiliary, .fullScreenNone]\n      let zoomButton = window.standardWindowButton (.zoomButton)\n      zoomButton\?.isEnabled = false\n    }\n    window.makeKeyAndOrderFront (nil)\n  }\n\n") ;
  GGS_uint index_1957_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_1957 (in_VIEW_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1957.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    VIEW ") ;
      result.appendString (enumerator_1957.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_1957.current_mView (HERE).ptr (), GGS_bool (true), enumerator_1957.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue ()) ;
      index_1957_.increment () ;
      enumerator_1957.gotoNextObject () ;
    }
  }
  GGS_uint index_2332_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_2332 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2332.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_2332_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n  fileprivate final func computeImplicitView_") ;
      result.appendString (index_2332_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2332.current_mInstruction (HERE).ptr (), GGS_bool (true), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      index_2332_idx.increment () ;
      enumerator_2332.gotoNextObject () ;
    }
  }
  result.appendString ("  //································································································\n  //    Outlets\n  //································································································\n\n") ;
  GGS_uint index_3078_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_3078 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3078.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_3078.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_3078.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_3078.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_3078.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_3078.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      default :
        break ;
      }
      index_3078_.increment () ;
      enumerator_3078.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //································································································\n  //    Outlets (EX)\n  //································································································\n\n") ;
  GGS_uint index_3579_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_3579 (in_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3579.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet var ") ;
      result.appendString (enumerator_3579.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_3579.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      index_3579_.increment () ;
      enumerator_3579.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //································································································\n  //    Multiple bindings controllers\n  //································································································\n\n") ;
  GGS_uint index_3983_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_3983 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3983.hasCurrentObject ()) {
      result.appendString ("  private var mController_") ;
      result.appendString (enumerator_3983.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3983.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_3983.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\?\n") ;
      index_3983_.increment () ;
      enumerator_3983.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //································································································\n  //    Undo Manager\n  //································································································\n\n  private var mUndoManager = EBUndoManager ()\n\n  //································································································\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  //································································································\n  // The preferences window should register this object as delegate (do it in Interface Builder)\n  //································································································\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  //································································································\n  //    Init\n  //································································································\n\n  override init () {\n    super.init ()\n    DispatchQueue.main.async {\n      g_") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 118)).stringValue ()) ;
  result.appendString (" = self\n    //--- Read from preferences\n") ;
  GGS_uint index_5353_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5353 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_5353.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5353.current_mProperty (HERE).ptr (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 122)).stringValue ()) ;
      index_5353_.increment () ;
      enumerator_5353.gotoNextObject () ;
    }
  }
  result.appendString ("    //--- Extern functions\n") ;
  GGS_uint index_5504_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_5504 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5504.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_5504.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("init"))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_5504.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5504_.increment () ;
      enumerator_5504.gotoNextObject () ;
    }
  }
  result.appendString ("    }\n  }\n\n") ;
  const enumGalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("preferences.swift.galgasTemplate", 135)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  //································································································\n\n  @IBOutlet private final var window : NSWindow\?\n  let OUTLET_WIDTH = 200.0\n  let OUTLET_HEIGHT = 22.0\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  //································································································\n  //    awakeFromNib\n  //································································································\n\n  override func awakeFromNib () {\n    DispatchQueue.main.async {\n") ;
  result.appendString (extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 151)).stringValue ()) ;
  GGS_uint index_6267_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_6267 (in_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_6267.hasCurrentObject ()) {
      result.appendString ("      checkOutletConnection (self.") ;
      result.appendString (enumerator_6267.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", \"") ;
      result.appendString (enumerator_6267.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\", ") ;
      result.appendString (enumerator_6267.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString (".self, #file, #line)\n") ;
      index_6267_.increment () ;
      enumerator_6267.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Install bindings\n") ;
  GGS_uint index_6545_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_6545 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6545.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_6545.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.bind_") ;
      result.appendString (enumerator_6545.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_6659_ (0) ;
      if (enumerator_6545.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_6659 (enumerator_6545.current_mBoundObjectList (HERE), EnumerationOrder::up) ;
        while (enumerator_6659.hasCurrentObject ()) {
          result.appendString (enumerator_6659.current_mBoundObjectString (HERE).stringValue ()) ;
          if (enumerator_6659.hasNextObject ()) {
            result.appendString (", ") ;
          }
          index_6659_.increment () ;
          enumerator_6659.gotoNextObject () ;
        }
      }
      result.appendString (enumerator_6545.current_mBindingOptionsString (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_6545_.increment () ;
      enumerator_6545.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Install multiple bindings\n") ;
  GGS_uint index_6892_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_6892 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6892.hasCurrentObject ()) {
      result.appendString ("      do{\n        let controller = MultipleBindingController_") ;
      result.appendString (enumerator_6892.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (\n          computeFunction: ") ;
      result.appendString (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_6892.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (",\n          outlet: self.") ;
      result.appendString (enumerator_6892.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\n        )\n        self.mController_") ;
      result.appendString (enumerator_6892.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_6892.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" = controller\n      }\n") ;
      index_6892_.increment () ;
      enumerator_6892.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Array controller\n") ;
  GGS_uint index_7379_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_7379 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7379.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7379.current_mTableValueBindingControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_tableView (self.") ;
      result.appendString (enumerator_7379.current_mTableValueBindingOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_7379_.increment () ;
      enumerator_7379.gotoNextObject () ;
    }
  }
  GGS_uint index_7609_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7609 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7609.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7609.current_mArrayControllerControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_ebView (self.") ;
      result.appendString (enumerator_7609.current_mEBViewOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_7609_.increment () ;
      enumerator_7609.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Set targets / actions\n") ;
  GGS_uint index_7852_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_7852 (in_TARGET_5F_ACTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7852.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_7852.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.target = ") ;
      result.appendString (enumerator_7852.current_mTargetName (HERE).stringValue ()) ;
      result.appendString ("\n      self.") ;
      result.appendString (enumerator_7852.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.action = #selector (") ;
      result.appendString (enumerator_7852.current_mTargetTypeName (HERE).stringValue ()) ;
      result.appendString (".") ;
      result.appendString (enumerator_7852.current_mActionName (HERE).stringValue ()) ;
      result.appendString (" (_:))\n") ;
      index_7852_.increment () ;
      enumerator_7852.gotoNextObject () ;
    }
  }
  result.appendString ("    //--------------------------- Extern functions\n") ;
  GGS_uint index_8134_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_8134 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8134.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_8134.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("awakeFromNib"))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_8134.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_8134_.increment () ;
      enumerator_8134.gotoNextObject () ;
    }
  }
  result.appendString ("    }\n  }\n\n  //································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n") ;
  GGS_uint index_8527_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8527 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_8527.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_8527.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 206)).stringValue ()) ;
      index_8527_.increment () ;
      enumerator_8527.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_8623_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8623 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_8623.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_8623.current_mProperty (HERE).ptr (), GGS_bool (true), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 211)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 211)).stringValue ()) ;
      index_8623_.increment () ;
      enumerator_8623.gotoNextObject () ;
    }
  }
  result.appendString ("\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@preferencesForGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_preferencesForGeneration temp_0 = this ;
  const GGS_preferencesForGeneration temp_1 = this ;
  const GGS_preferencesForGeneration temp_2 = this ;
  const GGS_preferencesForGeneration temp_3 = this ;
  const GGS_preferencesForGeneration temp_4 = this ;
  const GGS_preferencesForGeneration temp_5 = this ;
  const GGS_preferencesForGeneration temp_6 = this ;
  const GGS_preferencesForGeneration temp_7 = this ;
  const GGS_preferencesForGeneration temp_8 = this ;
  const GGS_preferencesForGeneration temp_9 = this ;
  const GGS_preferencesForGeneration temp_10 = this ;
  const GGS_preferencesForGeneration temp_11 = this ;
  GGS_string var_s_10612 = GGS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 257))) ;
  GGS_string var_fileName_11113 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 271)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 271)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11113, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 272)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11113, var_s_10612, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 273)) ;
  }
  const GGS_preferencesForGeneration temp_12 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_11305 (temp_12.readProperty_mConfiguratorMap (), EnumerationOrder::up) ;
  while (enumerator_11305.hasCurrentObject ()) {
    GGS_string var_s_11357 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GGS_string ("Preferences"), enumerator_11305.current_lkey (HERE).readProperty_string (), enumerator_11305.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 280))) ;
    GGS_string var_header_11534 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 285)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 287)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 289)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 289)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 289)) ;
    GGS_string var_fileName_11876 = GGS_string ("configurator-Preferences-").add_operation (enumerator_11305.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 290)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 290)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11876, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 291)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11876, GGS_string ("//"), var_header_11534, GGS_string ("\n\n"), var_s_11357, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 300)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 300)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 292)) ;
    }
    enumerator_11305.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                           const GGS_lstringlist constinArgument_inGraphvizList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("graphviz.ggs", 29)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_lstringlist enumerator_1214 (constinArgument_inGraphvizList, EnumerationOrder::up) ;
      while (enumerator_1214.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1214.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1214.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 32)) ;
        }
        enumerator_1214.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                     const GGS_semanticContext constinArgument_inSemanticContext,
                                                     const GGS_string constinArgument_inRootEntityName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  temp_0.enterElement (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  GGS_stringset var_reachableEntityNameSet_1841 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_1.enterElement (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GGS_stringlist var_exploreArray_1903 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 44)) ;
  GGS_stringlist var_nodeList_1963 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 45)) ;
  GGS_stringlist var_arrowList_1995 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).isValid ()) {
    uint32_t variant_2012 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).uintValue () ;
    bool loop_2012 = true ;
    while (loop_2012) {
      loop_2012 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1903.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_2012) {
        loop_2012 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1903.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_2012 && (0 == variant_2012)) {
        loop_2012 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 46)) ;
      }
      if (loop_2012) {
        variant_2012 -- ;
        GGS_string var_entityName_2130 ;
        {
        var_exploreArray_1903.setter_popLast (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GGS_string var_node_2150 = GGS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GGS_classKind var_entityKind_2291 ;
        GGS_propertyMap var_propertyMap_2321 ;
        GGS_actionMap joker_2334_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_2334_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_2130.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2291, var_propertyMap_2321, joker_2334_2, joker_2334_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GGS_string var_superEntityName_2391 ;
        GGS_bool joker_2408_3 ; // Joker input parameter
        GGS_bool joker_2408_2 ; // Joker input parameter
        GGS_bool joker_2408_1 ; // Joker input parameter
        var_entityKind_2291.method_extractEntity (var_superEntityName_2391, joker_2408_3, joker_2408_2, joker_2408_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_2391.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1841.getter_hasKey (var_superEntityName_2391 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_reachableEntityNameSet_1841.setter_insert (var_superEntityName_2391, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                }
                {
                var_exploreArray_1903.setter_append (var_superEntityName_2391, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
                }
              }
            }
            {
            var_arrowList_1995.setter_append (GGS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2391, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_2795 (var_propertyMap_2321, EnumerationOrder::up) ;
        while (enumerator_2795.hasCurrentObject ()) {
          switch (enumerator_2795.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_2863_type_0 ;
              GGS_propertyAccessibility extractedValue_2869_accessibility_1 ;
              enumerator_2795.current_mKind (HERE).getAssociatedValuesFor_property (extractedValue_2863_type_0, extractedValue_2869_accessibility_1) ;
              switch (extractedValue_2869_accessibility_1.enumValue ()) {
              case GGS_propertyAccessibility::Enumeration::invalid:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_stored:
                {
                  var_node_2150.plusAssign_operation(GGS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2863_type_0, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
                }
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_transient:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_computed:
                break ;
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_3166_typeName_0 ;
              GGS_propertyAccessibility extractedValue_3199_accessibility_1 ;
              GGS_bool extractedValue_3214__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_3217_optionKind_3 ;
              enumerator_2795.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_3166_typeName_0, extractedValue_3199_accessibility_1, extractedValue_3214__2, extractedValue_3217_optionKind_3) ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_3199_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  var_node_2150.plusAssign_operation(GGS_string ("|<").add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3217_optionKind_3.enumValue ()) {
                  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
                    {
                      enumGalgasBool test_7 = kBoolTrue ;
                      if (kBoolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_3166_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (kBoolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GGS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
                    {
                      GGS_lstring extractedValue_3756_oppositeName_0 ;
                      extractedValue_3217_optionKind_3.getAssociatedValuesFor_hasOpposite (extractedValue_3756_oppositeName_0) ;
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_3166_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GGS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3756_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
                    {
                      GGS_lstring extractedValue_4159__0 ;
                      extractedValue_3217_optionKind_3.getAssociatedValuesFor_hasDependance (extractedValue_4159__0) ;
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_3166_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GGS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3166_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_4550_typeName_0 ;
              GGS_propertyAccessibility extractedValue_4583_accessibility_1 ;
              GGS_bool extractedValue_4598__2 ;
              GGS_toOneOppositeRelationship extractedValue_4601_opposite_3 ;
              GGS_bool extractedValue_4611__4 ;
              enumerator_2795.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_4550_typeName_0, extractedValue_4583_accessibility_1, extractedValue_4598__2, extractedValue_4601_opposite_3, extractedValue_4611__4) ;
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = extractedValue_4583_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_node_2150.plusAssign_operation(GGS_string ("|<").add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4601_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_4550_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GGS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_5225_oppositeName_0 ;
                      extractedValue_4601_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_5225_oppositeName_0) ;
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_4550_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                          }
                        }
                      }
                      enumGalgasBool test_13 = kBoolTrue ;
                      if (kBoolTrue == test_13) {
                        test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_2795.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5225_oppositeName_0.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_13) {
                          {
                          var_arrowList_1995.setter_append (GGS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4550_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5225_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_2795.gotoNextObject () ;
        }
        var_node_2150.plusAssign_operation(GGS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        {
        var_nodeList_1963.setter_append (var_node_2150, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
        }
      }
    }
  }
  GGS_string var_s_5810 = GGS_string ("digraph G {\n") ;
  var_s_5810.plusAssign_operation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 126)) ;
  var_s_5810.plusAssign_operation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
  cEnumerator_stringlist enumerator_5931 (var_nodeList_1963, EnumerationOrder::up) ;
  while (enumerator_5931.hasCurrentObject ()) {
    var_s_5810.plusAssign_operation(enumerator_5931.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
    enumerator_5931.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_5988 (var_arrowList_1995, EnumerationOrder::up) ;
  while (enumerator_5988.hasCurrentObject ()) {
    var_s_5810.plusAssign_operation(enumerator_5988.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
    enumerator_5988.gotoNextObject () ;
  }
  var_s_5810.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 134)) ;
  GGS_string var_filePath_6060 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)) ;
  GGS_string var_temp_6146 = var_filePath_6060.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 136)) ;
  var_temp_6146.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 136)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           const GGS_string constinArgument_inRootEntityName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  temp_0.enterElement (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  GGS_stringset var_reachableEntityNameSet_6933 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.enterElement (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GGS_stringlist var_exploreArray_6995 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 153)) ;
  GGS_stringlist var_nodeList_7055 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 154)) ;
  GGS_stringlist var_arrowList_7087 = temp_3 ;
  GGS_entityStrongReferenceGraph var_entityStrongReferenceGraph_7136 = GGS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_7173 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_7173 = true ;
    while (loop_7173) {
      loop_7173 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6995.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_7173) {
        loop_7173 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6995.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_7173 && (0 == variant_7173)) {
        loop_7173 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_7173) {
        variant_7173 -- ;
        GGS_string var_entityName_7291 ;
        {
        var_exploreArray_6995.setter_popLast (var_entityName_7291, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        {
        var_nodeList_7055.setter_append (var_entityName_7291, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        }
        {
        var_entityStrongReferenceGraph_7136.setter_addNode (GGS_lstring::init_21__21_ (var_entityName_7291, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 159)), inCompiler COMMA_HERE), var_entityName_7291, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GGS_classKind var_entityKind_7491 ;
        GGS_propertyMap var_propertyMap_7521 ;
        GGS_actionMap joker_7534_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_7534_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7291.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7491, var_propertyMap_7521, joker_7534_2, joker_7534_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GGS_string var_superEntityName_7591 ;
        GGS_bool joker_7608_3 ; // Joker input parameter
        GGS_bool joker_7608_2 ; // Joker input parameter
        GGS_bool joker_7608_1 ; // Joker input parameter
        var_entityKind_7491.method_extractEntity (var_superEntityName_7591, joker_7608_3, joker_7608_2, joker_7608_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_7591.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6933.getter_hasKey (var_superEntityName_7591 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_reachableEntityNameSet_6933.setter_insert (var_superEntityName_7591, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                }
                {
                var_exploreArray_6995.setter_append (var_superEntityName_7591, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
                }
              }
            }
            {
            var_arrowList_7087.setter_append (var_superEntityName_7591.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7291, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GGS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            }
            {
            var_entityStrongReferenceGraph_7136.setter_addEdge (GGS_lstring::init_21__21_ (var_superEntityName_7591, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (var_entityName_7291, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_8077 (var_propertyMap_7521, EnumerationOrder::up) ;
        while (enumerator_8077.hasCurrentObject ()) {
          switch (enumerator_8077.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_8251_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8284_accessibility_1 ;
              GGS_bool extractedValue_8300__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_8300__3 ;
              enumerator_8077.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_8251_typeName_0, extractedValue_8284_accessibility_1, extractedValue_8300__2, extractedValue_8300__3) ;
              {
              var_arrowList_7087.setter_append (var_entityName_7291.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8251_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              }
              {
              var_entityStrongReferenceGraph_7136.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7291, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8251_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_8284_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6933.getter_hasKey (extractedValue_8251_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 179)).operator_not (SOURCE_FILE ("graphviz.ggs", 179)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6933.setter_insert (extractedValue_8251_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 180)) ;
                      }
                      {
                      var_exploreArray_6995.setter_append (extractedValue_8251_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 181)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_8775_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8808_accessibility_1 ;
              GGS_bool extractedValue_8823__2 ;
              GGS_toOneOppositeRelationship extractedValue_8826_opposite_3 ;
              GGS_bool extractedValue_8836_isWeak_4 ;
              enumerator_8077.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_8775_typeName_0, extractedValue_8808_accessibility_1, extractedValue_8823__2, extractedValue_8826_opposite_3, extractedValue_8836_isWeak_4) ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = extractedValue_8836_isWeak_4.operator_not (SOURCE_FILE ("graphviz.ggs", 185)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  {
                  var_arrowList_7087.setter_append (var_entityName_7291.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (extractedValue_8775_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_7136.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7291, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8775_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 187)) ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = extractedValue_8808_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 189)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  switch (extractedValue_8826_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6933.getter_hasKey (extractedValue_8775_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 192)).operator_not (SOURCE_FILE ("graphviz.ggs", 192)).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6933.setter_insert (extractedValue_8775_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 193)) ;
                          }
                          {
                          var_exploreArray_6995.setter_append (extractedValue_8775_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 194)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_9460__0 ;
                      extractedValue_8826_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_9460__0) ;
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6933.getter_hasKey (extractedValue_8775_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 198)).operator_not (SOURCE_FILE ("graphviz.ggs", 198)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6933.setter_insert (extractedValue_8775_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 199)) ;
                          }
                          {
                          var_exploreArray_6995.setter_append (extractedValue_8775_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 200)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_8077.gotoNextObject () ;
        }
      }
    }
  }
  GGS_string var_s_9722 = GGS_string ("digraph G {\n") ;
  var_s_9722.plusAssign_operation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
  var_s_9722.plusAssign_operation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
  cEnumerator_stringlist enumerator_9843 (var_nodeList_7055, EnumerationOrder::up) ;
  while (enumerator_9843.hasCurrentObject ()) {
    var_s_9722.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_9843.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 212)) ;
    enumerator_9843.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_9907 (var_arrowList_7087, EnumerationOrder::up) ;
  while (enumerator_9907.hasCurrentObject ()) {
    var_s_9722.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_9907.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 215)) ;
    enumerator_9907.gotoNextObject () ;
  }
  var_s_9722.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 217)) ;
  GGS_string var_filePath_9986 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)) ;
  GGS_string var_temp_10073 = var_filePath_9986.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_temp_10073.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  GGS_bool joker_10195 ; // Joker input parameter
  var_s_9722.method_writeToFileWhenDifferentContents (var_filePath_9986, joker_10195, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  var_filePath_9986 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
  GGS_string var_temp_32__10309 = var_entityStrongReferenceGraph_7136.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_bool joker_10405 ; // Joker input parameter
  var_temp_32__10309.method_writeToFileWhenDifferentContents (var_filePath_9986, joker_10405, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_stringlist var_undefinedNodeList_10447 = var_entityStrongReferenceGraph_7136.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 225)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_10447.getter_count (SOURCE_FILE ("graphviz.ggs", 226)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GGS_string var_s_10561 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)).add_operation (GGS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
      cEnumerator_stringlist enumerator_10652 (var_undefinedNodeList_10447, EnumerationOrder::up) ;
      while (enumerator_10652.hasCurrentObject ()) {
        var_s_10561.plusAssign_operation(GGS_string ("\n -- ").add_operation (enumerator_10652.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
        enumerator_10652.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 231)), var_s_10561, fixItArray13  COMMA_SOURCE_FILE ("graphviz.ggs", 231)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10447.getter_count (SOURCE_FILE ("graphviz.ggs", 234)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      GGS_lstringlist temp_15 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      temp_15.enterElement (GGS_lstringlist_2E_element::init_21_ (GGS_lstring::init_21__21_ (constinArgument_inRootEntityName, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 236)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_lstringlist var_accessibleNodeList_10818 = var_entityStrongReferenceGraph_7136.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 235)) ;
      GGS_stringset var_accessibleNodeSet_10951 = GGS_stringset::class_func_setWithLStringList (var_accessibleNodeList_10818  COMMA_SOURCE_FILE ("graphviz.ggs", 237)) ;
      cEnumerator_stringlist enumerator_11031 (var_nodeList_7055, EnumerationOrder::up) ;
      while (enumerator_11031.hasCurrentObject ()) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10951.getter_hasKey (enumerator_11031.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 239)).operator_not (SOURCE_FILE ("graphviz.ggs", 239)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 240)), enumerator_11031.current_mValue (HERE).add_operation (GGS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 240)) ;
          }
        }
        enumerator_11031.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10447.getter_count (SOURCE_FILE ("graphviz.ggs", 245)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GGS_lstringlist var_unsortedNodeList_11367 ;
      GGS_stringlist joker_11345 ; // Joker input parameter
      var_entityStrongReferenceGraph_7136.method_circularities (joker_11345, var_unsortedNodeList_11367 COMMA_SOURCE_FILE ("graphviz.ggs", 246)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_11367.getter_count (SOURCE_FILE ("graphviz.ggs", 247)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_20) {
          GGS_string var_s_11434 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (GGS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (var_unsortedNodeList_11367.getter_count (SOURCE_FILE ("graphviz.ggs", 248)).getter_string (SOURCE_FILE ("graphviz.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)) ;
          var_s_11434.plusAssign_operation(GGS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 249)) ;
          cEnumerator_lstringlist enumerator_11577 (var_unsortedNodeList_11367, EnumerationOrder::up) ;
          while (enumerator_11577.hasCurrentObject ()) {
            var_s_11434.plusAssign_operation(GGS_string ("\n -- ").add_operation (enumerator_11577.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 251)) ;
            enumerator_11577.gotoNextObject () ;
          }
          TC_Array <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 253)), var_s_11434, fixItArray21  COMMA_SOURCE_FILE ("graphviz.ggs", 253)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 63)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 65)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutViewClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_2 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_6 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_7 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_8 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_9 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_10 = this ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 239)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 237)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bool var_hasRunAction_8892 ;
    GGS_bool var_handlesTableValueBinding_8917 ;
    GGS_bool var_hasEnabled_8954 ;
    GGS_bool var_hasHidden_8977 ;
    GGS_bool var_handlesGraphicControllerBinding_8999 ;
    const GGS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GGS_lstring joker_8877 ; // Joker input parameter
    GGS_bool joker_9038_3 ; // Joker input parameter
    GGS_autoLayoutClassParameterList joker_9038_2 ; // Joker input parameter
    GGS_astAutoLayoutViewFunctionMap joker_9038_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8877, var_hasRunAction_8892, var_handlesTableValueBinding_8917, var_hasEnabled_8954, var_hasHidden_8977, var_handlesGraphicControllerBinding_8999, joker_9038_3, joker_9038_2, joker_9038_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 250)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GGS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8892 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GGS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 261)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GGS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8917 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GGS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 264)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GGS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8954 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GGS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 267)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GGS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8977 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GGS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        TC_Array <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 270)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GGS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8999 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 272)).boolEnum () ;
      if (kBoolTrue == test_28) {
        const GGS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        TC_Array <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 273)) ;
      }
    }
    {
    const GGS_autoLayoutViewClassDeclarationAST temp_32 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_33 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_34 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_35 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_36 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_37 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_38 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_39 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_40 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_41 = this ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8892 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8917 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8954 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8977 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8999 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 276)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                             const GGS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3888 (constinArgument_inBindingSpecificationListMap, EnumerationOrder::up) ;
  while (enumerator_3888.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 98)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3989 = temp_0 ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4055 (enumerator_3888.current_mOutletClassBindingSpecificationModelList (HERE), EnumerationOrder::up) ;
    while (enumerator_4055.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_4055.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GGS_enumConstantMap temp_2 = GGS_enumConstantMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)) ;
          GGS_enumFuncMap temp_3 = GGS_enumFuncMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)) ;
          var_outletBindingSpecificationModelList_3989.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), temp_2, temp_3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)), enumerator_4055.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GGS_classKind var_classKind_4468 ;
        GGS_propertyMap joker_4479_3 ; // Joker input parameter
        GGS_actionMap joker_4479_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4479_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4055.current_mModelTypeName (HERE), var_classKind_4468, joker_4479_3, joker_4479_2, joker_4479_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 106)) ;
        GGS_typeKind var_typeKind_4506 ;
        switch (var_classKind_4468.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4055.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 110)) ;
            var_typeKind_4506.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_4677_kind_0 ;
            var_classKind_4468.getAssociatedValuesFor_atomic (extractedValue_4677_kind_0) ;
            var_typeKind_4506 = extractedValue_4677_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_4734__0 ;
            var_classKind_4468.getAssociatedValuesFor_document (extractedValue_4734__0) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_4055.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4506.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_4846__0 ;
            GGS_bool extractedValue_4846__1 ;
            GGS_bool extractedValue_4846__2 ;
            GGS_bool extractedValue_4846__3 ;
            var_classKind_4468.getAssociatedValuesFor_entity (extractedValue_4846__0, extractedValue_4846__1, extractedValue_4846__2, extractedValue_4846__3) ;
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_4055.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
            var_typeKind_4506.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_3989.setter_append (var_typeKind_4506, enumerator_4055.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 118)) ;
        }
      }
      enumerator_4055.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5108 = temp_7 ;
    cEnumerator_controllerBindingOptionList enumerator_5172 (enumerator_3888.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
    while (enumerator_5172.hasCurrentObject ()) {
      GGS_classKind var_classKind_5292 ;
      GGS_propertyMap joker_5303_3 ; // Joker input parameter
      GGS_actionMap joker_5303_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5303_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5172.current_mOptionTypeName (HERE), var_classKind_5292, joker_5303_3, joker_5303_2, joker_5303_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 123)) ;
      GGS_typeKind var_typeKind_5328 ;
      switch (var_classKind_5292.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5172.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 127)) ;
          var_typeKind_5328.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5492_kind_0 ;
          var_classKind_5292.getAssociatedValuesFor_atomic (extractedValue_5492_kind_0) ;
          var_typeKind_5328 = extractedValue_5492_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_5545__0 ;
          var_classKind_5292.getAssociatedValuesFor_document (extractedValue_5545__0) ;
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5172.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5328.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_5654__0 ;
          GGS_bool extractedValue_5654__1 ;
          GGS_bool extractedValue_5654__2 ;
          GGS_bool extractedValue_5654__3 ;
          var_classKind_5292.getAssociatedValuesFor_entity (extractedValue_5654__0, extractedValue_5654__1, extractedValue_5654__2, extractedValue_5654__3) ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_5172.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
          var_typeKind_5328.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_5108.setter_append (var_typeKind_5328, enumerator_5172.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 135)) ;
      }
      enumerator_5172.gotoNextObject () ;
    }
    GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_5913 ;
    GGS_lstring var_outletSuperClassName_5941 ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3888.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 140)).boolEnum () ;
      if (kBoolTrue == test_11) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3888.current_mOutletClassName (HERE), var_outletSuperClassName_5941, var_bindingMap_5913, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      GGS_autoLayoutViewBindingSpecificationMap temp_12 = GGS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 143)) ;
      var_bindingMap_5913 = temp_12 ;
      GGS_bool joker_6317_8 ; // Joker input parameter
      GGS_bool joker_6317_7 ; // Joker input parameter
      GGS_bool joker_6317_6 ; // Joker input parameter
      GGS_bool joker_6317_5 ; // Joker input parameter
      GGS_bool joker_6317_4 ; // Joker input parameter
      GGS_bool joker_6317_3 ; // Joker input parameter
      GGS_autoLayoutClassParameterList joker_6317_2 ; // Joker input parameter
      GGS_astAutoLayoutViewFunctionMap joker_6317_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3888.current_mOutletClassName (HERE), var_outletSuperClassName_5941, joker_6317_8, joker_6317_7, joker_6317_6, joker_6317_5, joker_6317_4, joker_6317_3, joker_6317_2, joker_6317_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    var_bindingMap_5913.setter_insertKey (enumerator_3888.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3989, var_controllerBindingOptionDecoratedList_5108, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 146)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3888.current_mOutletClassName (HERE), var_outletSuperClassName_5941, var_bindingMap_5913, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 151)) ;
    }
    enumerator_3888.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedHorizontalViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
                                                                  const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                  const GGS_bool constinArgument_inPreferences,
                                                                  const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                  const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                  const GGS_actionMap constinArgument_inActionMap,
                                                                  const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                  const GGS_classMap constinArgument_inClassMap,
                                                                  GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                  GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                  GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                  GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_29472 ;
  const GGS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_29472, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 668)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_1 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 684)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_29536 = temp_1 ;
  const GGS_astComputedHorizontalViewDeclaration temp_2 = this ;
  cEnumerator_astViewInstructionList enumerator_29564 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_29564.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_29992 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_29564.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_29992, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 686)) ;
    {
    var_instructionList_29536.setter_append (var_generatedInstruction_29992, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 701)) ;
    }
    enumerator_29564.gotoNextObject () ;
  }
  const GGS_astComputedHorizontalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GGS_computedHorizontalViewGeneration::init_21__21__21_ (var_funcCallList_29472, var_instructionList_29536, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedVerticalViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
                                                                const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                const GGS_bool constinArgument_inPreferences,
                                                                const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                const GGS_actionMap constinArgument_inActionMap,
                                                                const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                const GGS_classMap constinArgument_inClassMap,
                                                                GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 723)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_31489 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_31996 ;
  const GGS_astComputedVerticalViewDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_31996, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 724)) ;
  const GGS_astComputedVerticalViewDeclaration temp_2 = this ;
  cEnumerator_astViewInstructionList enumerator_32020 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_32020.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_32447 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_32020.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_32447, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 741)) ;
    {
    var_instructionList_31489.setter_append (var_generatedInstruction_32447, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 756)) ;
    }
    enumerator_32020.gotoNextObject () ;
  }
  const GGS_astComputedVerticalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GGS_computedVerticalViewGeneration::init_21__21__21_ (var_funcCallList_31996, var_instructionList_31489, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSpaceViewInstruction generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GGS_autoLayoutSpaceViewInstructionGeneration::init (inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSeparatorInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                       const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                       const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                       const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                       const GGS_actionMap /* constinArgument_inActionMap */,
                                                                       const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                       const GGS_classMap /* constinArgument_inClassMap */,
                                                                       GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                       GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                       GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                       GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astSeparatorInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutSeparatorInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astDividerInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                     const GGS_bool /* constinArgument_inPreferences */,
                                                                     const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                     const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                     const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                     const GGS_actionMap /* constinArgument_inActionMap */,
                                                                     const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                     const GGS_classMap /* constinArgument_inClassMap */,
                                                                     GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                     GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                     GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                     GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astDividerInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutDividerInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astLocalViewInstruction generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astLocalViewInstruction temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutLocalViewInstructionGeneration::init_21_ (temp_0.readProperty_mLocalView ().readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedViewInstruction generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                               const GGS_bool constinArgument_inPreferences,
                                                               const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                               const GGS_actionMap constinArgument_inActionMap,
                                                               const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                               const GGS_classMap constinArgument_inClassMap,
                                                               GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                               GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                               GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                               GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList var_formalParameterList_40440 ;
  GGS_astAutoLayoutViewFunctionMap var_functionMap_40471 ;
  const GGS_astComputedViewInstruction temp_0 = this ;
  GGS_lstring joker_40425_7 ; // Joker input parameter
  GGS_bool joker_40425_6 ; // Joker input parameter
  GGS_bool joker_40425_5 ; // Joker input parameter
  GGS_bool joker_40425_4 ; // Joker input parameter
  GGS_bool joker_40425_3 ; // Joker input parameter
  GGS_bool joker_40425_2 ; // Joker input parameter
  GGS_bool joker_40425_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_40425_7, joker_40425_6, joker_40425_5, joker_40425_4, joker_40425_3, joker_40425_2, joker_40425_1, var_formalParameterList_40440, var_functionMap_40471, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 870)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList temp_1 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 876)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_40543 = temp_1 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_astComputedViewInstruction temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_40440.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 877)).objectCompare (temp_3.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 877)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_astComputedViewInstruction temp_4 = this ;
      const GGS_astComputedViewInstruction temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_40440.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 879)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 879)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 879)).add_operation (temp_5.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 879)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 879)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 879)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 879)), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 878)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GGS_astComputedViewInstruction temp_7 = this ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_40807 (temp_7.readProperty_mParameterList (), EnumerationOrder::up) ;
    cEnumerator_autoLayoutClassParameterList enumerator_40851 (var_formalParameterList_40440, EnumerationOrder::up) ;
    while (enumerator_40807.hasCurrentObject () && enumerator_40851.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_40902 = enumerator_40851.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 882)).unwrappedValue () ;
        if (!enumerator_40851.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 882)).isValuated ()) {
          test_8 = kBoolFalse ;
        }
        if (kBoolTrue == test_8) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_40947 = enumerator_40807.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 882)).unwrappedValue () ;
          if (!enumerator_40807.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 882)).isValuated ()) {
            test_8 = kBoolFalse ;
          }
          if (kBoolTrue == test_8) {
            GGS_classKind var_typeKind_41042 ;
            GGS_propertyMap joker_41052_3 ; // Joker input parameter
            GGS_actionMap joker_41052_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_41052_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_40902.readProperty_name (), var_typeKind_41042, joker_41052_3, joker_41052_2, joker_41052_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)) ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              const GGS_classKind_2E_atomic var_atomicTypeKind_41072 = var_typeKind_41042.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 884)).unwrappedValue () ;
              if (!var_typeKind_41042.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 884)).isValuated ()) {
                test_9 = kBoolFalse ;
              }
              if (kBoolTrue == test_9) {
                const GGS_typeKind_2E_enumType var_enumKind_41113 = var_atomicTypeKind_41072.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 884)).unwrappedValue () ;
                if (!var_atomicTypeKind_41072.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 884)).isValuated ()) {
                  test_9 = kBoolFalse ;
                }
                if (kBoolTrue == test_9) {
                  GGS_uint joker_41224 ; // Joker input parameter
                  var_enumKind_41113.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_40947.readProperty_name (), joker_41224, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 885)) ;
                }
              }
            }
            if (kBoolFalse == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_formalTypeEnum_40902.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 887)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_40807.current_mParameterType (HERE).objectCompare (enumerator_40851.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_40807.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_40851.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)).add_operation (extensionGetter_string (enumerator_40807.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)) ;
          }
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_40807.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_40851.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_40807.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_40851.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 893)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 893)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 893)) ;
        }
      }
      switch (enumerator_40807.current_mParameter (HERE).enumValue ()) {
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
        {
          GGS_astAbstractViewInstructionDeclaration extractedValue_41642_instruction_0 ;
          enumerator_40807.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_41642_instruction_0) ;
          GGS_abstractViewInstructionGeneration var_viewInstruction_42164 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_41642_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_42164, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 897)) ;
          {
          var_parameterList_40543.setter_append (enumerator_40807.current_mParameterName (HERE).readProperty_string (), GGS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 912)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 912)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)) ;
          }
          {
          ioArgument_ioImplicitViewFunctionGenerationList.setter_append (var_viewInstruction_42164, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 913)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
        {
          GGS_lstring extractedValue_42407_entityName_0 ;
          enumerator_40807.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_42407_entityName_0) ;
          GGS_classKind var_classKind_42468 ;
          GGS_propertyMap joker_42479_3 ; // Joker input parameter
          GGS_actionMap joker_42479_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_42479_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_42407_entityName_0, var_classKind_42468, joker_42479_3, joker_42479_2, joker_42479_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 915)) ;
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = var_classKind_42468.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 916)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 916)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_42407_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 917)) ;
            }
          }
          {
          var_parameterList_40543.setter_append (enumerator_40807.current_mParameterName (HERE).readProperty_string (), extractedValue_42407_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 919)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 919)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
        {
          GGS_string extractedValue_42678_stringValue_0 ;
          enumerator_40807.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_42678_stringValue_0) ;
          {
          var_parameterList_40543.setter_append (enumerator_40807.current_mParameterName (HERE).readProperty_string (), extractedValue_42678_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 921)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
        {
          GGS_string extractedValue_42765_title_0 ;
          GGS_runActionDescriptor extractedValue_42772_run_1 ;
          GGS_multipleBindingDescriptor extractedValue_42777_enabledBinding_2 ;
          enumerator_40807.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_42765_title_0, extractedValue_42772_run_1, extractedValue_42777_enabledBinding_2) ;
          GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_43079 ;
          {
          routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__21_ (extractedValue_42772_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 927)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_43079, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 923)) ;
          }
          GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_43415 ;
          {
          routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_42777_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_43415, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 933)) ;
          }
          GGS_string var_s_43462 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_42765_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 943)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 943)) ;
          switch (var_runBindingGeneration_43079.enumValue ()) {
          case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
            {
              var_s_43462.plusAssign_operation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 946)) ;
            }
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
            {
              GGS_string extractedValue_43654_targetName_0 ;
              GGS_string extractedValue_43666_actionName_1 ;
              GGS_string extractedValue_43678_runTargetName_2 ;
              var_runBindingGeneration_43079.getAssociatedValuesFor_run (extractedValue_43654_targetName_0, extractedValue_43666_actionName_1, extractedValue_43678_runTargetName_2) ;
              var_s_43462.plusAssign_operation(GGS_string (", target: ").add_operation (extractedValue_43654_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (extractedValue_43678_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (extractedValue_43666_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_43415.enumValue ()) {
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
            {
              var_s_43462.plusAssign_operation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 952)) ;
            }
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
            {
              GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_43951_binding_0 ;
              var_enabledBindingGeneration_43415.getAssociatedValuesFor_enabled (extractedValue_43951_binding_0) ;
              var_s_43462.plusAssign_operation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_43951_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)) ;
            }
            break ;
          }
          var_s_43462.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 956)) ;
          {
          var_parameterList_40543.setter_append (enumerator_40807.current_mParameterName (HERE).readProperty_string (), var_s_43462, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 957)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
        {
          GGS_lstring extractedValue_44115_enumTypeName_0 ;
          GGS_lstring extractedValue_44129_funcName_1 ;
          enumerator_40807.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_44115_enumTypeName_0, extractedValue_44129_funcName_1) ;
          GGS_classKind var_type_44207 ;
          GGS_propertyMap joker_44213_3 ; // Joker input parameter
          GGS_actionMap joker_44213_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_44213_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_44115_enumTypeName_0, var_type_44207, joker_44213_3, joker_44213_2, joker_44213_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 959)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = var_type_44207.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 960)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 960)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_44115_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 961)) ;
            }
          }
          if (kBoolFalse == test_17) {
            GGS_typeKind var_typeKind_44371 ;
            var_type_44207.method_extractAtomic (var_typeKind_44371, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 963)) ;
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = var_typeKind_44371.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 964)).boolEnum () ;
              if (kBoolTrue == test_19) {
                GGS_enumFuncMap var_funcMap_44475 ;
                GGS_string joker_44457_2 ; // Joker input parameter
                GGS_enumConstantMap joker_44457_1 ; // Joker input parameter
                var_typeKind_44371.method_extractEnumType (joker_44457_2, joker_44457_1, var_funcMap_44475, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 965)) ;
                GGS_enumFunAssociationSortedList joker_44525 ; // Joker input parameter
                var_funcMap_44475.method_searchKey (extractedValue_44129_funcName_1, joker_44525, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 966)) ;
              }
            }
            if (kBoolFalse == test_19) {
              TC_Array <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_44115_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 968)) ;
            }
          }
          {
          var_parameterList_40543.setter_append (enumerator_40807.current_mParameterName (HERE).readProperty_string (), extractedValue_44115_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)).add_operation (extractedValue_44129_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)) ;
          }
        }
        break ;
      }
      enumerator_40807.gotoNextObject () ;
      enumerator_40851.gotoNextObject () ;
    }
  }
  GGS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_45253 ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_45334 ;
  GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_45409 ;
  GGS_string var_inTableViewBindingGeneration_45448 ;
  GGS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_45537 ;
  {
  const GGS_astComputedViewInstruction temp_21 = this ;
  const GGS_astComputedViewInstruction temp_22 = this ;
  const GGS_astComputedViewInstruction temp_23 = this ;
  const GGS_astComputedViewInstruction temp_24 = this ;
  const GGS_astComputedViewInstruction temp_25 = this ;
  const GGS_astComputedViewInstruction temp_26 = this ;
  const GGS_astComputedViewInstruction temp_27 = this ;
  routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_21.readProperty_mAutoLayoutViewClassName (), temp_22.readProperty_mTableValueBinding (), temp_23.readProperty_mRunActionDescriptor (), temp_24.readProperty_mEnabledBindingDescriptor (), temp_25.readProperty_mHiddenBindingDescriptor (), temp_26.readProperty_mGraphicController (), temp_27.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_45253, var_multipleBindingGenerationList_45334, var_runBindingGeneration_45409, var_inTableViewBindingGeneration_45448, var_ebViewGraphicControllerBindingGeneration_45537, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 976)) ;
  }
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_46033 ;
  const GGS_astComputedViewInstruction temp_28 = this ;
  extensionMethod_checkViewFunctionCallList (temp_28.readProperty_mFunctionCallList (), var_functionMap_40471, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_46033, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)) ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    const GGS_astComputedViewInstruction temp_30 = this ;
    test_29 = GGS_bool (ComparisonKind::notEqual, temp_30.readProperty_mOutletName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_29) {
      {
      const GGS_astComputedViewInstruction temp_31 = this ;
      const GGS_astComputedViewInstruction temp_32 = this ;
      const GGS_astComputedViewInstruction temp_33 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_31.readProperty_mOutletName (), temp_32.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_33.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1018)) ;
      }
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GGS_astComputedViewInstruction temp_35 = this ;
    test_34 = GGS_bool (ComparisonKind::notEqual, temp_35.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_34) {
      {
      const GGS_astComputedViewInstruction temp_36 = this ;
      const GGS_astComputedViewInstruction temp_37 = this ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_36.readProperty_mConfiguratorName (), temp_37.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)) ;
      }
    }
  }
  const GGS_astComputedViewInstruction temp_38 = this ;
  const GGS_astComputedViewInstruction temp_39 = this ;
  const GGS_astComputedViewInstruction temp_40 = this ;
  const GGS_astComputedViewInstruction temp_41 = this ;
  outArgument_outInstruction = GGS_autoLayoutComputedViewInstructionGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_38.readProperty_mAutoLayoutViewClassName (), var_parameterList_40543, var_funcCallList_46033, var_regularBindingsGenerationList_45253, var_multipleBindingGenerationList_45334, var_runBindingGeneration_45409, var_inTableViewBindingGeneration_45448, var_ebViewGraphicControllerBindingGeneration_45537, temp_39.readProperty_mConfiguratorName ().readProperty_string (), temp_40.readProperty_mOutletName ().readProperty_string (), temp_41.readProperty_mOutletIsArray (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding??????????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                                                   const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                   const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                                   const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                                   const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                                   const GGS_actionMap constinArgument_inActionMap,
                                                                                                                   const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                                                   const GGS_lstring constinArgument_inTypeName,
                                                                                                                   const GGS_tableValueBinding constinArgument_inTableValueBinding,
                                                                                                                   const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                                                   const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                                   const GGS_multipleBindingDescriptor constinArgument_inHiddenBindingDescriptor,
                                                                                                                   const GGS_graphicController constinArgument_inGraphicController,
                                                                                                                   const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                                                   GGS_autoLayoutRegularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                                                   GGS_autoLayoutMultipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                                                   GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                                                   GGS_string & outArgument_outTableViewBindingGeneration,
                                                                                                                   GGS_autoLayoutViewGraphicControllerBindingGeneration & outArgument_outEBViewGraphicControllerBindingGeneration,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGeneration.drop () ; // Release 'out' argument
  GGS_autoLayoutRegularBindingsGenerationList temp_0 = GGS_autoLayoutRegularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_autoLayoutMultipleBindingGenerationList temp_1 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1066)) ;
  outArgument_outMultipleBindingGenerationList = temp_1 ;
  outArgument_outTableViewBindingGeneration = GGS_string::makeEmptyString () ;
  GGS_bool var_handlesRunAction_48168 ;
  GGS_bool var_handlesTableViewBinding_48201 ;
  GGS_bool var_handlesEnabledBinding_48241 ;
  GGS_bool var_handlesHiddenBinding_48279 ;
  GGS_bool var_handleGraphicControllerBinding_48316 ;
  GGS_lstring joker_48149 ; // Joker input parameter
  GGS_bool joker_48352_3 ; // Joker input parameter
  GGS_autoLayoutClassParameterList joker_48352_2 ; // Joker input parameter
  GGS_astAutoLayoutViewFunctionMap joker_48352_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_48149, var_handlesRunAction_48168, var_handlesTableViewBinding_48201, var_handlesEnabledBinding_48241, var_handlesHiddenBinding_48279, var_handleGraphicControllerBinding_48316, joker_48352_3, joker_48352_2, joker_48352_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1068)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1079)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GGS_graphicController::Enumeration::invalid:
    break ;
  case GGS_graphicController::Enumeration::enum_none:
    break ;
  case GGS_graphicController::Enumeration::enum_defined:
    {
      GGS_lstring extractedValue_48506_controllerName_0 ;
      GGS_lstring extractedValue_48531_propertyName_1 ;
      constinArgument_inGraphicController.getAssociatedValuesFor_defined (extractedValue_48506_controllerName_0, extractedValue_48531_propertyName_1) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_handleGraphicControllerBinding_48316.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1083)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)) ;
        }
      }
      if (kBoolFalse == test_2) {
        GGS_propertyKind var_kind_48799 ;
        GGS_actionMap joker_48813_2 ; // Joker input parameter
        GGS_bool joker_48813_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_48506_controllerName_0, var_kind_48799, joker_48813_2, joker_48813_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1086)) ;
        switch (var_kind_48799.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_48866__0 ;
            GGS_propertyAccessibility extractedValue_48866__1 ;
            var_kind_48799.getAssociatedValuesFor_property (extractedValue_48866__0, extractedValue_48866__1) ;
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1093)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_48970__0 ;
            GGS_propertyAccessibility extractedValue_48970__1 ;
            GGS_bool extractedValue_48970__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_48970__3 ;
            var_kind_48799.getAssociatedValuesFor_toMany (extractedValue_48970__0, extractedValue_48970__1, extractedValue_48970__2, extractedValue_48970__3) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_49073__0 ;
            GGS_propertyAccessibility extractedValue_49073__1 ;
            GGS_bool extractedValue_49073__2 ;
            GGS_toOneOppositeRelationship extractedValue_49073__3 ;
            GGS_bool extractedValue_49073__4 ;
            var_kind_48799.getAssociatedValuesFor_toOne (extractedValue_49073__0, extractedValue_49073__1, extractedValue_49073__2, extractedValue_49073__3, extractedValue_49073__4) ;
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1097)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_49185_entityName_0 ;
            GGS_bool extractedValue_49197_graphic_1 ;
            var_kind_48799.getAssociatedValuesFor_arrayController (extractedValue_49185_entityName_0, extractedValue_49197_graphic_1) ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, extractedValue_48531_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = extractedValue_49197_graphic_1.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1100)).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    TC_Array <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_49185_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1101)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1101)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1101)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_7) {
              GGS_propertyMap var_observablePropertyMap_49520 ;
              GGS_classKind joker_49499 ; // Joker input parameter
              GGS_actionMap joker_49555_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_49555_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_49185_entityName_0, joker_49499, var_observablePropertyMap_49520, joker_49555_2, joker_49555_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1104)) ;
              GGS_propertyKind var_propertyKind_49633 ;
              GGS_actionMap joker_49647_2 ; // Joker input parameter
              GGS_bool joker_49647_1 ; // Joker input parameter
              var_observablePropertyMap_49520.method_searchKey (extractedValue_48531_propertyName_1, var_propertyKind_49633, joker_49647_2, joker_49647_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)) ;
              switch (var_propertyKind_49633.enumValue ()) {
              case GGS_propertyKind::Enumeration::invalid:
                break ;
              case GGS_propertyKind::Enumeration::enum_property:
                {
                  GGS_typeKind extractedValue_49709__0 ;
                  GGS_propertyAccessibility extractedValue_49709__1 ;
                  var_propertyKind_49633.getAssociatedValuesFor_property (extractedValue_49709__0, extractedValue_49709__1) ;
                  TC_Array <FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1113)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toMany:
                {
                  GGS_lstring extractedValue_49818_kEntityName_0 ;
                  GGS_propertyAccessibility extractedValue_49831__1 ;
                  GGS_bool extractedValue_49834_isGraphic_2 ;
                  GGS_toManyRelationshipOptionAST extractedValue_49845__3 ;
                  var_propertyKind_49633.getAssociatedValuesFor_toMany (extractedValue_49818_kEntityName_0, extractedValue_49831__1, extractedValue_49834_isGraphic_2, extractedValue_49845__3) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = extractedValue_49834_isGraphic_2.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1115)).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      TC_Array <FixItDescription> fixItArray12 ;
                      inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_49818_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1116)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1116)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1116)) ;
                    }
                  }
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toOne:
                {
                  GGS_lstring extractedValue_50033__0 ;
                  GGS_propertyAccessibility extractedValue_50033__1 ;
                  GGS_bool extractedValue_50033__2 ;
                  GGS_toOneOppositeRelationship extractedValue_50033__3 ;
                  GGS_bool extractedValue_50033__4 ;
                  var_propertyKind_49633.getAssociatedValuesFor_toOne (extractedValue_50033__0, extractedValue_50033__1, extractedValue_50033__2, extractedValue_50033__3, extractedValue_50033__4) ;
                  TC_Array <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1119)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_arrayController:
                {
                  GGS_lstring extractedValue_50152__0 ;
                  GGS_bool extractedValue_50152__1 ;
                  var_propertyKind_49633.getAssociatedValuesFor_arrayController (extractedValue_50152__0, extractedValue_50152__1) ;
                  TC_Array <FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1121)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_selectionController:
                {
                  GGS_string extractedValue_50274__0 ;
                  var_propertyKind_49633.getAssociatedValuesFor_selectionController (extractedValue_50274__0) ;
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1123)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_50417__0 ;
            var_kind_48799.getAssociatedValuesFor_selectionController (extractedValue_50417__0) ;
            TC_Array <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_48506_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1127)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (extractedValue_48506_controllerName_0.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1129)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inTableValueBinding.enumValue ()) {
  case GGS_tableValueBinding::Enumeration::invalid:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
    {
      GGS_lstring extractedValue_50751_controllerName_0 ;
      constinArgument_inTableValueBinding.getAssociatedValuesFor_tableValueBinding (extractedValue_50751_controllerName_0) ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_handlesTableViewBinding_48201.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1136)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1137)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1137)), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1137)) ;
        }
      }
      if (kBoolFalse == test_17) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_19) {
            GGS_propertyKind var_kind_51027 ;
            GGS_actionMap joker_51041_2 ; // Joker input parameter
            GGS_bool joker_51041_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_50751_controllerName_0, var_kind_51027, joker_51041_2, joker_51041_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1139)) ;
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = var_kind_51027.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1144)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1144)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_50751_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1145)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_50751_controllerName_0.readProperty_string () ;
          }
        }
        if (kBoolFalse == test_19) {
          GGS_propertyKind var_kind_51344 ;
          GGS_actionMap joker_51358_2 ; // Joker input parameter
          GGS_bool joker_51358_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50751_controllerName_0, var_kind_51344, joker_51358_2, joker_51358_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1149)) ;
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = var_kind_51344.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1154)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1154)).boolEnum () ;
            if (kBoolTrue == test_22) {
              TC_Array <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_50751_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1155)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_50751_controllerName_0.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__21_ (constinArgument_inRunActionDescriptor, var_handlesRunAction_48168, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1161)) ;
  }
  GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_52120 ;
  {
  routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_48241, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_52120, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1172)) ;
  }
  switch (var_enabledBindingGeneration_52120.enumValue ()) {
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
    {
      GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_52213_binding_0 ;
      var_enabledBindingGeneration_52120.getAssociatedValuesFor_enabled (extractedValue_52213_binding_0) ;
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("enabled"), extractedValue_52213_binding_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1185)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inHiddenBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_52424_expression_0 ;
      constinArgument_inHiddenBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_52424_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_52708 ;
      GGS_typeKind var_type_52747 ;
      GGS_location var_errorLocation_52774 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_52424_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_52708, var_type_52747, var_errorLocation_52774, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1191)) ;
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_type_52747.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1201)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1201)).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_52774, GGS_string ("expression is not boolean"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1202)) ;
        }
      }
      enumGalgasBool test_26 = kBoolTrue ;
      if (kBoolTrue == test_26) {
        test_26 = var_handlesHiddenBinding_48279.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1204)).boolEnum () ;
        if (kBoolTrue == test_26) {
          TC_Array <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (var_errorLocation_52774, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1205)) ;
        }
      }
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("hidden"), var_hiddenExpression_52708, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1207)) ;
      }
    }
    break ;
  }
  {
  GGS_string temp_28 ;
  const enumGalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_29) {
    temp_28 = GGS_string ("preferences_") ;
  }else if (kBoolFalse == test_29) {
    temp_28 = GGS_string ("self.") ;
  }
  routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_28, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1213)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                               const GGS_bool constinArgument_inHandlesEnabledBinding,
                                                                                                               const GGS_bool constinArgument_inPreferences,
                                                                                                               const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                               const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                               GGS_autolayoutEnabledBindingForGeneration & outArgument_outEnabledBindingGeneration,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnabledBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inEnabledBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    {
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1240)) ;
    }
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_54223_expression_0 ;
      constinArgument_inEnabledBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_54223_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_54507 ;
      GGS_typeKind var_type_54546 ;
      GGS_location var_errorLocation_54573 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54223_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_54507, var_type_54546, var_errorLocation_54573, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1242)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1252)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_54573, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1253)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_54546.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1255)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1255)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_54573, GGS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1256)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (var_enableExpression_54507  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1258)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__21_ (const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                          const GGS_bool constinArgument_inHandlesRunAction,
                                                                                          const GGS_bool constinArgument_inPreferences,
                                                                                          const GGS_lstring constinArgument_inTypeName,
                                                                                          const GGS_actionMap constinArgument_inActionMap,
                                                                                          const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                          const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                          GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GGS_runActionDescriptor::Enumeration::invalid:
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_noAction:
    {
      outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1276)) ;
    }
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_action:
    {
      GGS_lstring extractedValue_55491_target_0 ;
      GGS_lstring extractedValue_55508_action_1 ;
      constinArgument_inRunActionDescriptor.getAssociatedValuesFor_action (extractedValue_55491_target_0, extractedValue_55508_action_1) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1278)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1279)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1279)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1279)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, extractedValue_55491_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_55508_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1282)) ;
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("self"), extractedValue_55508_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1283)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GGS_actionMap var_controllerActionMap_56035 ;
          GGS_propertyKind joker_56007 ; // Joker input parameter
          GGS_bool joker_56064 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_55491_target_0, joker_56007, var_controllerActionMap_56035, joker_56064, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1289)) ;
          var_controllerActionMap_56035.method_searchKey (extractedValue_55508_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1295)) ;
          GGS_string temp_3 ;
          const enumGalgasBool test_4 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GGS_string ("preferences_") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GGS_string::makeEmptyString () ;
          }
          outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (temp_3.add_operation (extractedValue_55491_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1297)), extractedValue_55508_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299)).add_operation (extractedValue_55491_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1296)) ;
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding?prefs???????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                       const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                                       const GGS_lstring constinArgument_inOutletTypeName,
                                                                                       const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                       const GGS_string constinArgument_inSelfSwiftName,
                                                                                       GGS_autoLayoutRegularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_56989 (constinArgument_inRegularBindingList, EnumerationOrder::up) ;
  while (enumerator_56989.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1320)) ;
    GGS_outletBindingModelList var_boundModelTypeList_57089 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1321)) ;
    GGS_boundObjectList var_boundModelListForGeneration_57138 = temp_1 ;
    cEnumerator_observablePropertyList enumerator_57180 (enumerator_56989.current_mObservablePropertyList (HERE), EnumerationOrder::up) ;
    while (enumerator_57180.hasCurrentObject ()) {
      GGS_propertyKind var_kind_57454 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_57488 ;
      GGS_string var_defaultValueAsString_57561 ;
      GGS_propertyMap temp_2 ;
      const enumGalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = constinArgument_inPreferencesPropertyMap ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_57180.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_2, var_kind_57454, var_swiftTypeStringForTransientFunctionArgument_57488, var_defaultValueAsString_57561, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1323)) ;
      switch (var_kind_57454.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_57660__0 ;
          GGS_propertyAccessibility extractedValue_57660__1 ;
          GGS_bool extractedValue_57660__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_57660__3 ;
          var_kind_57454.getAssociatedValuesFor_toMany (extractedValue_57660__0, extractedValue_57660__1, extractedValue_57660__2, extractedValue_57660__3) ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57180.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1334)), GGS_string ("a toMany property cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1334)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_57764__0 ;
          GGS_propertyAccessibility extractedValue_57764__1 ;
          GGS_bool extractedValue_57764__2 ;
          GGS_toOneOppositeRelationship extractedValue_57764__3 ;
          GGS_bool extractedValue_57764__4 ;
          var_kind_57454.getAssociatedValuesFor_toOne (extractedValue_57764__0, extractedValue_57764__1, extractedValue_57764__2, extractedValue_57764__3, extractedValue_57764__4) ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57180.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336)), GGS_string ("a toOne property cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_57877__0 ;
          GGS_bool extractedValue_57877__1 ;
          var_kind_57454.getAssociatedValuesFor_arrayController (extractedValue_57877__0, extractedValue_57877__1) ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57180.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1338)), GGS_string ("an array controller cannot be bound"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1338)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_57996__0 ;
          var_kind_57454.getAssociatedValuesFor_selectionController (extractedValue_57996__0) ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57180.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1340)), GGS_string ("a selection controller cannot be bound"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1340)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_57138.setter_append (extensionGetter_modelStringForSelf (enumerator_57180.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)), var_kind_57454, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)) ;
      }
      {
      var_boundModelTypeList_57089.setter_append (var_kind_57454, extensionGetter_location (enumerator_57180.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)) ;
      }
      enumerator_57180.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_8 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1346)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_58359 = temp_8 ;
    GGS_controllerBindingOptionDecoratedList temp_9 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1347)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_58446 = temp_9 ;
    GGS_lstring var_outletTypeName_58496 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_58538 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1350)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).isValid ()) {
      uint32_t variant_58559 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1350)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).uintValue () ;
      bool loop_58559 = true ;
      while (loop_58559) {
        loop_58559 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_58496.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_58538 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).isValid () ;
        if (loop_58559) {
          loop_58559 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_58496.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_58538 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).boolValue () ;
        }
        if (loop_58559 && (0 == variant_58559)) {
          loop_58559 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1350)) ;
        }
        if (loop_58559) {
          variant_58559 -- ;
          var_continues_58538 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_58801 ;
          GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_58836 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_58496, var_superOutletClassName_58801, var_bindingMap_58836, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1352)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_bindingMap_58836.getter_hasKey (enumerator_56989.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1357)).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_bindingMap_58836.method_searchKey (enumerator_56989.current_mBindingName (HERE), var_outletBindingSpecificationModelList_58359, var_controllerBindingOptionDecoratedList_58446, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1358)) ;
            }
          }
          if (kBoolFalse == test_10) {
            var_continues_58538 = GGS_bool (true) ;
            var_outletTypeName_58496 = var_superOutletClassName_58801 ;
          }
        }
      }
    }
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_continues_58538.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_56989.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1369)) ;
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_57089.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1370)).objectCompare (var_outletBindingSpecificationModelList_58359.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1370)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_56989.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_58359.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1372)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1372)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1372)).add_operation (var_boundModelTypeList_57089.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1374)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1373)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1373)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1371)) ;
        }
      }
      if (kBoolFalse == test_13) {
        cEnumerator_outletBindingSpecificationModelList enumerator_59555 (var_outletBindingSpecificationModelList_58359, EnumerationOrder::up) ;
        cEnumerator_outletBindingModelList enumerator_59650 (var_boundModelTypeList_57089, EnumerationOrder::up) ;
        while (enumerator_59555.hasCurrentObject () && enumerator_59650.hasCurrentObject ()) {
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            GGS_bool test_16 = enumerator_59555.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_isTransient (enumerator_59650.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1377)) ;
            }
            test_15 = test_16.boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_59650.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1378)) ;
            }
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            GGS_bool test_19 = enumerator_59555.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1380)) ;
            if (kBoolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_isEnumType (enumerator_59650.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1380)) ;
            }
            test_18 = test_19.boolEnum () ;
            if (kBoolTrue == test_18) {
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_59555.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1381)).objectCompare (extensionGetter_swiftTypeName (enumerator_59650.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1381)))).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_59650.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_59555.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1382)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1382)), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1382)) ;
              }
            }
          }
          enumerator_59555.gotoNextObject () ;
          enumerator_59650.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_60221 = GGS_string::makeEmptyString () ;
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_58446.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1388)).objectCompare (enumerator_56989.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1388)))).boolEnum () ;
      if (kBoolTrue == test_22) {
        GGS_string var_s_60347 ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_58446.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1390)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            var_s_60347 = GGS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_23) {
          var_s_60347 = GGS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_60549 (var_controllerBindingOptionDecoratedList_58446, EnumerationOrder::up) ;
          while (enumerator_60549.hasCurrentObject ()) {
            var_s_60347.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_60549.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)).add_operation (extensionGetter_swiftTypeName (enumerator_60549.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)) ;
            enumerator_60549.gotoNextObject () ;
          }
        }
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_56989.current_mBindingName (HERE).readProperty_location (), var_s_60347, fixItArray24  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1398)) ;
      }
    }
    if (kBoolFalse == test_22) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_60774 (var_controllerBindingOptionDecoratedList_58446, EnumerationOrder::up) ;
      cEnumerator_bindingOptionList enumerator_60861 (enumerator_56989.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
      while (enumerator_60774.hasCurrentObject () && enumerator_60861.hasCurrentObject ()) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_60774.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_60861.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_60861.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_60774.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)) ;
          }
        }
        GGS_string var_optionValueAsString_61253 ;
        GGS_typeKindList temp_27 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1405)) ;
        temp_27.enterElement (GGS_typeKindList_2E_element::init_21_ (enumerator_60774.current_mOptionType (HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1405)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_60861.current_mOptionValue (HERE).ptr (), temp_27, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_61253, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)) ;
        var_bindingOptionString_60221.plusAssign_operation(GGS_string (", ").add_operation (enumerator_60774.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)).add_operation (var_optionValueAsString_61253, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)) ;
        enumerator_60774.gotoNextObject () ;
        enumerator_60861.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (enumerator_56989.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_57138, var_bindingOptionString_60221, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1413)) ;
    }
    enumerator_56989.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHStackViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GGS_actionMap constinArgument_inActionMap,
                                                                        const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GGS_classMap constinArgument_inClassMap,
                                                                        GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1437)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_62689 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_63196 ;
  const GGS_astHStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_63196, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1454)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_63260 = temp_2 ;
  const GGS_astHStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_63368_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_63368_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_63678 ;
      GGS_typeKind var_type_63717 ;
      GGS_location var_errorLocation_63744 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_63368_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_63678, var_type_63717, var_errorLocation_63744, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1458)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_type_63717.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1468)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1468)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_63744, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1469)) ;
        }
      }
      {
      var_multipleBindingGenerationList_63260.setter_append (GGS_string ("hidden"), var_hiddenExpression_63678, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1471)) ;
      }
    }
    break ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_6 = this ;
  cEnumerator_astViewInstructionList enumerator_63965 (temp_6.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_63965.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_64392 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_63965.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_64392, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1477)) ;
    {
    var_instructionList_62689.setter_append (var_generatedInstruction_64392, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1492)) ;
    }
    enumerator_63965.gotoNextObject () ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GGS_hStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_63196, var_instructionList_62689, var_multipleBindingGenerationList_63260, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVStackViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GGS_actionMap constinArgument_inActionMap,
                                                                        const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GGS_classMap constinArgument_inClassMap,
                                                                        GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1518)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_65768 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_66275 ;
  const GGS_astVStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_66275, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1535)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_66339 = temp_2 ;
  const GGS_astVStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_66447_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_66447_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66757 ;
      GGS_typeKind var_type_66796 ;
      GGS_location var_errorLocation_66823 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66447_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66757, var_type_66796, var_errorLocation_66823, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1539)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_type_66796.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1549)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1549)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_66823, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1550)) ;
        }
      }
      {
      var_multipleBindingGenerationList_66339.setter_append (GGS_string ("hidden"), var_hiddenExpression_66757, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1552)) ;
      }
    }
    break ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_6 = this ;
  cEnumerator_astViewInstructionList enumerator_67024 (temp_6.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_67024.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_67451 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_67024.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67451, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1555)) ;
    {
    var_instructionList_65768.setter_append (var_generatedInstruction_67451, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1570)) ;
    }
    enumerator_67024.gotoNextObject () ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GGS_vStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_66275, var_instructionList_65768, var_multipleBindingGenerationList_66339, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedHorizontalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                              const GGS_string constinArgument_inViewName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)).add_operation (GGS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)) ;
  result_result.plusAssign_operation(GGS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)) ;
  const GGS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)) ;
  const GGS_computedHorizontalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_75817 (temp_1.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_75817.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("    let ").add_operation (enumerator_75817.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)).add_operation (enumerator_75817.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)) ;
    enumerator_75817.gotoNextObject () ;
  }
  const GGS_computedHorizontalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_75942 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GGS_uint index_75937 (uint32_t (0)) ;
  while (enumerator_75942.hasCurrentObject ()) {
    GGS_string var_name_75999 = GGS_string ("view_").add_operation (index_75937.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1757)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1757)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_75942.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_75999, GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1758)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1758)) ;
    result_result.plusAssign_operation(GGS_string ("    _ = hStackView.appendView (").add_operation (var_name_75999, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1759)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1759)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1759)) ;
    enumerator_75942.gotoNextObject () ;
    index_75937.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1756)) ;
  }
  result_result.plusAssign_operation(GGS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1761)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1762)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedVerticalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_string constinArgument_inViewName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)).add_operation (GGS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)) ;
  result_result.plusAssign_operation(GGS_string ("    let vStackView = AutoLayoutVerticalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)) ;
  const GGS_computedVerticalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)) ;
  const GGS_computedVerticalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_76785 (temp_1.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_76785.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("    let ").add_operation (enumerator_76785.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)).add_operation (enumerator_76785.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)) ;
    enumerator_76785.gotoNextObject () ;
  }
  const GGS_computedVerticalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_76910 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GGS_uint index_76905 (uint32_t (0)) ;
  while (enumerator_76910.hasCurrentObject ()) {
    GGS_string var_name_76967 = GGS_string ("view_").add_operation (index_76905.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1776)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1776)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_76910.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_76967, GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1777)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1777)) ;
    result_result.plusAssign_operation(GGS_string ("    _ = vStackView.appendView (").add_operation (var_name_76967, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1778)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1778)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1778)) ;
    enumerator_76910.gotoNextObject () ;
    index_76905.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1775)) ;
  }
  result_result.plusAssign_operation(GGS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1780)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1781)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1797)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1797)).add_operation (GGS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1797)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_autoLayoutSeparatorInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1807)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1807)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1807)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1809)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1809)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1809)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                        const GGS_string constinArgument_inName,
                                                                                        const GGS_string constinArgument_inIndentation,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_autoLayoutDividerInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1822)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1822)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1822)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_string constinArgument_inName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_80255 (temp_1.readProperty_mParameterList (), EnumerationOrder::up) ;
  while (enumerator_80255.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_80255.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)).add_operation (enumerator_80255.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)) ;
    if (enumerator_80255.hasNextObject ()) {
      result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1846)) ;
    }
    enumerator_80255.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1848)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1849)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_80499 (temp_3.readProperty_mRegularBindingsGenerationList (), EnumerationOrder::up) ;
  while (enumerator_80499.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (enumerator_80499.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)) ;
    cEnumerator_boundObjectList enumerator_80649 (enumerator_80499.current_mBoundObjectList (HERE), EnumerationOrder::up) ;
    while (enumerator_80649.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_80649.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1853)) ;
      if (enumerator_80649.hasNextObject ()) {
        result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1854)) ;
      }
      enumerator_80649.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_80499.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1856)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1856)) ;
    enumerator_80499.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_80810 (temp_4.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_80810.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (enumerator_80810.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_80810.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)) ;
    enumerator_80810.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_81027_targetName_0 ;
      GGS_string extractedValue_81039_actionName_1 ;
      GGS_string extractedValue_81051_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_81027_targetName_0, extractedValue_81039_actionName_1, extractedValue_81051_targetTypeName_2) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (extractedValue_81027_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (extractedValue_81051_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (extractedValue_81039_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1867)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1867)) ;
    }
    break ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::invalid:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_none:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_binding:
    {
      GGS_string extractedValue_81420_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_81420_controllerName_0) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (extractedValue_81420_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)) ;
    }
    break ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GGS_string temp_9 ;
      const enumGalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GGS_string ("preferences_") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GGS_string ("self.") ;
      }
      GGS_string var_prefix_81592 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (var_prefix_81592, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (kBoolTrue == test_14) {
          const GGS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)) ;
        }
      }
      if (kBoolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)) ;
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1897)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_82744 (temp_1.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_82744.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (enumerator_82744.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_82744.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)) ;
    enumerator_82744.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_82916 (temp_2.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_82916.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (enumerator_82916.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (enumerator_82916.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)) ;
    enumerator_82916.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1904)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1904)) ;
  GGS_string var_indentation_83088 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1905)) ;
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_83130 (temp_3.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GGS_uint index_83125 (uint32_t (0)) ;
  while (enumerator_83130.hasCurrentObject ()) {
    GGS_string var_name_83188 = constinArgument_inName.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)).add_operation (index_83125.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1907)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_83130.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_83188, var_indentation_83088, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1908)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1908)) ;
    result_result.plusAssign_operation(var_indentation_83088.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (var_name_83188, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)) ;
    enumerator_83130.gotoNextObject () ;
    index_83125.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1906)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1911)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1911)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)).add_operation (GGS_string (" = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)) ;
  const GGS_vStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1921)) ;
  const GGS_vStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_83953 (temp_1.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_83953.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (enumerator_83953.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_83953.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)) ;
    enumerator_83953.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_84125 (temp_2.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_84125.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (enumerator_84125.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (enumerator_84125.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)) ;
    enumerator_84125.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1928)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1928)) ;
  GGS_string var_indentation_84297 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1929)) ;
  const GGS_vStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_84339 (temp_3.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GGS_uint index_84334 (uint32_t (0)) ;
  while (enumerator_84339.hasCurrentObject ()) {
    GGS_string var_name_84397 = constinArgument_inName.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1931)).add_operation (index_84334.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1931)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1931)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_84339.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_84397, var_indentation_84297, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1932)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1932)) ;
    result_result.plusAssign_operation(var_indentation_84297.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (var_name_84397, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)) ;
    enumerator_84339.gotoNextObject () ;
    index_84334.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1930)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_outletClassDeclarationAST temp_0 = this ;
  const GGS_outletClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 18)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_outletClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("outlet-class.ggs", 20)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outletClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_outletClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_outletClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_outletClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_outletClassDeclarationAST temp_2 = this ;
      const GGS_outletClassDeclarationAST temp_3 = this ;
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      const GGS_outletClassDeclarationAST temp_6 = this ;
      const GGS_outletClassDeclarationAST temp_7 = this ;
      const GGS_outletClassDeclarationAST temp_8 = this ;
      ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.ggs", 107)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 105)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bool var_hasRunAction_3833 ;
    GGS_bool var_handlesTableValueBinding_3858 ;
    GGS_bool var_hasEnabled_3895 ;
    GGS_bool var_hasHidden_3918 ;
    GGS_bool var_handlesGraphicControllerBinding_3940 ;
    const GGS_outletClassDeclarationAST temp_9 = this ;
    GGS_lstring joker_3818 ; // Joker input parameter
    GGS_bool joker_3979 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3818, var_hasRunAction_3833, var_handlesTableValueBinding_3858, var_hasEnabled_3895, var_hasHidden_3918, var_handlesGraphicControllerBinding_3940, joker_3979, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 116)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GGS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3833 COMMA_SOURCE_FILE ("outlet-class.ggs", 126)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GGS_outletClassDeclarationAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 127)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GGS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3858 COMMA_SOURCE_FILE ("outlet-class.ggs", 129)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GGS_outletClassDeclarationAST temp_16 = this ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 130)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GGS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3895 COMMA_SOURCE_FILE ("outlet-class.ggs", 132)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GGS_outletClassDeclarationAST temp_20 = this ;
        TC_Array <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 133)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GGS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3918 COMMA_SOURCE_FILE ("outlet-class.ggs", 135)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GGS_outletClassDeclarationAST temp_24 = this ;
        TC_Array <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 136)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GGS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3940 COMMA_SOURCE_FILE ("outlet-class.ggs", 138)).boolEnum () ;
      if (kBoolTrue == test_26) {
        const GGS_outletClassDeclarationAST temp_28 = this ;
        TC_Array <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray29  COMMA_SOURCE_FILE ("outlet-class.ggs", 139)) ;
      }
    }
    {
    const GGS_outletClassDeclarationAST temp_30 = this ;
    const GGS_outletClassDeclarationAST temp_31 = this ;
    const GGS_outletClassDeclarationAST temp_32 = this ;
    const GGS_outletClassDeclarationAST temp_33 = this ;
    const GGS_outletClassDeclarationAST temp_34 = this ;
    const GGS_outletClassDeclarationAST temp_35 = this ;
    const GGS_outletClassDeclarationAST temp_36 = this ;
    const GGS_outletClassDeclarationAST temp_37 = this ;
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3833 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3858 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3895 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3918 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3940 COMMA_SOURCE_FILE ("outlet-class.ggs", 148)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 141)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                   const GGS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_outletClassBindingSpecificationList enumerator_4836 (constinArgument_inBindingSpecificationListMap, EnumerationOrder::up) ;
  while (enumerator_4836.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 130)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4937 = temp_0 ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_5003 (enumerator_4836.current_mOutletClassBindingSpecificationModelList (HERE), EnumerationOrder::up) ;
    while (enumerator_5003.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_5003.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GGS_enumConstantMap temp_2 = GGS_enumConstantMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)) ;
          GGS_enumFuncMap temp_3 = GGS_enumFuncMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)) ;
          var_outletBindingSpecificationModelList_4937.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), temp_2, temp_3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)), enumerator_5003.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GGS_classKind var_classKind_5416 ;
        GGS_propertyMap joker_5427_3 ; // Joker input parameter
        GGS_actionMap joker_5427_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5427_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5003.current_mModelTypeName (HERE), var_classKind_5416, joker_5427_3, joker_5427_2, joker_5427_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 138)) ;
        GGS_typeKind var_typeKind_5454 ;
        switch (var_classKind_5416.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_5003.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 142)) ;
            var_typeKind_5454.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_5625_kind_0 ;
            var_classKind_5416.getAssociatedValuesFor_atomic (extractedValue_5625_kind_0) ;
            var_typeKind_5454 = extractedValue_5625_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_5682__0 ;
            var_classKind_5416.getAssociatedValuesFor_document (extractedValue_5682__0) ;
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_5003.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5454.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_5794__0 ;
            GGS_bool extractedValue_5794__1 ;
            GGS_bool extractedValue_5794__2 ;
            GGS_bool extractedValue_5794__3 ;
            var_classKind_5416.getAssociatedValuesFor_entity (extractedValue_5794__0, extractedValue_5794__1, extractedValue_5794__2, extractedValue_5794__3) ;
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_5003.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
            var_typeKind_5454.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_4937.setter_append (var_typeKind_5454, enumerator_5003.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 150)) ;
        }
      }
      enumerator_5003.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_6056 = temp_7 ;
    cEnumerator_controllerBindingOptionList enumerator_6120 (enumerator_4836.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
    while (enumerator_6120.hasCurrentObject ()) {
      GGS_classKind var_classKind_6240 ;
      GGS_propertyMap joker_6251_3 ; // Joker input parameter
      GGS_actionMap joker_6251_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6251_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_6120.current_mOptionTypeName (HERE), var_classKind_6240, joker_6251_3, joker_6251_2, joker_6251_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 155)) ;
      GGS_typeKind var_typeKind_6276 ;
      switch (var_classKind_6240.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_6120.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 159)) ;
          var_typeKind_6276.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_6440_kind_0 ;
          var_classKind_6240.getAssociatedValuesFor_atomic (extractedValue_6440_kind_0) ;
          var_typeKind_6276 = extractedValue_6440_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_6493__0 ;
          var_classKind_6240.getAssociatedValuesFor_document (extractedValue_6493__0) ;
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_6120.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_6276.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_6602__0 ;
          GGS_bool extractedValue_6602__1 ;
          GGS_bool extractedValue_6602__2 ;
          GGS_bool extractedValue_6602__3 ;
          var_classKind_6240.getAssociatedValuesFor_entity (extractedValue_6602__0, extractedValue_6602__1, extractedValue_6602__2, extractedValue_6602__3) ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_6120.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
          var_typeKind_6276.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_6056.setter_append (var_typeKind_6276, enumerator_6120.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 167)) ;
      }
      enumerator_6120.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationMap var_bindingMap_6853 ;
    GGS_lstring var_outletSuperClassName_6881 ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4836.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 172)).boolEnum () ;
      if (kBoolTrue == test_11) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4836.current_mOutletClassName (HERE), var_outletSuperClassName_6881, var_bindingMap_6853, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      GGS_outletBindingSpecificationMap temp_12 = GGS_outletBindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 175)) ;
      var_bindingMap_6853 = temp_12 ;
      GGS_bool joker_7229_6 ; // Joker input parameter
      GGS_bool joker_7229_5 ; // Joker input parameter
      GGS_bool joker_7229_4 ; // Joker input parameter
      GGS_bool joker_7229_3 ; // Joker input parameter
      GGS_bool joker_7229_2 ; // Joker input parameter
      GGS_bool joker_7229_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4836.current_mOutletClassName (HERE), var_outletSuperClassName_6881, joker_7229_6, joker_7229_5, joker_7229_4, joker_7229_3, joker_7229_2, joker_7229_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    var_bindingMap_6853.setter_insertKey (enumerator_4836.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4937, var_controllerBindingOptionDecoratedList_6056, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 178)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4836.current_mOutletClassName (HERE), var_outletSuperClassName_6881, var_bindingMap_6853, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 183)) ;
    }
    enumerator_4836.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets?????????&!!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                             const GGS_string /* constinArgument_inRootEntityName */,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_outletDeclarationList constinArgument_inOutletDeclarationList,
                                                                                             const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                             const GGS_actionMap constinArgument_inActionMap,
                                                                                             const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                             GGS_generationStruct & ioArgument_ioGeneration,
                                                                                             GGS_regularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                             GGS_multipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                             GGS_actionBindingListForGeneration & outArgument_outTargetActionList,
                                                                                             GGS_decoratedOutletMap & outArgument_outletMap,
                                                                                             GGS_tableViewBindingGenerationList & outArgument_outTableViewBindingGenerationList,
                                                                                             GGS_ebViewGraphicControllerBindingGenerationList & outArgument_outEBViewGraphicControllerBindingGenerationList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outTargetActionList.drop () ; // Release 'out' argument
  outArgument_outletMap.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGenerationList.drop () ; // Release 'out' argument
  GGS_regularBindingsGenerationList temp_0 = GGS_regularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 203)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_actionBindingListForGeneration temp_1 = GGS_actionBindingListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 204)) ;
  outArgument_outTargetActionList = temp_1 ;
  GGS_multipleBindingGenerationList temp_2 = GGS_multipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 205)) ;
  outArgument_outMultipleBindingGenerationList = temp_2 ;
  GGS_decoratedOutletMap temp_3 = GGS_decoratedOutletMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 206)) ;
  outArgument_outletMap = temp_3 ;
  GGS_tableViewBindingGenerationList temp_4 = GGS_tableViewBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 207)) ;
  outArgument_outTableViewBindingGenerationList = temp_4 ;
  GGS_ebViewGraphicControllerBindingGenerationList temp_5 = GGS_ebViewGraphicControllerBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = temp_5 ;
  cEnumerator_outletDeclarationList enumerator_8391 (constinArgument_inOutletDeclarationList, EnumerationOrder::up) ;
  while (enumerator_8391.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8391.current_mOutletName (HERE), enumerator_8391.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 210)) ;
    }
    GGS_bool var_handlesRunAction_8632 ;
    GGS_bool var_handlesTableViewBinding_8667 ;
    GGS_bool var_handlesEnabledBinding_8709 ;
    GGS_bool var_handlesHiddenBinding_8749 ;
    GGS_bool var_handleGraphicControllerBinding_8788 ;
    GGS_bool var_outletClassIsUserDefined_8837 ;
    GGS_lstring joker_8611 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8391.current_mOutletTypeName (HERE), joker_8611, var_handlesRunAction_8632, var_handlesTableViewBinding_8667, var_handlesEnabledBinding_8709, var_handlesHiddenBinding_8749, var_handleGraphicControllerBinding_8788, var_outletClassIsUserDefined_8837, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 211)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_outletClassIsUserDefined_8837.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 221)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.setter_insert (enumerator_8391.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 222)) ;
        }
      }
    }
    switch (enumerator_8391.current_mGraphicController (HERE).enumValue ()) {
    case GGS_graphicController::Enumeration::invalid:
      break ;
    case GGS_graphicController::Enumeration::enum_none:
      break ;
    case GGS_graphicController::Enumeration::enum_defined:
      {
        GGS_lstring extractedValue_9104_controllerName_0 ;
        GGS_lstring extractedValue_9129_propertyName_1 ;
        enumerator_8391.current_mGraphicController (HERE).getAssociatedValuesFor_defined (extractedValue_9104_controllerName_0, extractedValue_9129_propertyName_1) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_handleGraphicControllerBinding_8788.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 228)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_8391.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8391.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GGS_propertyKind var_kind_9433 ;
          GGS_actionMap joker_9449_2 ; // Joker input parameter
          GGS_bool joker_9449_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_9104_controllerName_0, var_kind_9433, joker_9449_2, joker_9449_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 231)) ;
          switch (var_kind_9433.enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_9508__0 ;
              GGS_propertyAccessibility extractedValue_9508__1 ;
              var_kind_9433.getAssociatedValuesFor_property (extractedValue_9508__0, extractedValue_9508__1) ;
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 238)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_9616__0 ;
              GGS_propertyAccessibility extractedValue_9616__1 ;
              GGS_bool extractedValue_9616__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_9616__3 ;
              var_kind_9433.getAssociatedValuesFor_toMany (extractedValue_9616__0, extractedValue_9616__1, extractedValue_9616__2, extractedValue_9616__3) ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 240)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_9723__0 ;
              GGS_propertyAccessibility extractedValue_9723__1 ;
              GGS_bool extractedValue_9723__2 ;
              GGS_toOneOppositeRelationship extractedValue_9723__3 ;
              GGS_bool extractedValue_9723__4 ;
              var_kind_9433.getAssociatedValuesFor_toOne (extractedValue_9723__0, extractedValue_9723__1, extractedValue_9723__2, extractedValue_9723__3, extractedValue_9723__4) ;
              TC_Array <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 242)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            {
              GGS_lstring extractedValue_9839_entityName_0 ;
              GGS_bool extractedValue_9851_graphic_1 ;
              var_kind_9433.getAssociatedValuesFor_arrayController (extractedValue_9839_entityName_0, extractedValue_9851_graphic_1) ;
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, extractedValue_9129_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = extractedValue_9851_graphic_1.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 245)).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      TC_Array <FixItDescription> fixItArray14 ;
                      inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_9839_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_12) {
                GGS_propertyMap var_observablePropertyMap_10192 ;
                GGS_classKind joker_10169 ; // Joker input parameter
                GGS_actionMap joker_10229_2 ; // Joker input parameter
                GGS_propertyGenerationList joker_10229_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9839_entityName_0, joker_10169, var_observablePropertyMap_10192, joker_10229_2, joker_10229_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 249)) ;
                GGS_propertyKind var_propertyKind_10311 ;
                GGS_actionMap joker_10325_2 ; // Joker input parameter
                GGS_bool joker_10325_1 ; // Joker input parameter
                var_observablePropertyMap_10192.method_searchKey (extractedValue_9129_propertyName_1, var_propertyKind_10311, joker_10325_2, joker_10325_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 255)) ;
                switch (var_propertyKind_10311.enumValue ()) {
                case GGS_propertyKind::Enumeration::invalid:
                  break ;
                case GGS_propertyKind::Enumeration::enum_property:
                  {
                    GGS_typeKind extractedValue_10391__0 ;
                    GGS_propertyAccessibility extractedValue_10391__1 ;
                    var_propertyKind_10311.getAssociatedValuesFor_property (extractedValue_10391__0, extractedValue_10391__1) ;
                    TC_Array <FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 258)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toMany:
                  {
                    GGS_lstring extractedValue_10504_kEntityName_0 ;
                    GGS_propertyAccessibility extractedValue_10517__1 ;
                    GGS_bool extractedValue_10520_isGraphic_2 ;
                    GGS_toManyRelationshipOptionAST extractedValue_10531__3 ;
                    var_propertyKind_10311.getAssociatedValuesFor_toMany (extractedValue_10504_kEntityName_0, extractedValue_10517__1, extractedValue_10520_isGraphic_2, extractedValue_10531__3) ;
                    enumGalgasBool test_16 = kBoolTrue ;
                    if (kBoolTrue == test_16) {
                      test_16 = extractedValue_10520_isGraphic_2.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 260)).boolEnum () ;
                      if (kBoolTrue == test_16) {
                        TC_Array <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_10504_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 261)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 261)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 261)) ;
                      }
                    }
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toOne:
                  {
                    GGS_lstring extractedValue_10727__0 ;
                    GGS_propertyAccessibility extractedValue_10727__1 ;
                    GGS_bool extractedValue_10727__2 ;
                    GGS_toOneOppositeRelationship extractedValue_10727__3 ;
                    GGS_bool extractedValue_10727__4 ;
                    var_propertyKind_10311.getAssociatedValuesFor_toOne (extractedValue_10727__0, extractedValue_10727__1, extractedValue_10727__2, extractedValue_10727__3, extractedValue_10727__4) ;
                    TC_Array <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 264)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_arrayController:
                  {
                    GGS_lstring extractedValue_10850__0 ;
                    GGS_bool extractedValue_10850__1 ;
                    var_propertyKind_10311.getAssociatedValuesFor_arrayController (extractedValue_10850__0, extractedValue_10850__1) ;
                    TC_Array <FixItDescription> fixItArray19 ;
                    inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 266)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_selectionController:
                  {
                    GGS_string extractedValue_10976__0 ;
                    var_propertyKind_10311.getAssociatedValuesFor_selectionController (extractedValue_10976__0) ;
                    TC_Array <FixItDescription> fixItArray20 ;
                    inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 268)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            {
              GGS_string extractedValue_11127__0 ;
              var_kind_9433.getAssociatedValuesFor_selectionController (extractedValue_11127__0) ;
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_9104_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
            }
            break ;
          }
          {
          outArgument_outEBViewGraphicControllerBindingGenerationList.setter_append (enumerator_8391.current_mOutletName (HERE).readProperty_string (), extractedValue_9104_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 274)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8391.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GGS_tableValueBinding::Enumeration::invalid:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
      {
        GGS_lstring extractedValue_11522_controllerName_0 ;
        enumerator_8391.current_mTableValueBindingDescriptor (HERE).getAssociatedValuesFor_tableValueBinding (extractedValue_11522_controllerName_0) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_handlesTableViewBinding_8667.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 284)).boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_8391.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8391.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 285)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 285)), fixItArray23  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 285)) ;
          }
        }
        if (kBoolFalse == test_22) {
          GGS_propertyKind var_kind_11820 ;
          GGS_actionMap joker_11836_2 ; // Joker input parameter
          GGS_bool joker_11836_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11522_controllerName_0, var_kind_11820, joker_11836_2, joker_11836_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 287)) ;
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            test_24 = var_kind_11820.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 292)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 292)).boolEnum () ;
            if (kBoolTrue == test_24) {
              TC_Array <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_11522_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray25  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 293)) ;
            }
          }
          {
          outArgument_outTableViewBindingGenerationList.setter_append (enumerator_8391.current_mOutletName (HERE).readProperty_string (), extractedValue_11522_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 295)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8391.current_mRunDescriptor (HERE).enumValue ()) {
    case GGS_runActionDescriptor::Enumeration::invalid:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_noAction:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_action:
      {
        GGS_lstring extractedValue_12227_target_0 ;
        GGS_lstring extractedValue_12244_action_1 ;
        enumerator_8391.current_mRunDescriptor (HERE).getAssociatedValuesFor_action (extractedValue_12227_target_0, extractedValue_12244_action_1) ;
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = var_handlesRunAction_8632.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 305)).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_8391.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8391.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 306)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 306)), fixItArray27  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 306)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GGS_bool (ComparisonKind::equal, extractedValue_12227_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12244_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 308)) ;
              {
              outArgument_outTargetActionList.setter_append (enumerator_8391.current_mOutletName (HERE).readProperty_string (), GGS_string ("self"), extractedValue_12244_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 309)) ;
              }
            }
          }
          if (kBoolFalse == test_28) {
            GGS_actionMap var_controllerActionMap_12779 ;
            GGS_propertyKind joker_12749 ; // Joker input parameter
            GGS_bool joker_12810 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12227_target_0, joker_12749, var_controllerActionMap_12779, joker_12810, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 316)) ;
            var_controllerActionMap_12779.method_searchKey (extractedValue_12244_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 322)) ;
            {
            GGS_string temp_29 ;
            const enumGalgasBool test_30 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_30) {
              temp_29 = GGS_string ("preferences_") ;
            }else if (kBoolFalse == test_30) {
              temp_29 = GGS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.setter_append (enumerator_8391.current_mOutletName (HERE).readProperty_string (), temp_29.add_operation (extractedValue_12227_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 325)), extractedValue_12244_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)).add_operation (extractedValue_12227_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 323)) ;
            }
          }
        }
      }
      break ;
    }
    switch (enumerator_8391.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_13287_expression_0 ;
        enumerator_8391.current_mEnabledBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_13287_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13585 ;
        GGS_typeKind var_type_13626 ;
        GGS_location var_errorLocation_13655 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13287_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13585, var_type_13626, var_errorLocation_13655, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 335)) ;
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesEnabledBinding_8709.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 345)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_13655, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 346)) ;
          }
        }
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          test_33 = var_type_13626.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 348)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 348)).boolEnum () ;
          if (kBoolTrue == test_33) {
            TC_Array <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (var_errorLocation_13655, GGS_string ("expression is not boolean"), fixItArray34  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 349)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8391.current_mOutletName (HERE).readProperty_string (), GGS_string ("enabled"), var_enableExpression_13585, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 351)) ;
        }
      }
      break ;
    }
    switch (enumerator_8391.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_14195_expression_0 ;
        enumerator_8391.current_mHiddenBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_14195_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14493 ;
        GGS_typeKind var_type_14534 ;
        GGS_location var_errorLocation_14563 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_14195_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14493, var_type_14534, var_errorLocation_14563, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 361)) ;
        enumGalgasBool test_35 = kBoolTrue ;
        if (kBoolTrue == test_35) {
          test_35 = var_type_14534.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 371)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 371)).boolEnum () ;
          if (kBoolTrue == test_35) {
            TC_Array <FixItDescription> fixItArray36 ;
            inCompiler->emitSemanticError (var_errorLocation_14563, GGS_string ("expression is not boolean"), fixItArray36  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 372)) ;
          }
        }
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_handlesHiddenBinding_8749.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 374)).boolEnum () ;
          if (kBoolTrue == test_37) {
            TC_Array <FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticError (var_errorLocation_14563, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray38  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 375)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8391.current_mOutletName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_14493, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 377)) ;
        }
      }
      break ;
    }
    {
    GGS_string temp_39 ;
    const enumGalgasBool test_40 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_40) {
      temp_39 = GGS_string ("preferences_") ;
    }else if (kBoolFalse == test_40) {
      temp_39 = GGS_string ("self.") ;
    }
    routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8391.current_mOutletTypeName (HERE), enumerator_8391.current_mOutletName (HERE).readProperty_string (), enumerator_8391.current_mRegularBindingList (HERE), temp_39, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 384)) ;
    }
    enumerator_8391.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                        const GGS_lstring constinArgument_inOutletTypeName,
                                                                        const GGS_string constinArgument_inOutletName,
                                                                        const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                        const GGS_string constinArgument_inSelfSwiftName,
                                                                        GGS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_15954 (constinArgument_inRegularBindingList, EnumerationOrder::up) ;
  while (enumerator_15954.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 413)) ;
    GGS_outletBindingModelList var_boundModelTypeList_16054 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 414)) ;
    GGS_boundObjectList var_boundModelListForGeneration_16103 = temp_1 ;
    cEnumerator_observablePropertyList enumerator_16145 (enumerator_15954.current_mObservablePropertyList (HERE), EnumerationOrder::up) ;
    while (enumerator_16145.hasCurrentObject ()) {
      GGS_propertyKind var_kind_16363 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_16397 ;
      GGS_string var_defaultValueAsString_16470 ;
      extensionMethod_analyzeObservableProperty (enumerator_16145.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16363, var_swiftTypeStringForTransientFunctionArgument_16397, var_defaultValueAsString_16470, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 416)) ;
      switch (var_kind_16363.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_16569__0 ;
          GGS_propertyAccessibility extractedValue_16569__1 ;
          GGS_bool extractedValue_16569__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_16569__3 ;
          var_kind_16363.getAssociatedValuesFor_toMany (extractedValue_16569__0, extractedValue_16569__1, extractedValue_16569__2, extractedValue_16569__3) ;
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16145.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 427)), GGS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 427)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_16673__0 ;
          GGS_propertyAccessibility extractedValue_16673__1 ;
          GGS_bool extractedValue_16673__2 ;
          GGS_toOneOppositeRelationship extractedValue_16673__3 ;
          GGS_bool extractedValue_16673__4 ;
          var_kind_16363.getAssociatedValuesFor_toOne (extractedValue_16673__0, extractedValue_16673__1, extractedValue_16673__2, extractedValue_16673__3, extractedValue_16673__4) ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16145.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 429)), GGS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 429)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_16786__0 ;
          GGS_bool extractedValue_16786__1 ;
          var_kind_16363.getAssociatedValuesFor_arrayController (extractedValue_16786__0, extractedValue_16786__1) ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16145.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)), GGS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_16905__0 ;
          var_kind_16363.getAssociatedValuesFor_selectionController (extractedValue_16905__0) ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16145.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)), GGS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_16103.setter_append (extensionGetter_modelStringForSelf (enumerator_16145.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 436)), var_kind_16363, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 435)) ;
      }
      {
      var_boundModelTypeList_16054.setter_append (var_kind_16363, extensionGetter_location (enumerator_16145.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)) ;
      }
      enumerator_16145.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_6 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 442)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17292 = temp_6 ;
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 443)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17379 = temp_7 ;
    GGS_lstring var_outletTypeName_17429 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_17471 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 446)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).isValid ()) {
      uint32_t variant_17492 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 446)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).uintValue () ;
      bool loop_17492 = true ;
      while (loop_17492) {
        loop_17492 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17429.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17471 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).isValid () ;
        if (loop_17492) {
          loop_17492 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17429.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17471 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).boolValue () ;
        }
        if (loop_17492 && (0 == variant_17492)) {
          loop_17492 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 446)) ;
        }
        if (loop_17492) {
          variant_17492 -- ;
          var_continues_17471 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_17724 ;
          GGS_outletBindingSpecificationMap var_bindingMap_17790 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17429, var_superOutletClassName_17724, var_bindingMap_17790, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 448)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_bindingMap_17790.getter_hasKey (enumerator_15954.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_bindingMap_17790.method_searchKey (enumerator_15954.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17292, var_controllerBindingOptionDecoratedList_17379, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 454)) ;
            }
          }
          if (kBoolFalse == test_8) {
            var_continues_17471 = GGS_bool (true) ;
            var_outletTypeName_17429 = var_superOutletClassName_17724 ;
          }
        }
      }
    }
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_continues_17471.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15954.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 465)) ;
      }
    }
    if (kBoolFalse == test_9) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_16054.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 466)).objectCompare (var_outletBindingSpecificationModelList_17292.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 466)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_15954.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17292.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 468)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 468)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 468)).add_operation (var_boundModelTypeList_16054.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 470)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 469)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 469)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 470)), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 467)) ;
        }
      }
      if (kBoolFalse == test_11) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18509 (var_outletBindingSpecificationModelList_17292, EnumerationOrder::up) ;
        cEnumerator_outletBindingModelList enumerator_18604 (var_boundModelTypeList_16054, EnumerationOrder::up) ;
        while (enumerator_18509.hasCurrentObject () && enumerator_18604.hasCurrentObject ()) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            GGS_bool test_14 = enumerator_18509.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_14.boolEnum ()) {
              test_14 = extensionGetter_isTransient (enumerator_18604.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 473)) ;
            }
            test_13 = test_14.boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_18604.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 474)) ;
            }
          }
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            GGS_bool test_17 = enumerator_18509.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = extensionGetter_isEnumType (enumerator_18604.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            }
            test_16 = test_17.boolEnum () ;
            if (kBoolTrue == test_16) {
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_18509.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 477)).objectCompare (extensionGetter_swiftTypeName (enumerator_18604.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 477)))).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (enumerator_18604.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18509.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)) ;
              }
            }
          }
          enumerator_18509.gotoNextObject () ;
          enumerator_18604.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_19175 = GGS_string::makeEmptyString () ;
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_17379.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 484)).objectCompare (enumerator_15954.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("outlet-declaration.ggs", 484)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        GGS_string var_s_19301 ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_17379.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 486)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_21) {
            var_s_19301 = GGS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_21) {
          var_s_19301 = GGS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19503 (var_controllerBindingOptionDecoratedList_17379, EnumerationOrder::up) ;
          while (enumerator_19503.hasCurrentObject ()) {
            var_s_19301.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_19503.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (extensionGetter_swiftTypeName (enumerator_19503.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)) ;
            enumerator_19503.gotoNextObject () ;
          }
        }
        TC_Array <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15954.current_mBindingName (HERE).readProperty_location (), var_s_19301, fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 494)) ;
      }
    }
    if (kBoolFalse == test_20) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19728 (var_controllerBindingOptionDecoratedList_17379, EnumerationOrder::up) ;
      cEnumerator_bindingOptionList enumerator_19825 (enumerator_15954.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
      while (enumerator_19728.hasCurrentObject () && enumerator_19825.hasCurrentObject ()) {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_19728.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19825.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_23) {
            TC_Array <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_19825.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_19728.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 499)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 499)), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 499)) ;
          }
        }
        GGS_string var_optionValueAsString_20217 ;
        GGS_typeKindList temp_25 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 502)) ;
        temp_25.enterElement (GGS_typeKindList_2E_element::init_21_ (enumerator_19728.current_mOptionType (HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 502)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19825.current_mOptionValue (HERE).ptr (), temp_25, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_20217, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 501)) ;
        var_bindingOptionString_19175.plusAssign_operation(GGS_string (", ").add_operation (enumerator_19728.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)).add_operation (var_optionValueAsString_20217, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)) ;
        enumerator_19728.gotoNextObject () ;
        enumerator_19825.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (constinArgument_inOutletName, enumerator_15954.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_16103, var_bindingOptionString_19175, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 510)) ;
    }
    enumerator_15954.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_768 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_768, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 17)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_768, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.ggs", 18)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_768, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.ggs", 19)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1042 (temp_6.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_1042.hasCurrentObject ()) {
    switch (enumerator_1042.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1126_propertyName_0 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1126_propertyName_0) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GGS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)).add_operation (extractedValue_1126_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)), extractedValue_1126_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1347_propertyName_0 ;
        GGS_lstring extractedValue_1361__1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1347_propertyName_0, extractedValue_1361__1) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GGS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GGS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)).add_operation (extractedValue_1347_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)), extractedValue_1347_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1573_relationshipName_0 ;
        GGS_lstring extractedValue_1591__1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1573_relationshipName_0, extractedValue_1591__1) ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GGS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GGS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)).add_operation (extractedValue_1573_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)), extractedValue_1573_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1803_relationshipName_0 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1803_relationshipName_0) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GGS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GGS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)).add_operation (extractedValue_1803_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)), extractedValue_1803_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2061_propertyName_0 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2061_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)).add_operation (extractedValue_2061_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)), extractedValue_2061_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 40)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2226_propertyName_0 ;
        GGS_lstring extractedValue_2240__1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2226_propertyName_0, extractedValue_2240__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)).add_operation (extractedValue_2226_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)), extractedValue_2226_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 42)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2389_propertyName_0 ;
        GGS_lstring extractedValue_2403__1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2389_propertyName_0, extractedValue_2403__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)).add_operation (extractedValue_2389_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)), extractedValue_2389_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 44)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2553_propertyName_0 ;
        GGS_lstring extractedValue_2567__1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2553_propertyName_0, extractedValue_2567__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)).add_operation (extractedValue_2553_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)), extractedValue_2553_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 46)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2715_propertyName_0 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2715_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)).add_operation (extractedValue_2715_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)), extractedValue_2715_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 48)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2871_propertyName_0 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2871_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (extractedValue_2871_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)), extractedValue_2871_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 50)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_3033_propertyName_0 ;
        GGS_lstring extractedValue_3047__1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_3033_propertyName_0, extractedValue_3047__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (extractedValue_3033_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)), extractedValue_3033_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 52)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3197_controllerName_0 ;
        GGS_lstring extractedValue_3220_propertyName_1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3197_controllerName_0, extractedValue_3220_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)).add_operation (extractedValue_3197_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)), extractedValue_3197_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 54)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3399_controllerName_0 ;
        GGS_lstring extractedValue_3422_propertyName_1 ;
        GGS_lstring extractedValue_3443_secondaryPropertyName_2 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3399_controllerName_0, extractedValue_3422_propertyName_1, extractedValue_3443_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)).add_operation (extractedValue_3399_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)), extractedValue_3399_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 56)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3627_controllerName_0 ;
        GGS_lstring extractedValue_3650_propertyName_1 ;
        GGS_lstring extractedValue_3671_secondaryPropertyName_2 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3627_controllerName_0, extractedValue_3650_propertyName_1, extractedValue_3671_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)).add_operation (extractedValue_3627_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)), extractedValue_3627_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 58)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3853_controllerName_0 ;
        GGS_lstring extractedValue_3876_propertyName_1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3853_controllerName_0, extractedValue_3876_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)).add_operation (extractedValue_3853_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)), extractedValue_3853_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 60)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4144_superEntityName_0 ;
        GGS_lstring extractedValue_4170_propertyName_1 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4144_superEntityName_0, extractedValue_4170_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (extractedValue_4144_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)).add_operation (extractedValue_4170_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)), extractedValue_4170_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 65)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4342_superEntityName_0 ;
        GGS_lstring extractedValue_4368_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4382__2 ;
        enumerator_1042.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4342_superEntityName_0, extractedValue_4368_propertyName_1, extractedValue_4382__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GGS_lstring::init_21__21_ (extractedValue_4342_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)).add_operation (extractedValue_4368_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)), extractedValue_4368_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1042.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_computedPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 75)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 75)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_6602 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 130)) ;
  if (nullptr != objectArray_6602) {
    macroValidSharedObject (objectArray_6602, cMapElement_classMap) ;
    GGS_classKind var_classKind_6770 ;
    const GGS_computedPropertyDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_6781_3 ; // Joker input parameter
    GGS_actionMap joker_6781_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_6781_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6770, joker_6781_3, joker_6781_2, joker_6781_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 133)) ;
    switch (var_classKind_6770.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        const GGS_computedPropertyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.ggs", 136)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_6921_kind_0 ;
        var_classKind_6770.getAssociatedValuesFor_atomic (extractedValue_6921_kind_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_4 = this ;
        GGS_actionMap temp_5 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 141)) ;
        objectArray_6602->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6921_kind_0, GGS_propertyAccessibility::class_func_computed (SOURCE_FILE ("computed-property.ggs", 140))  COMMA_SOURCE_FILE ("computed-property.ggs", 140)), temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 138)) ;
        }
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_7111__0 ;
        var_classKind_6770.getAssociatedValuesFor_document (extractedValue_7111__0) ;
        const GGS_computedPropertyDeclarationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("computed-property.ggs", 145)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_7214__0 ;
        GGS_bool extractedValue_7214__1 ;
        GGS_bool extractedValue_7214__2 ;
        GGS_bool extractedValue_7214__3 ;
        var_classKind_6770.getAssociatedValuesFor_entity (extractedValue_7214__0, extractedValue_7214__1, extractedValue_7214__2, extractedValue_7214__3) ;
        const GGS_computedPropertyDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("computed-property.ggs", 147)) ;
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & ioArgument_ioGeneration,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_7836 ;
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_7847_3 ; // Joker input parameter
  GGS_actionMap joker_7847_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7847_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7836, joker_7847_3, joker_7847_2, joker_7847_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 161)) ;
  GGS_typeKind var_typeKind_7884 ;
  switch (var_classKind_7836.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 166)) ;
      var_typeKind_7884.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8046_kind_0 ;
      var_classKind_7836.getAssociatedValuesFor_atomic (extractedValue_8046_kind_0) ;
      var_typeKind_7884 = extractedValue_8046_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8091__0 ;
      var_classKind_7836.getAssociatedValuesFor_document (extractedValue_8091__0) ;
      const GGS_computedPropertyDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 170)) ;
      var_typeKind_7884.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8206__0 ;
      GGS_bool extractedValue_8206__1 ;
      GGS_bool extractedValue_8206__2 ;
      GGS_bool extractedValue_8206__3 ;
      var_classKind_7836.getAssociatedValuesFor_entity (extractedValue_8206__0, extractedValue_8206__1, extractedValue_8206__2, extractedValue_8206__3) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 172)) ;
      var_typeKind_7884.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_8351 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GGS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GGS_propertyMap temp_9 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 177)) ;
      var_rootProperties_8351 = temp_9 ;
    }
  }
  if (kBoolFalse == test_7) {
    const GGS_computedPropertyDeclarationAST temp_10 = this ;
    GGS_classKind joker_8506 ; // Joker input parameter
    GGS_actionMap joker_8527_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_8527_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mRootEntityName (), joker_8506, var_rootProperties_8351, joker_8527_2, joker_8527_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 179)) ;
  }
  GGS_classKind var_currentClassKind_8631 ;
  GGS_propertyMap var_properties_8654 ;
  const GGS_computedPropertyDeclarationAST temp_11 = this ;
  GGS_actionMap joker_8666_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8666_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_11.readProperty_mClassName (), var_currentClassKind_8631, var_properties_8654, joker_8666_2, joker_8666_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 182)) ;
  GGS_transientDependencyListForGeneration temp_12 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 184)) ;
  GGS_transientDependencyListForGeneration var_dependencies_8746 = temp_12 ;
  const GGS_computedPropertyDeclarationAST temp_13 = this ;
  cEnumerator_observablePropertyList enumerator_8771 (temp_13.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_8771.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_8960 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_8995 ;
    GGS_string var_defaultValueAsString_9059 ;
    extensionMethod_analyzeObservableProperty (enumerator_8771.current_mObservableProperty (HERE), var_rootProperties_8351, ioArgument_ioSemanticContext, var_properties_8654, var_dependencyKind_8960, var_swiftTypeStringForTransientFunctionArgument_8995, var_defaultValueAsString_9059, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 186)) ;
    switch (var_dependencyKind_8960.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9209__0 ;
        GGS_bool extractedValue_9209__1 ;
        var_dependencyKind_8960.getAssociatedValuesFor_arrayController (extractedValue_9209__0, extractedValue_9209__1) ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8771.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 199)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("computed-property.ggs", 199)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_9329__0 ;
        var_dependencyKind_8960.getAssociatedValuesFor_selectionController (extractedValue_9329__0) ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8771.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 201)), GGS_string ("only an atomic property can be observed"), fixItArray15  COMMA_SOURCE_FILE ("computed-property.ggs", 201)) ;
      }
      break ;
    }
    {
    var_dependencies_8746.setter_append (enumerator_8771.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8771.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 205)), var_swiftTypeStringForTransientFunctionArgument_8995, var_defaultValueAsString_9059, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 203)) ;
    }
    enumerator_8771.gotoNextObject () ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_16 = this ;
  const GGS_computedPropertyDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7884, GGS_string ("computed"), var_dependencies_8746, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 210)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_18 = this ;
  const GGS_computedPropertyDeclarationAST temp_19 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_computeRoutineGeneration::init_21__21__21__21_ (temp_18.readProperty_mClassName ().readProperty_string (), temp_19.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7884, var_dependencies_8746, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 218)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_20 = this ;
  cMapElement_classMap * objectArray_9996 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_20.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 225)) ;
  if (nullptr != objectArray_9996) {
    macroValidSharedObject (objectArray_9996, cMapElement_classMap) ;
    GGS_bool var_generate_10098 ;
    switch (var_currentClassKind_8631.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        var_generate_10098 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_10193__0 ;
        var_currentClassKind_8631.getAssociatedValuesFor_document (extractedValue_10193__0) ;
        var_generate_10098 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_10237__0 ;
        var_currentClassKind_8631.getAssociatedValuesFor_atomic (extractedValue_10237__0) ;
        var_generate_10098 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_10281__0 ;
        GGS_bool extractedValue_10284_graphic_1 ;
        GGS_bool extractedValue_10294__2 ;
        GGS_bool extractedValue_10294__3 ;
        var_currentClassKind_8631.getAssociatedValuesFor_entity (extractedValue_10281__0, extractedValue_10284_graphic_1, extractedValue_10294__2, extractedValue_10294__3) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = extractedValue_10284_graphic_1.boolEnum () ;
          if (kBoolTrue == test_21) {
            const GGS_computedPropertyDeclarationAST temp_22 = this ;
            const GGS_computedPropertyDeclarationAST temp_23 = this ;
            var_generate_10098 = GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_23.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 238)) ;
          }
        }
        if (kBoolFalse == test_21) {
          var_generate_10098 = GGS_bool (true) ;
        }
      }
      break ;
    }
    {
    const GGS_computedPropertyDeclarationAST temp_24 = this ;
    const GGS_computedPropertyDeclarationAST temp_25 = this ;
    objectArray_9996->mProperty_mPropertyGenerationList.setter_append (GGS_computedPropertyGeneration::init_21__21__21__21__21_ (temp_24.readProperty_mComputedPropertyName ().readProperty_string (), temp_25.readProperty_mClassName ().readProperty_string (), var_typeKind_7884, var_dependencies_8746, var_generate_10098, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 243)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 274)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 274)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 274)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 275)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 276)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 276)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 277)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 289)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 289)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 289)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 290)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 291)) ;
  const GGS_computedPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 292)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 293)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 294)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 295)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 296)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 297)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 298)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 299)) ;
  const GGS_computedPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 300)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 300)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 300)) ;
  result_result.plusAssign_operation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 301)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 302)) ;
  const GGS_computedPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 303)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 303)) ;
  result_result.plusAssign_operation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 304)) ;
  result_result.plusAssign_operation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 305)) ;
  result_result.plusAssign_operation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 306)) ;
  result_result.plusAssign_operation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 307)) ;
  result_result.plusAssign_operation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 308)) ;
  result_result.plusAssign_operation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 309)) ;
  result_result.plusAssign_operation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 310)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 311)) ;
  result_result.plusAssign_operation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 312)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 313)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 314)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 315)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 316)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 317)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 318)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 319)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 320)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 321)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 322)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 323)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 324)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 325)) ;
  const GGS_computedPropertyGeneration temp_6 = this ;
  const GGS_computedPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 327)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 328)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 329)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 330)) ;
  result_result.plusAssign_operation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 331)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 332)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 333)) ;
  const GGS_computedPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 334)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 334)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 334)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 335)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 336)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 337)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 338)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 339)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                            const GGS_stringset constinArgument_inOverriddenTransients,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_computedPropertyGeneration temp_1 = this ;
    const GGS_computedPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 348)).operator_not (SOURCE_FILE ("computed-property.ggs", 348)) COMMA_SOURCE_FILE ("computed-property.ggs", 348)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 350)) ;
          const GGS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
          result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
          const GGS_computedPropertyGeneration temp_5 = this ;
          const GGS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GGS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 353)) ;
          result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 354)) ;
          const GGS_computedPropertyGeneration temp_7 = this ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GGS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 355)) ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GGS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
          result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 357)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 359)) ;
        const GGS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GGS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 360)) ;
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 361)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 361)) ;
        const GGS_computedPropertyGeneration temp_11 = this ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 362)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16831 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_computedPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 372)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_computedPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16958 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)) ;
      const GGS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16958.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 376)) ;
          result_result.plusAssign_operation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 377)) ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          const GGS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
          result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 379)) ;
          result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 380)) ;
          result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 381)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GGS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 383)) ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        const GGS_computedPropertyGeneration temp_13 = this ;
        const GGS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
      }
      result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 386)) ;
      const GGS_computedPropertyGeneration temp_15 = this ;
      const GGS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GGS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 387)) ;
      const GGS_computedPropertyGeneration temp_17 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17964 (temp_17.readProperty_mDependencyList (), EnumerationOrder::up) ;
      while (enumerator_17964.hasCurrentObject ()) {
        GGS_string var_s_18004 = extensionGetter_generateAddObserverCall (enumerator_17964.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 389)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::notEqual, var_s_18004.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GGS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_s_18004, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 391)) ;
          }
        }
        enumerator_17964.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computeRoutineGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_computeRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 414)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_computeRoutineGeneration temp_2 = this ;
      const GGS_computeRoutineGeneration temp_3 = this ;
      const GGS_computeRoutineGeneration temp_4 = this ;
      GGS_string var_s_19068 = GGS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 415))) ;
      const GGS_computeRoutineGeneration temp_5 = this ;
      const GGS_computeRoutineGeneration temp_6 = this ;
      GGS_string var_fileName_19232 = GGS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_19232, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)) ;
      }
      GGS_string var_header_19362 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 422)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)) ;
      var_header_19362.plusAssign_operation(GGS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 423)) ;
      var_header_19362.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 424)) ;
      var_header_19362.plusAssign_operation(GGS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 425)) ;
      var_header_19362.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 426)) ;
      GGS_string var_generatedZone_33__19732 = GGS_string ("  }\n\n") ;
      var_generatedZone_33__19732.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 428)) ;
      var_generatedZone_33__19732.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 429)) ;
      var_generatedZone_33__19732.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 430)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19232, GGS_string ("//"), var_header_19362, GGS_string ("\n\n"), var_s_19068, GGS_string ("\n"), var_generatedZone_33__19732, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager (
  "controllers",
  0,
  gWrapperAllFiles_computedPropertyManager_3,
  0,
  gWrapperAllDirectories_computedPropertyManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager (
  "standard-properties",
  0,
  gWrapperAllFiles_computedPropertyManager_1,
  0,
  gWrapperAllDirectories_computedPropertyManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_computedPropertyManager (
  "xcode-project",
  0,
  gWrapperAllFiles_computedPropertyManager_2,
  0,
  gWrapperAllDirectories_computedPropertyManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [4] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  3,
  gWrapperAllDirectories_computedPropertyManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (Compiler * inCompiler,
                                                                                        const GGS_string & in_OWNER_5F_NAME,
                                                                                        const GGS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                        const GGS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//································································································\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  //································································································\n\n  func compute_") ;
  result.appendString (in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue ()) ;
  result.appendString ("_property (_ inValue : ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  GGS_lstring var_node_750 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_750, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 17)) ;
  }
  {
  const GGS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_750, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.ggs", 18)) ;
  }
  {
  const GGS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_750, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.ggs", 19)) ;
  }
  const GGS_transientDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1003 (temp_6.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_1003.hasCurrentObject ()) {
    switch (enumerator_1003.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1087_propertyName_0 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1087_propertyName_0) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_transientDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GGS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)).add_operation (extractedValue_1087_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)), extractedValue_1087_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1308_propertyName_0 ;
        GGS_lstring extractedValue_1322__1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1308_propertyName_0, extractedValue_1322__1) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GGS_transientDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GGS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)).add_operation (extractedValue_1308_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)), extractedValue_1308_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1534_relationshipName_0 ;
        GGS_lstring extractedValue_1552__1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1534_relationshipName_0, extractedValue_1552__1) ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GGS_transientDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GGS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)).add_operation (extractedValue_1534_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)), extractedValue_1534_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1764_relationshipName_0 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1764_relationshipName_0) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GGS_transientDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GGS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)).add_operation (extractedValue_1764_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)), extractedValue_1764_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2022_propertyName_0 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2022_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)).add_operation (extractedValue_2022_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)), extractedValue_2022_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 40)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2187_propertyName_0 ;
        GGS_lstring extractedValue_2201__1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2187_propertyName_0, extractedValue_2201__1) ;
        {
        const GGS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)).add_operation (extractedValue_2187_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)), extractedValue_2187_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 42)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2350_propertyName_0 ;
        GGS_lstring extractedValue_2364__1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2350_propertyName_0, extractedValue_2364__1) ;
        {
        const GGS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)).add_operation (extractedValue_2350_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)), extractedValue_2350_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 44)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2514_propertyName_0 ;
        GGS_lstring extractedValue_2528__1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2514_propertyName_0, extractedValue_2528__1) ;
        {
        const GGS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)).add_operation (extractedValue_2514_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)), extractedValue_2514_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 46)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2676_propertyName_0 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2676_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)).add_operation (extractedValue_2676_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)), extractedValue_2676_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 48)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2832_propertyName_0 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2832_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (extractedValue_2832_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)), extractedValue_2832_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 50)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_2994_propertyName_0 ;
        GGS_lstring extractedValue_3008__1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_2994_propertyName_0, extractedValue_3008__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (extractedValue_2994_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)), extractedValue_2994_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 52)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3158_controllerName_0 ;
        GGS_lstring extractedValue_3181_propertyName_1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3158_controllerName_0, extractedValue_3181_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)).add_operation (extractedValue_3158_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)), extractedValue_3158_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 54)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3360_controllerName_0 ;
        GGS_lstring extractedValue_3383_propertyName_1 ;
        GGS_lstring extractedValue_3404_secondaryPropertyName_2 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3360_controllerName_0, extractedValue_3383_propertyName_1, extractedValue_3404_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)).add_operation (extractedValue_3360_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)), extractedValue_3360_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 56)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3588_controllerName_0 ;
        GGS_lstring extractedValue_3611_propertyName_1 ;
        GGS_lstring extractedValue_3632_secondaryPropertyName_2 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3588_controllerName_0, extractedValue_3611_propertyName_1, extractedValue_3632_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)).add_operation (extractedValue_3588_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)), extractedValue_3588_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 58)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3814_controllerName_0 ;
        GGS_lstring extractedValue_3837_propertyName_1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3814_controllerName_0, extractedValue_3837_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)).add_operation (extractedValue_3814_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)), extractedValue_3814_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 60)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4105_superEntityName_0 ;
        GGS_lstring extractedValue_4131_propertyName_1 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4105_superEntityName_0, extractedValue_4131_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (extractedValue_4105_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)).add_operation (extractedValue_4131_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)), extractedValue_4131_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 65)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4303_superEntityName_0 ;
        GGS_lstring extractedValue_4329_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4343__2 ;
        enumerator_1003.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4303_superEntityName_0, extractedValue_4329_propertyName_1, extractedValue_4343__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GGS_lstring::init_21__21_ (extractedValue_4303_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)).add_operation (extractedValue_4329_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)), extractedValue_4329_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1003.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_transientDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 75)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 75)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_7158 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 153)) ;
  if (nullptr != objectArray_7158) {
    macroValidSharedObject (objectArray_7158, cMapElement_classMap) ;
    GGS_classKind var_classKind_7319 ;
    const GGS_transientDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_7330_3 ; // Joker input parameter
    GGS_actionMap joker_7330_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_7330_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7319, joker_7330_3, joker_7330_2, joker_7330_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 156)) ;
    switch (var_classKind_7319.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        const GGS_transientDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.ggs", 159)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_7463_kind_0 ;
        var_classKind_7319.getAssociatedValuesFor_atomic (extractedValue_7463_kind_0) ;
        {
        const GGS_transientDeclarationAST temp_4 = this ;
        const GGS_transientDeclarationAST temp_5 = this ;
        GGS_actionMap temp_6 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 164)) ;
        const GGS_transientDeclarationAST temp_7 = this ;
        objectArray_7158->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GGS_propertyKind::class_func_property (extractedValue_7463_kind_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (ComparisonKind::equal, temp_5.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 163)).objectCompare (GGS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 163))  COMMA_SOURCE_FILE ("transient-property.ggs", 163)), temp_6, temp_7.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 161)) ;
        }
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_7707__0 ;
        var_classKind_7319.getAssociatedValuesFor_document (extractedValue_7707__0) ;
        const GGS_transientDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("transient-property.ggs", 168)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_7803__0 ;
        GGS_bool extractedValue_7803__1 ;
        GGS_bool extractedValue_7803__2 ;
        GGS_bool extractedValue_7803__3 ;
        var_classKind_7319.getAssociatedValuesFor_entity (extractedValue_7803__0, extractedValue_7803__1, extractedValue_7803__2, extractedValue_7803__3) ;
        const GGS_transientDeclarationAST temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray11  COMMA_SOURCE_FILE ("transient-property.ggs", 170)) ;
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & ioArgument_ioGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_8404 ;
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_8415_3 ; // Joker input parameter
  GGS_actionMap joker_8415_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8415_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8404, joker_8415_3, joker_8415_2, joker_8415_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 183)) ;
  GGS_typeKind var_typeKind_8452 ;
  switch (var_classKind_8404.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 188)) ;
      var_typeKind_8452.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8607_kind_0 ;
      var_classKind_8404.getAssociatedValuesFor_atomic (extractedValue_8607_kind_0) ;
      var_typeKind_8452 = extractedValue_8607_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8652__0 ;
      var_classKind_8404.getAssociatedValuesFor_document (extractedValue_8652__0) ;
      const GGS_transientDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8452.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8760__0 ;
      GGS_bool extractedValue_8760__1 ;
      GGS_bool extractedValue_8760__2 ;
      GGS_bool extractedValue_8760__3 ;
      var_classKind_8404.getAssociatedValuesFor_entity (extractedValue_8760__0, extractedValue_8760__1, extractedValue_8760__2, extractedValue_8760__3) ;
      const GGS_transientDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 194)) ;
      var_typeKind_8452.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_8898 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GGS_transientDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GGS_propertyMap temp_9 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 199)) ;
      var_rootProperties_8898 = temp_9 ;
    }
  }
  if (kBoolFalse == test_7) {
    const GGS_transientDeclarationAST temp_10 = this ;
    GGS_classKind joker_9053 ; // Joker input parameter
    GGS_actionMap joker_9074_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9074_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mRootEntityName (), joker_9053, var_rootProperties_8898, joker_9074_2, joker_9074_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 201)) ;
  }
  GGS_classKind var_currentClassKind_9178 ;
  GGS_propertyMap var_properties_9201 ;
  const GGS_transientDeclarationAST temp_11 = this ;
  GGS_actionMap joker_9213_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_9213_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_11.readProperty_mClassName (), var_currentClassKind_9178, var_properties_9201, joker_9213_2, joker_9213_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 204)) ;
  GGS_transientDependencyListForGeneration temp_12 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
  GGS_transientDependencyListForGeneration var_dependencies_9293 = temp_12 ;
  const GGS_transientDeclarationAST temp_13 = this ;
  cEnumerator_observablePropertyList enumerator_9318 (temp_13.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_9318.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_9507 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_9542 ;
    GGS_string var_defaultValueAsString_9606 ;
    extensionMethod_analyzeObservableProperty (enumerator_9318.current_mObservableProperty (HERE), var_rootProperties_8898, ioArgument_ioSemanticContext, var_properties_9201, var_dependencyKind_9507, var_swiftTypeStringForTransientFunctionArgument_9542, var_defaultValueAsString_9606, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 208)) ;
    switch (var_dependencyKind_9507.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9823__0 ;
        GGS_bool extractedValue_9823__1 ;
        var_dependencyKind_9507.getAssociatedValuesFor_arrayController (extractedValue_9823__0, extractedValue_9823__1) ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9318.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 222)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("transient-property.ggs", 222)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_9943__0 ;
        var_dependencyKind_9507.getAssociatedValuesFor_selectionController (extractedValue_9943__0) ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9318.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 224)), GGS_string ("only an atomic property can be observed"), fixItArray15  COMMA_SOURCE_FILE ("transient-property.ggs", 224)) ;
      }
      break ;
    }
    {
    var_dependencies_9293.setter_append (enumerator_9318.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9318.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 228)), var_swiftTypeStringForTransientFunctionArgument_9542, var_defaultValueAsString_9606, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 226)) ;
    }
    enumerator_9318.gotoNextObject () ;
  }
  {
  const GGS_transientDeclarationAST temp_16 = this ;
  const GGS_transientDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mTransientName ().readProperty_string (), var_typeKind_8452, GGS_string ("transient"), var_dependencies_9293, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 233)) ;
  }
  const GGS_transientDeclarationAST temp_18 = this ;
  cMapElement_classMap * objectArray_10432 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 241)) ;
  if (nullptr != objectArray_10432) {
    macroValidSharedObject (objectArray_10432, cMapElement_classMap) ;
    GGS_bool var_generate_10534 ;
    switch (var_currentClassKind_9178.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        var_generate_10534 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_10629__0 ;
        var_currentClassKind_9178.getAssociatedValuesFor_document (extractedValue_10629__0) ;
        var_generate_10534 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_10673__0 ;
        var_currentClassKind_9178.getAssociatedValuesFor_atomic (extractedValue_10673__0) ;
        var_generate_10534 = GGS_bool (true) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_10717__0 ;
        GGS_bool extractedValue_10720_graphic_1 ;
        GGS_bool extractedValue_10730__2 ;
        GGS_bool extractedValue_10730__3 ;
        var_currentClassKind_9178.getAssociatedValuesFor_entity (extractedValue_10717__0, extractedValue_10720_graphic_1, extractedValue_10730__2, extractedValue_10730__3) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10720_graphic_1.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GGS_transientDeclarationAST temp_20 = this ;
            const GGS_transientDeclarationAST temp_21 = this ;
            var_generate_10534 = GGS_bool (ComparisonKind::notEqual, temp_20.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 254)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10534 = GGS_bool (true) ;
        }
      }
      break ;
    }
    {
    const GGS_transientDeclarationAST temp_22 = this ;
    const GGS_transientDeclarationAST temp_23 = this ;
    objectArray_10432->mProperty_mPropertyGenerationList.setter_append (GGS_transientPropertyGeneration::init_21__21__21__21__21_ (temp_22.readProperty_mTransientName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_8452, var_dependencies_9293, var_generate_10534, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 259)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 290)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 290)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 290)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 291)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 292)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 292)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 293)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 305)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 305)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 305)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 306)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 307)) ;
  const GGS_transientPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 308)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 309)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 310)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 311)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 312)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 313)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 314)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 315)) ;
  const GGS_transientPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 316)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 316)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 316)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 316)) ;
  result_result.plusAssign_operation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 317)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 318)) ;
  const GGS_transientPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 319)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 319)) ;
  result_result.plusAssign_operation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 320)) ;
  result_result.plusAssign_operation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 321)) ;
  result_result.plusAssign_operation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 322)) ;
  result_result.plusAssign_operation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 323)) ;
  result_result.plusAssign_operation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 324)) ;
  result_result.plusAssign_operation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 325)) ;
  result_result.plusAssign_operation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 326)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 327)) ;
  result_result.plusAssign_operation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 328)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 329)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 330)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 331)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 332)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 333)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 334)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 335)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 336)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 337)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 338)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 339)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 340)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 341)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 342)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                             const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                             const GGS_stringset constinArgument_inOverriddenTransients,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_transientPropertyGeneration temp_1 = this ;
    const GGS_transientPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.ggs", 353)).operator_not (SOURCE_FILE ("transient-property.ggs", 353)) COMMA_SOURCE_FILE ("transient-property.ggs", 353)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 355)) ;
          const GGS_transientPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
          result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 357)) ;
          const GGS_transientPropertyGeneration temp_5 = this ;
          const GGS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 360)) ;
        const GGS_transientPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GGS_string ("  //   Transient property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 361)) ;
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 362)) ;
        const GGS_transientPropertyGeneration temp_8 = this ;
        const GGS_transientPropertyGeneration temp_9 = this ;
        result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 363)) ;
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 364)) ;
        const GGS_transientPropertyGeneration temp_10 = this ;
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (extensionGetter_swiftTypeName (temp_11.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 365)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GGS_string ("    return self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 366)) ;
        result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 367)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16513 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_transientPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 377)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_transientPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16640 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 378)) ;
      const GGS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 379)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16640.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16513, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 381)) ;
          result_result.plusAssign_operation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 382)) ;
          const GGS_transientPropertyGeneration temp_8 = this ;
          const GGS_transientPropertyGeneration temp_9 = this ;
          const GGS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 383)) ;
          result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 384)) ;
          result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 385)) ;
          result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16513, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 388)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        const GGS_transientPropertyGeneration temp_13 = this ;
        const GGS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 389)) ;
      }
      result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 391)) ;
      const GGS_transientPropertyGeneration temp_15 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17483 (temp_15.readProperty_mDependencyList (), EnumerationOrder::up) ;
      while (enumerator_17483.hasCurrentObject ()) {
        GGS_string var_s_17523 = extensionGetter_generateAddObserverCall (enumerator_17483.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, var_s_17523.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GGS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_s_17523, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (var_prefix_16513, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 395)) ;
          }
        }
        enumerator_17483.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientRoutineGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                           const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                           GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_transientRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 603)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_transientRoutineGeneration temp_2 = this ;
      const GGS_transientRoutineGeneration temp_3 = this ;
      const GGS_transientRoutineGeneration temp_4 = this ;
      const GGS_transientRoutineGeneration temp_5 = this ;
      const GGS_transientRoutineGeneration temp_6 = this ;
      GGS_string var_s_28624 = GGS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 604))) ;
      GGS_string var_header_28851 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 611)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 613)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 615)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 615)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 615)) ;
      const GGS_transientRoutineGeneration temp_7 = this ;
      const GGS_transientRoutineGeneration temp_8 = this ;
      const GGS_transientRoutineGeneration temp_9 = this ;
      GGS_string var_fileName_29192 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_29192, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 617)) ;
      }
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29192, GGS_string ("//"), var_header_28851, GGS_string ("\n\n"), var_s_28624, GGS_string ("\n"), GGS_string ("}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 626)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 626)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 626)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 618)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_transientManager (
  "controllers",
  0,
  gWrapperAllFiles_transientManager_3,
  0,
  gWrapperAllDirectories_transientManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_transientManager (
  "standard-properties",
  0,
  gWrapperAllFiles_transientManager_1,
  0,
  gWrapperAllDirectories_transientManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_transientManager (
  "xcode-project",
  0,
  gWrapperAllFiles_transientManager_2,
  0,
  gWrapperAllDirectories_transientManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [4] = {
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  3,
  gWrapperAllDirectories_transientManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (Compiler * inCompiler,
                                                                                  const GGS_string & in_OWNER_5F_NAME,
                                                                                  const GGS_string & in_TRANSIENT_5F_NAME,
                                                                                  const GGS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                  const GGS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                  const GGS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor func ") ;
  result.appendString (in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TRANSIENT_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_279_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    cEnumerator_transientDependencyListForGeneration enumerator_279 (in_DEPENDENCY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_279.hasCurrentObject ()) {
      result.appendString ("\n       _ ") ;
      result.appendString (enumerator_279.current_mFunctionArgumentName (HERE).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_279.current_mFunctionArgumentTypeString (HERE).stringValue ()) ;
      if (enumerator_279.hasNextObject ()) {
        result.appendString (",") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_279_.increment () ;
      enumerator_279.gotoNextObject () ;
    }
  }
  result.appendString ("\n) -> ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 10)).stringValue ()) ;
  result.appendString (" {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_917 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_917, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 24)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_917, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.ggs", 25)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_917, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.ggs", 26)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_proxyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_3272 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 88)) ;
  if (nullptr != objectArray_3272) {
    macroValidSharedObject (objectArray_3272, cMapElement_classMap) ;
    GGS_classKind var_proxyKind_3429 ;
    const GGS_proxyDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_3440_3 ; // Joker input parameter
    GGS_actionMap joker_3440_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_3440_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3429, joker_3440_3, joker_3440_2, joker_3440_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 91)) ;
    switch (var_proxyKind_3429.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        const GGS_proxyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 94)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_3568__0 ;
        GGS_bool extractedValue_3577_isGraphic_1 ;
        GGS_bool extractedValue_3589__2 ;
        GGS_bool extractedValue_3589__3 ;
        var_proxyKind_3429.getAssociatedValuesFor_entity (extractedValue_3568__0, extractedValue_3577_isGraphic_1, extractedValue_3589__2, extractedValue_3589__3) ;
        const GGS_proxyDeclarationAST temp_4 = this ;
        switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
        case GGS_proxyKind::Enumeration::invalid:
          break ;
        case GGS_proxyKind::Enumeration::enum_toManyProxy:
          {
            const GGS_proxyDeclarationAST temp_5 = this ;
            GGS_propertyKind var_k_3659 = GGS_propertyKind::class_func_toMany (temp_5.readProperty_mProxyTypeName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 100)), extractedValue_3577_isGraphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("proxy.ggs", 102))  COMMA_SOURCE_FILE ("proxy.ggs", 98)) ;
            {
            const GGS_proxyDeclarationAST temp_6 = this ;
            GGS_actionMap temp_7 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 104)) ;
            objectArray_3272->mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3659, temp_7, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 104)) ;
            }
          }
          break ;
        case GGS_proxyKind::Enumeration::enum_propertyProxy:
          {
            const GGS_proxyDeclarationAST temp_8 = this ;
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (temp_8.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("this type should be an entity"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 106)) ;
          }
          break ;
        }
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_4010__0 ;
        var_proxyKind_3429.getAssociatedValuesFor_document (extractedValue_4010__0) ;
        const GGS_proxyDeclarationAST temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray11  COMMA_SOURCE_FILE ("proxy.ggs", 109)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_4100_type_0 ;
        var_proxyKind_3429.getAssociatedValuesFor_atomic (extractedValue_4100_type_0) ;
        {
        const GGS_proxyDeclarationAST temp_12 = this ;
        GGS_actionMap temp_13 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 111)) ;
        objectArray_3272->mProperty_mPropertyMap.setter_insertKey (temp_12.readProperty_mProxyName (), GGS_propertyKind::class_func_property (extractedValue_4100_type_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 111))  COMMA_SOURCE_FILE ("proxy.ggs", 111)), temp_13, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 111)) ;
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4545 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 120)) ;
  if (nullptr != objectArray_4545) {
    macroValidSharedObject (objectArray_4545, cMapElement_classMap) ;
    GGS_propertyKind var_relationshipKind_4695 ;
    const GGS_proxyDeclarationAST temp_1 = this ;
    GGS_actionMap joker_4713_2 ; // Joker input parameter
    GGS_bool joker_4713_1 ; // Joker input parameter
    objectArray_4545->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4695, joker_4713_2, joker_4713_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 123)) ;
    switch (var_relationshipKind_4695.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_4773__0 ;
        GGS_bool extractedValue_4773__1 ;
        var_relationshipKind_4695.getAssociatedValuesFor_arrayController (extractedValue_4773__0, extractedValue_4773__1) ;
        const GGS_proxyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 126)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_4890__0 ;
        var_relationshipKind_4695.getAssociatedValuesFor_selectionController (extractedValue_4890__0) ;
        const GGS_proxyDeclarationAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.ggs", 128)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      {
        GGS_typeKind extractedValue_4997__0 ;
        GGS_propertyAccessibility extractedValue_4997__1 ;
        var_relationshipKind_4695.getAssociatedValuesFor_property (extractedValue_4997__0, extractedValue_4997__1) ;
        const GGS_proxyDeclarationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.ggs", 130)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      {
        GGS_lstring extractedValue_5102__0 ;
        GGS_propertyAccessibility extractedValue_5102__1 ;
        GGS_bool extractedValue_5102__2 ;
        GGS_toManyRelationshipOptionAST extractedValue_5102__3 ;
        var_relationshipKind_4695.getAssociatedValuesFor_toMany (extractedValue_5102__0, extractedValue_5102__1, extractedValue_5102__2, extractedValue_5102__3) ;
        const GGS_proxyDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 132)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      {
        GGS_lstring extractedValue_5205_toOneTypeName_0 ;
        GGS_propertyAccessibility extractedValue_5221__1 ;
        GGS_bool extractedValue_5221__2 ;
        GGS_toOneOppositeRelationship extractedValue_5221__3 ;
        GGS_bool extractedValue_5221__4 ;
        var_relationshipKind_4695.getAssociatedValuesFor_toOne (extractedValue_5205_toOneTypeName_0, extractedValue_5221__1, extractedValue_5221__2, extractedValue_5221__3, extractedValue_5221__4) ;
        GGS_propertyMap var_propertyMap_5295 ;
        GGS_classKind joker_5286 ; // Joker input parameter
        GGS_actionMap joker_5308_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5308_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5205_toOneTypeName_0, joker_5286, var_propertyMap_5295, joker_5308_2, joker_5308_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 134)) ;
        GGS_propertyKind var_propertyKind_5367 ;
        const GGS_proxyDeclarationAST temp_10 = this ;
        GGS_actionMap joker_5381_2 ; // Joker input parameter
        GGS_bool joker_5381_1 ; // Joker input parameter
        var_propertyMap_5295.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5367, joker_5381_2, joker_5381_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 135)) ;
        switch (var_propertyKind_5367.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_5433_propertyType_0 ;
            GGS_propertyAccessibility extractedValue_5448__1 ;
            var_propertyKind_5367.getAssociatedValuesFor_property (extractedValue_5433_propertyType_0, extractedValue_5448__1) ;
            {
            const GGS_proxyDeclarationAST temp_11 = this ;
            const GGS_proxyDeclarationAST temp_12 = this ;
            const GGS_proxyDeclarationAST temp_13 = this ;
            const GGS_proxyDeclarationAST temp_14 = this ;
            objectArray_4545->mProperty_mPropertyGenerationList.setter_append (GGS_atomicProxyGeneration::init_21__21__21__21__21_ (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5433_propertyType_0, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 138)) ;
            }
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GGS_proxyDeclarationAST temp_16 = this ;
              test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.ggs", 146)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GGS_proxyDeclarationAST temp_17 = this ;
                TC_Array <FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.ggs", 147)) ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_5855_toManyTypeName_0 ;
            GGS_propertyAccessibility extractedValue_5872__1 ;
            GGS_bool extractedValue_5872__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_5872__3 ;
            var_propertyKind_5367.getAssociatedValuesFor_toMany (extractedValue_5855_toManyTypeName_0, extractedValue_5872__1, extractedValue_5872__2, extractedValue_5872__3) ;
            GGS_classKind joker_5940_4 ; // Joker input parameter
            GGS_propertyMap joker_5940_3 ; // Joker input parameter
            GGS_actionMap joker_5940_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_5940_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5855_toManyTypeName_0, joker_5940_4, joker_5940_3, joker_5940_2, joker_5940_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 150)) ;
            {
            const GGS_proxyDeclarationAST temp_19 = this ;
            const GGS_proxyDeclarationAST temp_20 = this ;
            const GGS_proxyDeclarationAST temp_21 = this ;
            const GGS_proxyDeclarationAST temp_22 = this ;
            objectArray_4545->mProperty_mPropertyGenerationList.setter_append (GGS_toManyProxyGeneration::init_21__21__21__21__21_ (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5855_toManyTypeName_0.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 151)) ;
            }
            {
            ioArgument_ioGeneration.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.setter_insert (extractedValue_5855_toManyTypeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 159)) ;
            }
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              const GGS_proxyDeclarationAST temp_24 = this ;
              test_23 = GGS_bool (ComparisonKind::notEqual, temp_24.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.ggs", 160)))).boolEnum () ;
              if (kBoolTrue == test_23) {
                const GGS_proxyDeclarationAST temp_25 = this ;
                TC_Array <FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.ggs", 161)) ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_6423__0 ;
            GGS_propertyAccessibility extractedValue_6423__1 ;
            GGS_bool extractedValue_6423__2 ;
            GGS_toOneOppositeRelationship extractedValue_6423__3 ;
            GGS_bool extractedValue_6423__4 ;
            var_propertyKind_5367.getAssociatedValuesFor_toOne (extractedValue_6423__0, extractedValue_6423__1, extractedValue_6423__2, extractedValue_6423__3, extractedValue_6423__4) ;
            const GGS_proxyDeclarationAST temp_27 = this ;
            switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
            case GGS_proxyKind::Enumeration::invalid:
              break ;
            case GGS_proxyKind::Enumeration::enum_propertyProxy:
              {
                const GGS_proxyDeclarationAST temp_28 = this ;
                TC_Array <FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.ggs", 166)) ;
              }
              break ;
            case GGS_proxyKind::Enumeration::enum_toManyProxy:
              {
                const GGS_proxyDeclarationAST temp_30 = this ;
                TC_Array <FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.ggs", 168)) ;
              }
              break ;
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_6705__0 ;
            GGS_bool extractedValue_6705__1 ;
            var_propertyKind_5367.getAssociatedValuesFor_arrayController (extractedValue_6705__0, extractedValue_6705__1) ;
            const GGS_proxyDeclarationAST temp_32 = this ;
            switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
            case GGS_proxyKind::Enumeration::invalid:
              break ;
            case GGS_proxyKind::Enumeration::enum_propertyProxy:
              {
                const GGS_proxyDeclarationAST temp_33 = this ;
                TC_Array <FixItDescription> fixItArray34 ;
                inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.ggs", 173)) ;
              }
              break ;
            case GGS_proxyKind::Enumeration::enum_toManyProxy:
              {
                const GGS_proxyDeclarationAST temp_35 = this ;
                TC_Array <FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.ggs", 175)) ;
              }
              break ;
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_6990__0 ;
            var_propertyKind_5367.getAssociatedValuesFor_selectionController (extractedValue_6990__0) ;
            const GGS_proxyDeclarationAST temp_37 = this ;
            switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
            case GGS_proxyKind::Enumeration::invalid:
              break ;
            case GGS_proxyKind::Enumeration::enum_propertyProxy:
              {
                const GGS_proxyDeclarationAST temp_38 = this ;
                TC_Array <FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.ggs", 180)) ;
              }
              break ;
            case GGS_proxyKind::Enumeration::enum_toManyProxy:
              {
                const GGS_proxyDeclarationAST temp_40 = this ;
                TC_Array <FixItDescription> fixItArray41 ;
                inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.ggs", 182)) ;
              }
              break ;
            }
          }
          break ;
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 209)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 210)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 211)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 212)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 234)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 235)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 236)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)).add_operation (GGS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 237)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  // var ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GGS_string ("_boundObjectDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 238)) ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (temp_4.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 239)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 240)) ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GGS_string ("  var ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)).add_operation (temp_6.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 241)) ;
  result_result.plusAssign_operation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 242)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("      switch self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 243)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 243)) ;
  result_result.plusAssign_operation(GGS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 244)) ;
  result_result.plusAssign_operation(GGS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 245)) ;
  result_result.plusAssign_operation(GGS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 246)) ;
  result_result.plusAssign_operation(GGS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 247)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 248)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 249)) ;
  result_result.plusAssign_operation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 250)) ;
  const GGS_toManyProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 251)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 251)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 252)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 253)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)) ;
  result_result.plusAssign_operation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 260)) ;
  result_result.plusAssign_operation(GGS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 261)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (GGS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 262)) ;
  result_result.plusAssign_operation(GGS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 263)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 264)) ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)).add_operation (GGS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 265)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 266)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 267)) ;
  result_result.plusAssign_operation(GGS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 268)) ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (GGS_string ("_StartsBeingObserved (by: controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 269)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 270)).add_operation (GGS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 270)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 271)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 295)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 296)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 297)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 310)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 311)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 312)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 312)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 312)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 313)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 314)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 315)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 316)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 317)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 318)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 319)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 320)) ;
  result_result.plusAssign_operation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 321)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 322)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 323)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 323)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 323)) ;
  result_result.plusAssign_operation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 324)) ;
  result_result.plusAssign_operation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 325)) ;
  result_result.plusAssign_operation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 326)) ;
  result_result.plusAssign_operation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 327)) ;
  result_result.plusAssign_operation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 328)) ;
  result_result.plusAssign_operation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 329)) ;
  result_result.plusAssign_operation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 330)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 331)) ;
  result_result.plusAssign_operation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 332)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 333)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 334)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 335)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 336)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 337)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 338)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 339)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 340)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 341)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 342)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 343)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 344)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 345)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 347)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 348)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 349)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 350)) ;
  result_result.plusAssign_operation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 351)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 352)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 353)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 354)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 354)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 355)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 356)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 357)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 358)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 359)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 369)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 370)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 371)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 372)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 373)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 374)) ;
  result_result.plusAssign_operation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 375)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("      return self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 376)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 376)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 377)) ;
  result_result.plusAssign_operation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 378)) ;
  result_result.plusAssign_operation(GGS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 379)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GGS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 380)).add_operation (GGS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 380)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 380)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 381)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 382)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 383)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 390)) ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)).add_operation (GGS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 391)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 392)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 392)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 392)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 393)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 394)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 395)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 396)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 397)) ;
  result_result.plusAssign_operation(GGS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 398)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 399)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 400)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 401)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 402)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 403)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 404)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 405)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 406)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 407)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 408)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (GGS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 409)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 410)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  const GGS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 411)) ;
  const GGS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GGS_string ("_property.startsBeingObserved (by: self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 412)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 412)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 412)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1086 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1086, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1086, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 27)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1086, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 28)) ;
  }
  const GGS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1086, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 29)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 35)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 35)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4992 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 126)) ;
  if (nullptr != objectArray_4992) {
    macroValidSharedObject (objectArray_4992, cMapElement_classMap) ;
    GGS_classKind var_classKind_5152 ;
    const GGS_atomicPropertyDeclarationAST temp_1 = this ;
    GGS_propertyMap joker_5163_3 ; // Joker input parameter
    GGS_actionMap joker_5163_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_5163_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_5152, joker_5163_3, joker_5163_2, joker_5163_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 129)) ;
    GGS_propertyMap var_preferencesPropertyMap_5277 ;
    GGS_classKind joker_5262 ; // Joker input parameter
    GGS_actionMap joker_5307_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_5307_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 131)), GGS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.ggs", 131)), inCompiler COMMA_HERE), joker_5262, var_preferencesPropertyMap_5277, joker_5307_2, joker_5307_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 130)) ;
    switch (var_classKind_5152.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        const GGS_atomicPropertyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 138)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_5444_kind_0 ;
        var_classKind_5152.getAssociatedValuesFor_atomic (extractedValue_5444_kind_0) ;
        {
        const GGS_atomicPropertyDeclarationAST temp_4 = this ;
        GGS_actionMap temp_5 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)) ;
        objectArray_4992->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GGS_propertyKind::class_func_property (extractedValue_5444_kind_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.ggs", 140))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)), temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)) ;
        }
        GGS_string var_swiftDefaultValueAsString_5699 ;
        const GGS_atomicPropertyDeclarationAST temp_6 = this ;
        GGS_typeKindList temp_7 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142)) ;
        temp_7.enterElement (GGS_typeKindList_2E_element::init_21_ (extractedValue_5444_kind_0, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), temp_7, var_preferencesPropertyMap_5277, var_swiftDefaultValueAsString_5699, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142)) ;
        {
        const GGS_atomicPropertyDeclarationAST temp_8 = this ;
        const GGS_atomicPropertyDeclarationAST temp_9 = this ;
        const GGS_atomicPropertyDeclarationAST temp_10 = this ;
        const GGS_atomicPropertyDeclarationAST temp_11 = this ;
        const GGS_atomicPropertyDeclarationAST temp_12 = this ;
        objectArray_4992->mProperty_mPropertyGenerationList.setter_append (GGS_atomicPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_8.readProperty_mPropertyName ().readProperty_string (), temp_9.readProperty_mGenerateResetMethod (), temp_10.readProperty_mGenerateDirectRead (), temp_11.readProperty_mGenerateDirectAccess (), extractedValue_5444_kind_0, GGS_bool (false), var_swiftDefaultValueAsString_5699, GGS_bool (ComparisonKind::equal, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 152)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 144)) ;
        }
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_6111__0 ;
        var_classKind_5152.getAssociatedValuesFor_document (extractedValue_6111__0) ;
        const GGS_atomicPropertyDeclarationAST temp_13 = this ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray14  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 156)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_6206__0 ;
        GGS_bool extractedValue_6206__1 ;
        GGS_bool extractedValue_6206__2 ;
        GGS_bool extractedValue_6206__3 ;
        var_classKind_5152.getAssociatedValuesFor_entity (extractedValue_6206__0, extractedValue_6206__1, extractedValue_6206__2, extractedValue_6206__3) ;
        const GGS_atomicPropertyDeclarationAST temp_15 = this ;
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 158)) ;
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicPropertyGeneration temp_0 = this ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 205)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 206)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 207)) ;
  result_result.plusAssign_operation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 208)) ;
  result_result.plusAssign_operation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 209)) ;
  result_result.plusAssign_operation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 210)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 211)) ;
  const GGS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)) ;
  result_result.plusAssign_operation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 213)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 214)) ;
  const GGS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)) ;
  result_result.plusAssign_operation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 216)) ;
  result_result.plusAssign_operation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 217)) ;
  result_result.plusAssign_operation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)) ;
  result_result.plusAssign_operation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 219)) ;
  result_result.plusAssign_operation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 220)) ;
  result_result.plusAssign_operation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)) ;
  result_result.plusAssign_operation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 222)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 223)) ;
  result_result.plusAssign_operation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 224)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 225)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 226)) ;
  result_result.plusAssign_operation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)) ;
  result_result.plusAssign_operation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)) ;
  result_result.plusAssign_operation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)) ;
  result_result.plusAssign_operation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)) ;
  result_result.plusAssign_operation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 231)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 232)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 233)) ;
  result_result.plusAssign_operation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 234)) ;
  result_result.plusAssign_operation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 235)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)) ;
  const GGS_atomicPropertyGeneration temp_6 = this ;
  const GGS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)) ;
  result_result.plusAssign_operation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)) ;
  result_result.plusAssign_operation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)) ;
  result_result.plusAssign_operation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)) ;
  result_result.plusAssign_operation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)) ;
  result_result.plusAssign_operation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)) ;
  result_result.plusAssign_operation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)) ;
  const GGS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)) ;
  result_result.plusAssign_operation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 249)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool constinArgument_inGenerationDirectAccess,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)) ;
      const GGS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GGS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)) ;
      result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)) ;
      const GGS_atomicPropertyGeneration temp_3 = this ;
      const GGS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string ("@MainActor let preferences_").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)).add_operation (GGS_string ("_property = EBPreferenceProperty <"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)) ;
      const GGS_atomicPropertyGeneration temp_5 = this ;
      const GGS_atomicPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GGS_string ("> (defaultValue: ").add_operation (temp_5.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)).add_operation (GGS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)) ;
    const GGS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssign_operation(GGS_string ("  //   Atomic property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)) ;
    result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)) ;
    const GGS_atomicPropertyGeneration temp_8 = this ;
    const GGS_atomicPropertyGeneration temp_9 = this ;
    result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)).add_operation (GGS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GGS_atomicPropertyGeneration temp_11 = this ;
      test_10 = temp_11.readProperty_mGenerateResetMethod ().boolEnum () ;
      if (kBoolTrue == test_10) {
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)) ;
        const GGS_atomicPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GGS_string ("  final func reset_").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)).add_operation (GGS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)) ;
        const GGS_atomicPropertyGeneration temp_13 = this ;
        const GGS_atomicPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)).add_operation (GGS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)).add_operation (temp_14.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)) ;
        result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)) ;
      }
    }
    GGS_bool test_15 = constinArgument_inGenerationDirectAccess ;
    if (kBoolTrue != test_15.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_16 = this ;
      test_15 = temp_16.readProperty_mGenerateDirectRead () ;
    }
    GGS_bool test_17 = test_15 ;
    if (kBoolTrue != test_17.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_18 = this ;
      test_17 = temp_18.readProperty_mGenerateDirectAccess () ;
    }
    GGS_bool var_generateAccess_12301 = test_17 ;
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_generateAccess_12301.boolEnum () ;
      if (kBoolTrue == test_19) {
        result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)) ;
        const GGS_atomicPropertyGeneration temp_20 = this ;
        const GGS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_20.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (extensionGetter_swiftTypeName (temp_21.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)) ;
        const GGS_atomicPropertyGeneration temp_22 = this ;
        result_result.plusAssign_operation(GGS_string ("    get { return self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GGS_atomicPropertyGeneration temp_24 = this ;
          test_23 = temp_24.readProperty_mGenerateDirectAccess ().boolEnum () ;
          if (kBoolTrue == test_23) {
            const GGS_atomicPropertyGeneration temp_25 = this ;
            result_result.plusAssign_operation(GGS_string ("    set { self.").add_operation (temp_25.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)) ;
          }
        }
        result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 286)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_initCode (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicPropertyGeneration temp_0 = this ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("    self.").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)).add_operation (GGS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)).add_operation (extensionGetter_swiftTypeName (temp_1.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)) ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string (" (defaultValue: ").add_operation (temp_2.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)).add_operation (GGS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(temp_3.readProperty_mPropertyName ().add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  GGS_lstring var_node_1045 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1045, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 25)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1045, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 26)) ;
  }
  {
  const GGS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1045, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 27)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOneRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_toOneRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_toOneRelationshipAST temp_0 = this ;
  const GGS_toOneRelationshipAST temp_1 = this ;
  const GGS_toOneRelationshipAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_4156 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 104)) ;
  if (nullptr != objectArray_4156) {
    macroValidSharedObject (objectArray_4156, cMapElement_classMap) ;
    {
    const GGS_toOneRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToOneClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 107)) ;
    }
    GGS_classKind var_classKind_4404 ;
    const GGS_toOneRelationshipAST temp_2 = this ;
    GGS_propertyMap joker_4415_3 ; // Joker input parameter
    GGS_actionMap joker_4415_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_4415_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4404, joker_4415_3, joker_4415_2, joker_4415_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 108)) ;
    switch (var_classKind_4404.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        const GGS_toOneRelationshipAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 111)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_4546__0 ;
        var_classKind_4404.getAssociatedValuesFor_atomic (extractedValue_4546__0) ;
        const GGS_toOneRelationshipAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 113)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_4641__0 ;
        var_classKind_4404.getAssociatedValuesFor_document (extractedValue_4641__0) ;
        const GGS_toOneRelationshipAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 115)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_4734__0 ;
        GGS_bool extractedValue_4737_graphic_1 ;
        GGS_bool extractedValue_4746__2 ;
        GGS_bool extractedValue_4749_handleOpposite_3 ;
        var_classKind_4404.getAssociatedValuesFor_entity (extractedValue_4734__0, extractedValue_4737_graphic_1, extractedValue_4746__2, extractedValue_4749_handleOpposite_3) ;
        const GGS_toOneRelationshipAST temp_9 = this ;
        const GGS_toOneRelationshipAST temp_10 = this ;
        const GGS_toOneRelationshipAST temp_11 = this ;
        GGS_propertyKind var_kind_4777 = GGS_propertyKind::class_func_toOne (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 119)), extractedValue_4737_graphic_1, temp_10.readProperty_mOpposite (), temp_11.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 117)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          const GGS_toOneRelationshipAST temp_13 = this ;
          test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOpposite ().objectCompare (GGS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.ggs", 124)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            test_12 = extractedValue_4749_handleOpposite_3.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 124)).boolEnum () ;
            if (kBoolTrue == test_12) {
              const GGS_toOneRelationshipAST temp_14 = this ;
              const GGS_toOneRelationshipAST temp_15 = this ;
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_15.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 125)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 125)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 125)) ;
            }
          }
        }
        {
        const GGS_toOneRelationshipAST temp_17 = this ;
        GGS_actionMap temp_18 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 127)) ;
        objectArray_4156->mProperty_mPropertyMap.setter_insertKey (temp_17.readProperty_mToOneRelationshipName (), var_kind_4777, temp_18, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 127)) ;
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_5598 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 136)) ;
  if (nullptr != objectArray_5598) {
    macroValidSharedObject (objectArray_5598, cMapElement_classMap) ;
    GGS_classKind var_classKind_5763 ;
    GGS_propertyMap var_destinationEntityPropertyMap_5779 ;
    const GGS_toOneRelationshipAST temp_1 = this ;
    GGS_actionMap joker_5809_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_5809_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5763, var_destinationEntityPropertyMap_5779, joker_5809_2, joker_5809_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 139)) ;
    switch (var_classKind_5763.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      break ;
    case GGS_classKind::Enumeration::enum_document:
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_5915__0 ;
        GGS_bool extractedValue_5918_graphic_1 ;
        GGS_bool extractedValue_5928__2 ;
        GGS_bool extractedValue_5928__3 ;
        var_classKind_5763.getAssociatedValuesFor_entity (extractedValue_5915__0, extractedValue_5918_graphic_1, extractedValue_5928__2, extractedValue_5928__3) ;
        const GGS_toOneRelationshipAST temp_2 = this ;
        const GGS_toOneRelationshipAST temp_3 = this ;
        const GGS_toOneRelationshipAST temp_4 = this ;
        GGS_propertyKind var_kind_5943 = GGS_propertyKind::class_func_toOne (temp_2.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 147)), extractedValue_5918_graphic_1, temp_3.readProperty_mOpposite (), temp_4.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 145)) ;
        {
        const GGS_toOneRelationshipAST temp_5 = this ;
        const GGS_toOneRelationshipAST temp_6 = this ;
        const GGS_toOneRelationshipAST temp_7 = this ;
        const GGS_toOneRelationshipAST temp_8 = this ;
        const GGS_toOneRelationshipAST temp_9 = this ;
        objectArray_5598->mProperty_mPropertyGenerationList.setter_append (GGS_toOnePropertyGeneration::init_21__21__21__21__21__21__21_ (temp_5.readProperty_mToOneRelationshipName ().readProperty_string (), temp_6.readProperty_mClassName ().readProperty_string (), var_kind_5943, temp_7.readProperty_mOpposite (), var_destinationEntityPropertyMap_5779, temp_8.readProperty_mUsedForSignature (), temp_9.readProperty_mWeak ().operator_not (SOURCE_FILE ("to-one-relationship.ggs", 159)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 153)) ;
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                         const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                         const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)) ;
  const GGS_toOnePropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  const GGS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)).add_operation (GGS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)) ;
  const GGS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string (" (usedForSignature: ").add_operation (temp_3.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)) ;
  const GGS_toOnePropertyGeneration temp_4 = this ;
  const GGS_toOnePropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GGS_string (", strongRef: ").add_operation (temp_4.readProperty_mStrongRef ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GGS_string (", key: \""), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GGS_string ("\")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)) ;
  const GGS_toOnePropertyGeneration temp_6 = this ;
  const GGS_toOnePropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)) ;
  result_result.plusAssign_operation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)) ;
  const GGS_toOnePropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GGS_string ("      return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)).add_operation (GGS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 202)) ;
  result_result.plusAssign_operation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)) ;
  const GGS_toOnePropertyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GGS_string ("      if self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)).add_operation (GGS_string ("_property.propval !== newValue {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)) ;
  const GGS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GGS_string ("        if self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)).add_operation (GGS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)) ;
  const GGS_toOnePropertyGeneration temp_11 = this ;
  result_result.plusAssign_operation(GGS_string ("          self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)).add_operation (GGS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)) ;
  result_result.plusAssign_operation(GGS_string ("        if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 208)) ;
  const GGS_toOnePropertyGeneration temp_12 = this ;
  result_result.plusAssign_operation(GGS_string ("          self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)) ;
  result_result.plusAssign_operation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 211)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)) ;
  result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)) ;
  const GGS_toOnePropertyGeneration temp_13 = this ;
  result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)).add_operation (GGS_string ("_none = EBTransientProperty <Bool> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toOnePropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOpposite ().enumValue ()) {
  case GGS_toOneOppositeRelationship::Enumeration::invalid:
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
    {
      GGS_lstring extractedValue_9766_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToMany (extractedValue_9766_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_1 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GGS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (extractedValue_9766_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)) ;
      const GGS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)) ;
      const GGS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)) ;
      result_result.plusAssign_operation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9766_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)).add_operation (GGS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)) ;
      result_result.plusAssign_operation(GGS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9766_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)).add_operation (GGS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)) ;
      result_result.plusAssign_operation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
    {
      const GGS_toOnePropertyGeneration temp_4 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)) ;
      const GGS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)) ;
    }
    break ;
  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
    {
      GGS_lstring extractedValue_10586_oppositeName_0 ;
      temp_0.readProperty_mOpposite ().getAssociatedValuesFor_oppositeIsToOne (extractedValue_10586_oppositeName_0) ;
      const GGS_toOnePropertyGeneration temp_6 = this ;
      result_result = GGS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GGS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (extractedValue_10586_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)) ;
      const GGS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (GGS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)) ;
      const GGS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)) ;
      result_result.plusAssign_operation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_10586_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)) ;
      result_result.plusAssign_operation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_10586_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)) ;
      result_result.plusAssign_operation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration setupRelationshipFromDictionaryCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_setupRelationshipFromDictionaryCode (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toOnePropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 251)) ;
  result_result.plusAssign_operation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 252)) ;
  result_result.plusAssign_operation(GGS_string ("      let possibleEntity = readEntityFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 253)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("        relationshipName: \"").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)).add_operation (GGS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)) ;
  result_result.plusAssign_operation(GGS_string ("        dictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)) ;
  result_result.plusAssign_operation(GGS_string ("        managedObjectArray: inManagedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)) ;
  result_result.plusAssign_operation(GGS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)) ;
  const GGS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("      if let entity = possibleEntity as\? ").add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)) ;
  const GGS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("        self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)).add_operation (GGS_string ("_property.setProp (entity)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)) ;
  result_result.plusAssign_operation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 261)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toOnePropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toOnePropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 288)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 288)) ;
  const GGS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GGS_string ("    if let object = self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)) ;
  result_result.plusAssign_operation(GGS_string ("      ioObjectArray.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)) ;
  result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 291)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  GGS_lstring var_node_1101 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1101, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 27)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1101, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 28)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1101, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 29)) ;
  }
  const GGS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
    {
      GGS_lstring extractedValue_1395_masterPropertyName_0 ;
      temp_6.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_1395_masterPropertyName_0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GGS_lstring var_dependanceNode_1425 = GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)).add_operation (extractedValue_1395_masterPropertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)), extractedValue_1395_masterPropertyName_0.readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1101, var_dependanceNode_1425 COMMA_SOURCE_FILE ("to-many-relationship.ggs", 33)) ;
      }
    }
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_toManyRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_5524 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 139)) ;
  if (nullptr != objectArray_5524) {
    macroValidSharedObject (objectArray_5524, cMapElement_classMap) ;
    {
    const GGS_toManyRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 142)) ;
    }
    GGS_classKind var_classKind_5773 ;
    const GGS_toManyRelationshipAST temp_2 = this ;
    GGS_propertyMap joker_5784_3 ; // Joker input parameter
    GGS_actionMap joker_5784_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_5784_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_5773, joker_5784_3, joker_5784_2, joker_5784_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 143)) ;
    switch (var_classKind_5773.enumValue ()) {
    case GGS_classKind::Enumeration::invalid:
      break ;
    case GGS_classKind::Enumeration::enum_prefs:
      {
        const GGS_toManyRelationshipAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 146)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_atomic:
      {
        GGS_typeKind extractedValue_5915__0 ;
        var_classKind_5773.getAssociatedValuesFor_atomic (extractedValue_5915__0) ;
        const GGS_toManyRelationshipAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 148)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_document:
      {
        GGS_lstring extractedValue_6010__0 ;
        var_classKind_5773.getAssociatedValuesFor_document (extractedValue_6010__0) ;
        const GGS_toManyRelationshipAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 150)) ;
      }
      break ;
    case GGS_classKind::Enumeration::enum_entity:
      {
        GGS_string extractedValue_6103__0 ;
        GGS_bool extractedValue_6106_graphic_1 ;
        GGS_bool extractedValue_6115__2 ;
        GGS_bool extractedValue_6118_handleOpposite_3 ;
        var_classKind_5773.getAssociatedValuesFor_entity (extractedValue_6103__0, extractedValue_6106_graphic_1, extractedValue_6115__2, extractedValue_6118_handleOpposite_3) ;
        const GGS_toManyRelationshipAST temp_9 = this ;
        const GGS_toManyRelationshipAST temp_10 = this ;
        GGS_propertyKind var_kind_6146 = GGS_propertyKind::class_func_toMany (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-many-relationship.ggs", 154)), extractedValue_6106_graphic_1, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 152)) ;
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = extractedValue_6118_handleOpposite_3.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 159)).boolEnum () ;
          if (kBoolTrue == test_11) {
            const GGS_toManyRelationshipAST temp_12 = this ;
            test_11 = temp_12.readProperty_mOption ().getter_isHasOpposite (SOURCE_FILE ("to-many-relationship.ggs", 159)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GGS_toManyRelationshipAST temp_13 = this ;
              const GGS_toManyRelationshipAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mToManyRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_14.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 160)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 160)), fixItArray15  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 160)) ;
            }
          }
        }
        {
        const GGS_toManyRelationshipAST temp_16 = this ;
        GGS_actionMap temp_17 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 162)) ;
        objectArray_5524->mProperty_mPropertyMap.setter_insertKey (temp_16.readProperty_mToManyRelationshipName (), var_kind_6146, temp_17, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 162)) ;
        }
        const GGS_toManyRelationshipAST temp_18 = this ;
        GGS_bool var_inPrefs_6727 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 164)))) ;
        GGS_toManyRelationshipOptionGeneration var_optionForGeneration_6844 ;
        const GGS_toManyRelationshipAST temp_19 = this ;
        switch (temp_19.readProperty_mOption ().enumValue ()) {
        case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
          break ;
        case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
          {
            GGS_lstring extractedValue_6916_masterPropertyName_0 ;
            temp_19.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_6916_masterPropertyName_0) ;
            GGS_propertyKind var_masterPropertyKind_6995 ;
            GGS_actionMap joker_7015_2 ; // Joker input parameter
            GGS_bool joker_7015_1 ; // Joker input parameter
            objectArray_5524->mProperty_mPropertyMap.method_searchKey (extractedValue_6916_masterPropertyName_0, var_masterPropertyKind_6995, joker_7015_2, joker_7015_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 169)) ;
            var_optionForGeneration_6844 = GGS_toManyRelationshipOptionGeneration::class_func_hasDependance (extractedValue_6916_masterPropertyName_0.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_6995, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 172))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 170)) ;
          }
          break ;
        case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
          {
            GGS_lstring extractedValue_7232_oppositeName_0 ;
            temp_19.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_7232_oppositeName_0) ;
            var_optionForGeneration_6844 = GGS_toManyRelationshipOptionGeneration::class_func_hasOpposite (extractedValue_7232_oppositeName_0.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 175)) ;
          }
          break ;
        case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
          {
            var_optionForGeneration_6844 = GGS_toManyRelationshipOptionGeneration::class_func_none (SOURCE_FILE ("to-many-relationship.ggs", 177)) ;
          }
          break ;
        }
        {
        const GGS_toManyRelationshipAST temp_20 = this ;
        const GGS_toManyRelationshipAST temp_21 = this ;
        const GGS_toManyRelationshipAST temp_22 = this ;
        const GGS_toManyRelationshipAST temp_23 = this ;
        const GGS_toManyRelationshipAST temp_24 = this ;
        objectArray_5524->mProperty_mPropertyGenerationList.setter_append (GGS_toManyPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mToManyRelationshipName ().readProperty_string (), temp_21.readProperty_mGenerateDirectAccess (), temp_22.readProperty_mGenerateDirectRead (), var_kind_6146, var_optionForGeneration_6844, var_inPrefs_6727, temp_23.readProperty_mCustomStore (), temp_24.readProperty_mUsedForSignature (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 180)) ;
        }
        {
        const GGS_toManyRelationshipAST temp_25 = this ;
        ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (temp_25.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 191)) ;
        }
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = var_inPrefs_6727.boolEnum () ;
          if (kBoolTrue == test_26) {
            {
            const GGS_toManyRelationshipAST temp_27 = this ;
            ioArgument_ioGeneration.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.setter_insert (temp_27.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 193)) ;
            }
          }
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 230)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)) ;
      const GGS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GGS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)) ;
      result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)) ;
      GGS_string var_masterPropertyTypeName_9756 ;
      const GGS_toManyPropertyGeneration temp_3 = this ;
      GGS_string joker_9717_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_extractHasDependance (joker_9717_1, var_masterPropertyTypeName_9756, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)) ;
      const GGS_toManyPropertyGeneration temp_4 = this ;
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (var_masterPropertyTypeName_9756, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)) ;
      result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GGS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GGS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 240)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 240)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GGS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssign_operation(GGS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)) ;
        }
      }
      result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 243)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GGS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (kBoolTrue == test_12) {
        result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)) ;
        const GGS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GGS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)) ;
        result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)) ;
        const GGS_toManyPropertyGeneration temp_15 = this ;
        const GGS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssign_operation(GGS_string ("@MainActor let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (GGS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)) ;
        const GGS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssign_operation(GGS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)) ;
      }
    }
    if (kBoolFalse == test_12) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)) ;
      const GGS_toManyPropertyGeneration temp_18 = this ;
      result_result.plusAssign_operation(GGS_string ("  //   To many property: ").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)) ;
      result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)) ;
      const GGS_toManyPropertyGeneration temp_19 = this ;
      result_result.plusAssign_operation(GGS_string ("  final let ").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)).add_operation (GGS_string ("_property = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        const GGS_toManyPropertyGeneration temp_21 = this ;
        test_20 = temp_21.readProperty_mCustomStore ().boolEnum () ;
        if (kBoolTrue == test_20) {
          const GGS_toManyPropertyGeneration temp_22 = this ;
          result_result.plusAssign_operation(GGS_string ("Custom_").add_operation (extensionGetter_swiftTypeName (temp_22.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)) ;
        }
      }
      const GGS_toManyPropertyGeneration temp_23 = this ;
      result_result.plusAssign_operation(GGS_string ("StoredArrayOf_").add_operation (extensionGetter_swiftTypeName (temp_23.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)) ;
      const GGS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssign_operation(GGS_string (" (usedForSignature: ").add_operation (temp_24.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)).add_operation (GGS_string (", key: "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)) ;
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        const GGS_toManyPropertyGeneration temp_26 = this ;
        test_25 = temp_26.readProperty_mCustomStore ().boolEnum () ;
        if (kBoolTrue == test_25) {
          const GGS_toManyPropertyGeneration temp_27 = this ;
          const GGS_toManyPropertyGeneration temp_28 = this ;
          result_result.plusAssign_operation(GGS_string ("KEY_FOR_").add_operation (extensionGetter_swiftTypeName (temp_27.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)) ;
        }
      }
      if (kBoolFalse == test_25) {
        const GGS_toManyPropertyGeneration temp_29 = this ;
        result_result.plusAssign_operation(GGS_string ("\"").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)) ;
      }
      result_result.plusAssign_operation(GGS_string (")\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)) ;
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        const GGS_toManyPropertyGeneration temp_31 = this ;
        GGS_bool test_32 = temp_31.readProperty_mGenerateDirectAccess () ;
        if (kBoolTrue != test_32.boolEnum ()) {
          const GGS_toManyPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_mGenerateDirectRead () ;
        }
        test_30 = test_32.boolEnum () ;
        if (kBoolTrue == test_30) {
          result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)) ;
          const GGS_toManyPropertyGeneration temp_34 = this ;
          const GGS_toManyPropertyGeneration temp_35 = this ;
          result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (extensionGetter_swiftTypeName (temp_35.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)) ;
          const GGS_toManyPropertyGeneration temp_36 = this ;
          result_result.plusAssign_operation(GGS_string ("    get { return self.").add_operation (temp_36.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)) ;
          enumGalgasBool test_37 = kBoolTrue ;
          if (kBoolTrue == test_37) {
            const GGS_toManyPropertyGeneration temp_38 = this ;
            test_37 = temp_38.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 270)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 270)).boolEnum () ;
            if (kBoolTrue == test_37) {
              const GGS_toManyPropertyGeneration temp_39 = this ;
              test_37 = temp_39.readProperty_mGenerateDirectAccess ().boolEnum () ;
              if (kBoolTrue == test_37) {
                const GGS_toManyPropertyGeneration temp_40 = this ;
                result_result.plusAssign_operation(GGS_string ("    set { self.").add_operation (temp_40.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)) ;
              }
            }
          }
          result_result.plusAssign_operation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 273)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyPropertyGeneration temp_0 = this ;
  const GGS_toManyPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_13012 = temp_0 ;
  GGS_string temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GGS_string ("self.undoManager") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GGS_string ("inUndoManager") ;
  }
  GGS_string var_undoManager_13081 = temp_2 ;
  const GGS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none:
    {
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (GGS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_13012, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (var_undoManager_13081, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)) ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance:
    {
      GGS_string extractedValue_13404__0 ;
      GGS_string extractedValue_13404__1 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_13404__0, extractedValue_13404__1) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite:
    {
      GGS_string extractedValue_13453_oppositeName_0 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_13453_oppositeName_0) ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GGS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_13012, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (var_undoManager_13081, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)) ;
      const GGS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_13012, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)) ;
      result_result.plusAssign_operation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13453_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)) ;
      result_result.plusAssign_operation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13453_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)) ;
      result_result.plusAssign_operation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 307)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration setupRelationshipFromDictionaryCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_setupRelationshipFromDictionaryCode (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 314)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GGS_toManyPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mCustomStore ().boolEnum () ;
      if (kBoolTrue == test_2) {
        const GGS_toManyPropertyGeneration temp_4 = this ;
        result_result = GGS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (GGS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)) ;
        const GGS_toManyPropertyGeneration temp_5 = this ;
        const GGS_toManyPropertyGeneration temp_6 = this ;
        const GGS_toManyPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)).add_operation (GGS_string ("_property.setProp (EBReferenceArray (customRead_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)).add_operation (GGS_string (" (fromDictionary: inDictionary, with: self.undoManager)))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)) ;
      }
    }
    if (kBoolFalse == test_2) {
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 320)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 320)) ;
      result_result.plusAssign_operation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 321)) ;
      result_result.plusAssign_operation(GGS_string ("      let array = readEntityArrayFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 322)) ;
      const GGS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GGS_string ("        inRelationshipName: \"").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)).add_operation (GGS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)) ;
      result_result.plusAssign_operation(GGS_string ("        inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 324)) ;
      result_result.plusAssign_operation(GGS_string ("        managedObjectArray: inManagedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)) ;
      const GGS_toManyPropertyGeneration temp_10 = this ;
      result_result.plusAssign_operation(GGS_string ("      ) as! [").add_operation (extensionGetter_swiftTypeName (temp_10.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)) ;
      const GGS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 327)).add_operation (GGS_string ("_property.setProp (EBReferenceArray (array))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 327)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 327)) ;
      result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 328)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mCustomStore ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_toManyPropertyGeneration temp_2 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)).add_operation (GGS_string (" (custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)) ;
      const GGS_toManyPropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GGS_string ("    /* for managedObject in self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)).add_operation (GGS_string ("_property.propval.values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)) ;
      result_result.plusAssign_operation(GGS_string ("      ioObjectArray.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 356)) ;
      result_result.plusAssign_operation(GGS_string ("    } */\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 357)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_toManyPropertyGeneration temp_4 = this ;
    result_result = GGS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 359)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 359)) ;
    const GGS_toManyPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GGS_string ("    for managedObject in self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 360)).add_operation (GGS_string (".values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 360)) ;
    result_result.plusAssign_operation(GGS_string ("      ioObjectArray.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 361)) ;
    result_result.plusAssign_operation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 362)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration resetToManyRelationships'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_resetToManyRelationships (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 369)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_toManyPropertyGeneration temp_2 = this ;
    result_result = GGS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 372)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 372)) ;
    const GGS_toManyPropertyGeneration temp_3 = this ;
    result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 373)).add_operation (GGS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 373)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension (
  "xcode-project",
  0,
  gWrapperAllFiles_validationStubExtension_2,
  0,
  gWrapperAllDirectories_validationStubExtension_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [4] = {
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  3,
  gWrapperAllDirectories_validationStubExtension_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_validationStubExtension_actionGeneration (Compiler * /* inCompiler */,
                                                                         const GGS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//——————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_OBJECT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  func validate_") ;
  result.appendString (in_MODEL_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("currentValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (",\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("proposedValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> EBValidationResult <") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs_3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_validationStubRoutineListForGeneration enumerator_1320 (constinArgument_inValidationStubRoutineListForGeneration, EnumerationOrder::up) ;
  while (enumerator_1320.hasCurrentObject ()) {
    GGS_string var_s_1391 = GGS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1320.current_mObjectTypeName (HERE), enumerator_1320.current_mModelName (HERE), enumerator_1320.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 33))) ;
    GGS_string var_fileName_1526 = GGS_string ("validation-").add_operation (enumerator_1320.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (enumerator_1320.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_1526, inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 39)) ;
    }
    GGS_string var_defaultUserZone_32__1650 = GGS_string ("    var result : EBValidationResult <").add_operation (enumerator_1320.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 42)).add_operation (GGS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 43)).add_operation (GGS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 44)).add_operation (GGS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 45)).add_operation (GGS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 46)).add_operation (GGS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 47)) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1526, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_1391, var_defaultUserZone_32__1650, GGS_string ("  }\n},\n\n//---------------------------------------------------------------------------------------------------------------------*\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 49)) ;
    }
    enumerator_1320.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildActionMap_3F__21_ (const GGS_lstringlist constinArgument_inActionDeclarationList,
                                     GGS_actionMap & outArgument_outActionMap,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActionMap.drop () ; // Release 'out' argument
  GGS_actionMap temp_0 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 46)) ;
  outArgument_outActionMap = temp_0 ;
  cEnumerator_lstringlist enumerator_1956 (constinArgument_inActionDeclarationList, EnumerationOrder::up) ;
  while (enumerator_1956.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1956.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 48)) ;
    }
    enumerator_1956.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@actionFileGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                     const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                     GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_actionFileGeneration temp_0 = this ;
  const GGS_actionFileGeneration temp_1 = this ;
  GGS_string var_s_2749 = GGS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.readProperty_mClassName (), temp_1.readProperty_mActionName () COMMA_SOURCE_FILE ("run-action.ggs", 67))) ;
  const GGS_actionFileGeneration temp_2 = this ;
  const GGS_actionFileGeneration temp_3 = this ;
  GGS_string var_fileName_2861 = GGS_string ("action-").add_operation (temp_2.readProperty_mClassName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (temp_3.readProperty_mActionName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_2861, inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 72)) ;
  }
  {
  GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2861, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_2749, GGS_string ("    ENTER USER CODE HERE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (8212)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("run-action.ggs", 81)), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 73)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'actionGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_actionGenerationTemplate_3,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_actionGenerationTemplate_1,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_actionGenerationTemplate_2,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_actionGenerationTemplate,
  & gWrapperDirectory_1_actionGenerationTemplate,
  & gWrapperDirectory_2_actionGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_actionGenerationTemplate_0,
  3,
  gWrapperAllDirectories_actionGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'actionGenerationTemplate actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (Compiler * /* inCompiler */,
                                                                          const GGS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                          const GGS_string & in_ACTION_5F_NAME
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//——————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_EXTENDED_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  @objc func ") ;
  result.appendString (in_ACTION_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inSender : NSObject\?) {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                              const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                              const GGS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                              const GGS_propertyMap /* constinArgument_inPreferencesObservablePropertyMap */,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GGS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GGS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.ggs", 274)) ;
  const GGS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GGS_typeKind & outArgument_outType,
                                                                                                        GGS_location & outArgument_outErrorLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_13165 ;
  GGS_string var_swiftTypeStringForTransientFunctionArgument_13195 ;
  GGS_string var_defaultValueAsString_13264 ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GGS_propertyMap temp_1 ;
  const enumGalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (kBoolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_13165, var_swiftTypeStringForTransientFunctionArgument_13195, var_defaultValueAsString_13264, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 290)) ;
  switch (var_kind_13165.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_13320_type_0 ;
      GGS_propertyAccessibility extractedValue_13326__1 ;
      var_kind_13165.getAssociatedValuesFor_property (extractedValue_13320_type_0, extractedValue_13326__1) ;
      outArgument_outType = extractedValue_13320_type_0 ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_13366__0 ;
      GGS_propertyAccessibility extractedValue_13366__1 ;
      GGS_bool extractedValue_13366__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_13366__3 ;
      var_kind_13165.getAssociatedValuesFor_toMany (extractedValue_13366__0, extractedValue_13366__1, extractedValue_13366__2, extractedValue_13366__3) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)), GGS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_13480__0 ;
      GGS_propertyAccessibility extractedValue_13480__1 ;
      GGS_bool extractedValue_13480__2 ;
      GGS_toOneOppositeRelationship extractedValue_13480__3 ;
      GGS_bool extractedValue_13480__4 ;
      var_kind_13165.getAssociatedValuesFor_toOne (extractedValue_13480__0, extractedValue_13480__1, extractedValue_13480__2, extractedValue_13480__3, extractedValue_13480__4) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)), GGS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_13604__0 ;
      GGS_bool extractedValue_13604__1 ;
      var_kind_13165.getAssociatedValuesFor_arrayController (extractedValue_13604__0, extractedValue_13604__1) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)), GGS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13731__0 ;
      var_kind_13165.getAssociatedValuesFor_selectionController (extractedValue_13731__0) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)), GGS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GGS_string temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GGS_string ("preferences_") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GGS_string ("self.") ;
  }
  outArgument_outEnableExpression = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 311)), inCompiler COMMA_HERE) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GGS_typeKind & outArgument_outType,
                                                                                                 GGS_location & outArgument_outErrorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14932 ;
  const GGS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14932, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 328)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 338)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 338)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GGS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 339)) ;
    }
  }
  outArgument_outEnableExpression = GGS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_14932, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GGS_typeKind & outArgument_outType,
                                                                                             GGS_location & outArgument_outErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16050 ;
  GGS_typeKind var_outLeftType_16075 ;
  GGS_location var_outLeftLocation_16097 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16050, var_outLeftType_16075, var_outLeftLocation_16097, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 356)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_16075.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 366)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 366)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16097, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 367)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_16518 ;
  GGS_typeKind var_outRightType_16544 ;
  GGS_location var_outRightLocation_16567 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_16518, var_outRightType_16544, var_outRightLocation_16567, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 369)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_16544.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 379)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 379)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_16567, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 380)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 382)) ;
  outArgument_outErrorLocation = var_outRightLocation_16567 ;
  outArgument_outEnableExpression = GGS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16050, var_rightExpression_16518, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_17739 ;
  GGS_typeKind var_outLeftType_17764 ;
  GGS_location var_outLeftLocation_17786 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_17739, var_outLeftType_17764, var_outLeftLocation_17786, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 399)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_17764.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 409)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 409)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_17786, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 410)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18207 ;
  GGS_typeKind var_outRightType_18233 ;
  GGS_location var_outRightLocation_18256 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_18207, var_outRightType_18233, var_outRightLocation_18256, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 412)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_18233.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 422)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 422)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_18256, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 423)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 425)) ;
  outArgument_outErrorLocation = var_outRightLocation_18256 ;
  outArgument_outEnableExpression = GGS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_17739, var_rightExpression_18207, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_19429 ;
  GGS_typeKind var_outLeftType_19454 ;
  GGS_location var_outLeftLocation_19476 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_19429, var_outLeftType_19454, var_outLeftLocation_19476, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 442)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_19454.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 452)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 452)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_19476, GGS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 453)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19898 ;
  GGS_typeKind var_outRightType_19924 ;
  GGS_location var_outRightLocation_19947 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19898, var_outRightType_19924, var_outRightLocation_19947, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 455)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_19924.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 465)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 465)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19947, GGS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 466)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 468)) ;
  outArgument_outErrorLocation = var_outRightLocation_19947 ;
  outArgument_outEnableExpression = GGS_andBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_19429, var_rightExpression_19898, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_21121 ;
  GGS_typeKind var_outLeftType_21146 ;
  GGS_location var_outLeftLocation_21168 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_21121, var_outLeftType_21146, var_outLeftLocation_21168, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 485)) ;
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_21469 ;
  GGS_typeKind var_outRightType_21495 ;
  GGS_location var_outRightLocation_21518 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_21469, var_outRightType_21495, var_outRightLocation_21518, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 495)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GGS_bool test_3 = var_outLeftType_21146.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 505)) ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_21146.getter_isIntegerType (SOURCE_FILE ("multiple-binding.ggs", 505)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.ggs", 505)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_21168, GGS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 506)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_outRightType_21495.objectCompare (var_outLeftType_21146)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_21518, GGS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 509)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 511)) ;
  outArgument_outErrorLocation = var_outRightLocation_21518 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_7 = this ;
  outArgument_outEnableExpression = GGS_comparisonMultipleBindingExpressionForGeneration::init_21__21__21_ (var_leftExpression_21121, temp_7.readProperty_mOperator (), var_rightExpression_21469, inCompiler COMMA_HERE) ;
}
