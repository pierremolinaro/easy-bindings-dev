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

void cPtr_autoLayoutDocumentDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 47)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mRootEntityName () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 48)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDocumentDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutDocumentDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap var_actionMap_5590 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5590, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 148)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  GALGAS_propertyMap temp_3 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 152)) ;
  GALGAS_propertyGenerationList temp_4 = GALGAS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 154)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::class_func_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 151)), temp_3, var_actionMap_5590, temp_4, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 149)) ;
  }
  cEnumerator_actionMap enumerator_5762 (var_actionMap_5590, EnumerationOrder::up) ;
  while (enumerator_5762.hasCurrentObject ()) {
    {
    const GALGAS_autoLayoutDocumentDeclarationAST temp_5 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GALGAS_actionFileGeneration::init_21__21_ (temp_5.readProperty_mClassName ().readProperty_string (), enumerator_5762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 157)) ;
    }
    enumerator_5762.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap var_preferencesPropertyMap_6304 ;
  GALGAS_classKind joker_6291 ; // Joker input parameter
  GALGAS_actionMap joker_6332_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_6332_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 172)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 172)), inCompiler COMMA_HERE), joker_6291, var_preferencesPropertyMap_6304, joker_6332_2, joker_6332_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 171)) ;
  GALGAS_propertyMap var_documentPropertyMap_6469 ;
  GALGAS_actionMap var_documentActionMap_6499 ;
  GALGAS_propertyGenerationList var_documentPropertyGenerationList_6527 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GALGAS_classKind joker_6456 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 179)), inCompiler COMMA_HERE), joker_6456, var_documentPropertyMap_6469, var_documentActionMap_6499, var_documentPropertyGenerationList_6527, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 178)) ;
  GALGAS_propertyMap var_rootPropertyMap_6680 ;
  GALGAS_actionMap var_rootActionMap_6713 ;
  GALGAS_propertyGenerationList var_rootPropertyGenerationList_6744 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GALGAS_classKind joker_6667 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_6667, var_rootPropertyMap_6680, var_rootActionMap_6713, var_rootPropertyGenerationList_6744, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 186)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_7106 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_7173 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_7245 ;
  GALGAS_decoratedOutletMap var_outletMap_7306 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7358 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_7445 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GALGAS_bool (false), var_rootPropertyMap_6680, var_preferencesPropertyMap_6304, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_6469, var_documentActionMap_6499, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_7106, var_multipleBindingGenerationList_7173, var_actionBindingListForGeneration_7245, var_outletMap_7306, var_tableViewBindingGenerationList_7358, var_ebViewGraphicControllerBindingGenerationList_7445, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 194)) ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  cEnumerator_arrayControllerBindingListAST enumerator_7550 (temp_5.readProperty_mArrayControllerBindingListAST (), EnumerationOrder::up) ;
  while (enumerator_7550.hasCurrentObject ()) {
    switch (enumerator_7550.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_8326 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7550.current_mHiddenSelectionViewBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_7730_expression = extractPtr_8326->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_8002 ;
        GALGAS_typeKind var_type_8043 ;
        GALGAS_location var_errorLocation_8072 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_7730_expression.ptr (), GALGAS_bool (false), var_rootPropertyMap_6680, ioArgument_ioSemanticContext, var_documentPropertyMap_6469, var_preferencesPropertyMap_6304, var_hiddenExpression_8002, var_type_8043, var_errorLocation_8072, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 218)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_type_8043.getter_isBoolType (SOURCE_FILE ("document-auto-layout.ggs", 228)).operator_not (SOURCE_FILE ("document-auto-layout.ggs", 228)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_8072, GALGAS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 229)) ;
          }
        }
        {
        var_multipleBindingGenerationList_7173.setter_append (enumerator_7550.current_mControllerName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_8002, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 231)) ;
        }
      }
      break ;
    }
    enumerator_7550.gotoNextObject () ;
  }
  GALGAS_autoLayoutViewDeclarationMap temp_8 = GALGAS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 239)) ;
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_8419 = temp_8 ;
  GALGAS_viewGenerationList temp_9 = GALGAS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 240)) ;
  GALGAS_viewGenerationList var_viewGenerationList_8469 = temp_9 ;
  GALGAS_implicitViewFunctionGenerationList temp_10 = GALGAS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 241)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_8535 = temp_10 ;
  GALGAS_autoLayoutConfiguratorMap temp_11 = GALGAS_autoLayoutConfiguratorMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 242)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_8608 = temp_11 ;
  GALGAS_autoLayoutOutletMap temp_12 = GALGAS_autoLayoutOutletMap::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 243)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_8656 = temp_12 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_13 = this ;
  cEnumerator_astViewDeclarationList enumerator_8698 (temp_13.readProperty_mViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_8698.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_8419.setter_insertKey (enumerator_8698.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 245)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_9184 ;
    const GALGAS_autoLayoutDocumentDeclarationAST temp_14 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_8698.current_mView (HERE).ptr (), enumerator_8698.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_8419, GALGAS_bool (false), var_rootPropertyMap_6680, var_preferencesPropertyMap_6304, ioArgument_ioSemanticContext, var_documentPropertyMap_6469, var_documentActionMap_6499, temp_14.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_8535, var_configuratorMap_8608, var_autoLayoutOutletMap_8656, var_viewGeneration_9184, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 246)) ;
    {
    var_viewGenerationList_8469.setter_append (enumerator_8698.current_mViewName (HERE).readProperty_string (), var_viewGeneration_9184, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 262)) ;
    }
    enumerator_8698.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  var_viewDeclarationMap_8419.method_searchKey (temp_15.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 264)) ;
  ioArgument_ioGeneration.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GALGAS_bool (true) ;
  GALGAS_autoLayoutOutletLinkerGenerationList temp_16 = GALGAS_autoLayoutOutletLinkerGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 268)) ;
  GALGAS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_9476 = temp_16 ;
  GALGAS_stringset temp_17 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 269)) ;
  GALGAS_stringset var_linkerNameSet_9525 = temp_17 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_18 = this ;
  cEnumerator_astAutoLayoutOutletLinkerList enumerator_9563 (temp_18.readProperty_mOutletLinkerList (), EnumerationOrder::up) ;
  while (enumerator_9563.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_linkerNameSet_9525.getter_hasKey (enumerator_9563.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 271)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_9563.current_mLinkerName (HERE).readProperty_location (), GALGAS_string ("duplicated linker name"), fixItArray20  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 272)) ;
      }
    }
    {
    var_linkerNameSet_9525.setter_insert (enumerator_9563.current_mLinkerName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 274)) ;
    }
    GALGAS__32_stringlist temp_21 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 275)) ;
    GALGAS__32_stringlist var_outletNameAndTypeNameList_9786 = temp_21 ;
    cEnumerator_lstringlist enumerator_9826 (enumerator_9563.current_mOutletNameList (HERE), EnumerationOrder::up) ;
    while (enumerator_9826.hasCurrentObject ()) {
      GALGAS_string var_outletTypeName_9912 ;
      GALGAS_bool var_outletIsArray_9940 ;
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
  const GALGAS_autoLayoutDocumentDeclarationAST temp_22 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_23 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_24 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_25 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GALGAS_autoLayoutDocumentFileGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (temp_22.readProperty_mClassName ().readProperty_string (), temp_23.readProperty_mRootEntityName ().readProperty_string (), temp_24.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_6527, var_outletMap_7306, var_autoLayoutOutletMap_8656, var_actionBindingListForGeneration_7245, var_regularBindingsGenerationList_7106, var_multipleBindingGenerationList_7173, var_tableViewBindingGenerationList_7358, var_ebViewGraphicControllerBindingGenerationList_7445, var_viewGenerationList_8469, var_implicitViewFunctionGenerationList_8535, var_configuratorMap_8608, temp_25.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_9476, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 283)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                                 const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                 GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_autoLayoutDocumentFileGeneration temp_0 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_1 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_2 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_3 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_4 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_5 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_6 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_7 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_8 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_9 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_10 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_11 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_12 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_13 = this ;
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::equal, temp_13.readProperty_mCustomSuperClassName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_string ("EBAutoLayoutManagedDocument") ;
  }else if (kBoolFalse == test_15) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_16 = this ;
    temp_14 = temp_16.readProperty_mCustomSuperClassName () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_17 = this ;
  GALGAS_string var_s_13030 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 347))) ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GALGAS_string var_fileName_13701 = GALGAS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 364)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13701, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 365)) ;
  }
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_13701, var_s_13030, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 366)) ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_19 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_13888 (temp_19.readProperty_mConfiguratorMap (), EnumerationOrder::up) ;
  while (enumerator_13888.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GALGAS_string var_s_13940 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_13888.current_lkey (HERE).readProperty_string (), enumerator_13888.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 372))) ;
    GALGAS_string var_header_14122 = GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 377)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 380)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GALGAS_string var_fileName_14464 = GALGAS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)).add_operation (enumerator_13888.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 382)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14464, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 383)) ;
    }
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14464, GALGAS_string ("//"), var_header_14122, GALGAS_string ("\n\n"), var_s_13940, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 384)) ;
    }
    enumerator_13888.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_22 = this ;
  cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_15041 (temp_22.readProperty_mOutletLinkerGenerationList (), EnumerationOrder::up) ;
  while (enumerator_15041.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GALGAS_string var_s_15115 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_15041.current_mLinkerName (HERE), enumerator_15041.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 397))) ;
    GALGAS_string var_header_15287 = GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 405)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 406)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 406)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 406)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GALGAS_string var_fileName_15629 = GALGAS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)).add_operation (enumerator_15041.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15629, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 408)) ;
    }
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_15629, GALGAS_string ("//"), var_header_15287, GALGAS_string ("\n\n"), var_s_15115, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 409)) ;
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

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (Compiler * inCompiler,
                                                                                               const GALGAS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                               const GALGAS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                               const GALGAS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                               const GALGAS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                               const GALGAS_actionBindingListForGeneration & /* in_TARGET_5F_ACTION_5F_LIST */,
                                                                                               const GALGAS_regularBindingsGenerationList & /* in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST */,
                                                                                               const GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_tableViewBindingGenerationList & /* in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                               const GALGAS_ebViewGraphicControllerBindingGenerationList & /* in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                               const GALGAS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                               const GALGAS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//——————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n@objc(") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (") class ") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  \n") ;
  GALGAS_uint index_521_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_521 (in_DOCUMENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_521.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_521.current_mProperty (HERE).ptr (), GALGAS_bool (false), GALGAS_bool (true), GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue ()) ;
      index_521_.increment () ;
      enumerator_521.gotoNextObject () ;
    }
  }
  result.appendString ("  //································································································\n  //    Outlets\n  //································································································\n\n") ;
  GALGAS_uint index_901_ (0) ;
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
  GALGAS_uint index_1408_ (0) ;
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
  GALGAS_uint index_1818_ (0) ;
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
  GALGAS_uint index_3064_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_3064 (in_VIEW_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3064.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    VIEW ") ;
      result.appendString (enumerator_3064.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3064.current_mView (HERE).ptr (), GALGAS_bool (false), enumerator_3064.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue ()) ;
      index_3064_.increment () ;
      enumerator_3064.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3440_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_3440 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3440.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3440.current_mInstruction (HERE).ptr (), GALGAS_bool (false), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      index_3440_idx.increment () ;
      enumerator_3440.gotoNextObject () ;
    }
  }
  result.appendString ("  //································································································\n  //    Build User Interface\n  //································································································\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
  result.appendString (in_MAIN_5F_VIEW_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n  //--- Call outlet linkers\n") ;
  GALGAS_uint index_4631_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_4631 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4631.hasCurrentObject ()) {
      result.appendString ("    self.linker_") ;
      result.appendString (enumerator_4631.current_mLinkerName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GALGAS_uint index_4740_ (0) ;
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
  GALGAS_uint index_5257_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5257 (in_DOCUMENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5257.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5257.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString ("\n") ;
      index_5257_.increment () ;
      enumerator_5257.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n\n  //································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (Compiler * /* inCompiler */,
                                                                                                                 const GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                                 const GALGAS_string & in_OUTLET_5F_NAME,
                                                                                                                 const GALGAS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func configure_") ;
  result.appendString (in_OUTLET_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inOutlet : AutoLayout") ;
  result.appendString (in_OUTLET_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                   const GALGAS_string & in_LINKER_5F_NAME,
                                                                                                   const GALGAS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func linker_") ;
  result.appendString (in_LINKER_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_235_ (0) ;
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  const GALGAS_prefsDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 24)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@prefsDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_prefsDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_preferencesName (Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("Preferences") ;
//---
  return result_outResult ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_preferencesName = false ;
static GALGAS_string gOnceFunctionResult_preferencesName ;

//--------------------------------------------------------------------------------------------------

GALGAS_string function_preferencesName (class Compiler * inCompiler
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

static GALGAS_object functionWithGenericHeader_preferencesName (Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
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

void cPtr_prefsDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                          GALGAS_generationStruct & ioArgument_ioGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap var_actionMap_4173 ;
  {
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_4173, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 96)) ;
  }
  {
  GALGAS_propertyMap temp_1 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 100)) ;
  GALGAS_propertyGenerationList temp_2 = GALGAS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 102)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 98)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 98)), inCompiler COMMA_HERE), GALGAS_classKind::class_func_prefs (SOURCE_FILE ("preferences.ggs", 99)), temp_1, var_actionMap_4173, temp_2, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 97)) ;
  }
  cEnumerator_actionMap enumerator_4320 (var_actionMap_4173, EnumerationOrder::up) ;
  while (enumerator_4320.hasCurrentObject ()) {
    {
    const GALGAS_prefsDeclarationAST temp_3 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GALGAS_actionFileGeneration::init_21__21_ (temp_3.readProperty_mClassName ().readProperty_string (), enumerator_4320.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 105)) ;
    }
    enumerator_4320.gotoNextObject () ;
  }
  const GALGAS_prefsDeclarationAST temp_4 = this ;
  ioArgument_ioGeneration.mProperty_mMainXibDescriptorList = temp_4.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 123)) ;
  temp_0.enterElement (GALGAS_string ("awakeFromNib"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 123)) ;
  temp_0.enterElement (GALGAS_string ("init"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 123)) ;
  GALGAS_stringset var_availableCallers_5022 = temp_0 ;
  GALGAS_externFunctionMap temp_1 = GALGAS_externFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
  GALGAS_externFunctionMap var_externFunctionMap_5091 = temp_1 ;
  const GALGAS_prefsDeclarationAST temp_2 = this ;
  cEnumerator_externSwiftFunctionList enumerator_5147 (temp_2.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), EnumerationOrder::up) ;
  while (enumerator_5147.hasCurrentObject ()) {
    {
    var_externFunctionMap_5091.setter_insertKey (enumerator_5147.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 126)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_availableCallers_5022.getter_hasKey (enumerator_5147.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 127)).operator_not (SOURCE_FILE ("preferences.ggs", 127)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_5341 = GALGAS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5393 (var_availableCallers_5022, EnumerationOrder::up) ;
        while (enumerator_5393.hasCurrentObject ()) {
          var_s_5341.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_5393.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 130)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
          enumerator_5393.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5147.current_mCallerName (HERE).readProperty_location (), var_s_5341, fixItArray4  COMMA_SOURCE_FILE ("preferences.ggs", 132)) ;
      }
    }
    enumerator_5147.gotoNextObject () ;
  }
  GALGAS_propertyMap var_preferencesPropertyMap_5635 ;
  GALGAS_actionMap var_actionMap_5668 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_5688 ;
  GALGAS_classKind joker_5622 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 137)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 137)), inCompiler COMMA_HERE), joker_5622, var_preferencesPropertyMap_5635, var_actionMap_5668, var_propertyGenerationList_5688, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 136)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_6052 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_6123 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_6195 ;
  GALGAS_decoratedOutletMap var_outletMap_6256 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6308 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6395 ;
  {
  GALGAS_propertyMap temp_5 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 146)) ;
  const GALGAS_prefsDeclarationAST temp_6 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GALGAS_bool (true), temp_5, var_preferencesPropertyMap_5635, GALGAS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_6.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5635, var_actionMap_5668, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 153)), ioArgument_ioGeneration, var_regularBindingsGenerationList_6052, var_multipleBindingGenerationList_6123, var_actionBindingListForGeneration_6195, var_outletMap_6256, var_tableViewBindingGenerationList_6308, var_ebViewGraphicControllerBindingGenerationList_6395, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 144)) ;
  }
  GALGAS_autoLayoutViewDeclarationMap temp_7 = GALGAS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 163)) ;
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6521 = temp_7 ;
  GALGAS_viewGenerationList temp_8 = GALGAS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 164)) ;
  GALGAS_viewGenerationList var_viewGenerationList_6571 = temp_8 ;
  GALGAS_implicitViewFunctionGenerationList temp_9 = GALGAS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 165)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6637 = temp_9 ;
  GALGAS_autoLayoutConfiguratorMap temp_10 = GALGAS_autoLayoutConfiguratorMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 166)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_6710 = temp_10 ;
  GALGAS_autoLayoutOutletMap temp_11 = GALGAS_autoLayoutOutletMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_6758 = temp_11 ;
  const GALGAS_prefsDeclarationAST temp_12 = this ;
  cEnumerator_astViewDeclarationList enumerator_6800 (temp_12.readProperty_mDeclaration ().readProperty_mViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_6800.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6521.setter_insertKey (enumerator_6800.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 169)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_7300 ;
    GALGAS_propertyMap temp_13 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 174)) ;
    GALGAS_propertyMap temp_14 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 177)) ;
    const GALGAS_prefsDeclarationAST temp_15 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6800.current_mView (HERE).ptr (), enumerator_6800.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6521, GALGAS_bool (true), temp_13, var_preferencesPropertyMap_5635, ioArgument_ioSemanticContext, temp_14, var_actionMap_5668, temp_15.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6637, var_configuratorMap_6710, var_autoLayoutOutletMap_6758, var_viewGeneration_7300, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 170)) ;
    {
    var_viewGenerationList_6571.setter_append (enumerator_6800.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7300, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 186)) ;
    }
    enumerator_6800.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_viewDeclarationMap_6521.getter_hasKey (GALGAS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 188)).operator_not (SOURCE_FILE ("preferences.ggs", 188)).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 189)), GALGAS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray17  COMMA_SOURCE_FILE ("preferences.ggs", 189)) ;
    }
  }
  {
  const GALGAS_prefsDeclarationAST temp_18 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GALGAS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5688, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_6052, var_multipleBindingGenerationList_6123, var_actionBindingListForGeneration_6195, var_outletMap_6256, temp_18.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6308, var_ebViewGraphicControllerBindingGenerationList_6395, var_viewGenerationList_6571, var_implicitViewFunctionGenerationList_6637, var_configuratorMap_6710, var_autoLayoutOutletMap_6758, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 192)) ;
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

GALGAS_string filewrapperTemplate_prefsGenerationTemplate_preferences (Compiler * inCompiler,
                                                                       const GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                       const GALGAS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                       const GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                       const GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                       const GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                       const GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                       const GALGAS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP
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
  GALGAS_uint index_1957_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_1957 (in_VIEW_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1957.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    VIEW ") ;
      result.appendString (enumerator_1957.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_1957.current_mView (HERE).ptr (), GALGAS_bool (true), enumerator_1957.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue ()) ;
      index_1957_.increment () ;
      enumerator_1957.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2332_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_2332 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2332.hasCurrentObject ()) {
      result.appendString ("  //································································································\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_2332_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\n  //································································································\n\n  fileprivate final func computeImplicitView_") ;
      result.appendString (index_2332_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2332.current_mInstruction (HERE).ptr (), GALGAS_bool (true), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      index_2332_idx.increment () ;
      enumerator_2332.gotoNextObject () ;
    }
  }
  result.appendString ("  //································································································\n  //    Outlets\n  //································································································\n\n") ;
  GALGAS_uint index_3078_ (0) ;
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
  GALGAS_uint index_3579_ (0) ;
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
  GALGAS_uint index_3983_ (0) ;
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
  result.appendString ("\n  //································································································\n  //    Undo Manager\n  //································································································\n\n  private var mUndoManager = EBUndoManager ()\n\n  //································································································\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  //································································································\n  // The preferences window should register this object as delegate (do it in Interface Builder)\n  //································································································\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  //································································································\n  //    Init\n  //································································································\n\n  override init () {\n    super.init ()\n    g_") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" = self ;\n  //--- Read from preferences\n") ;
  GALGAS_uint index_5320_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5320 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_5320.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5320.current_mProperty (HERE).ptr (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 121)).stringValue ()) ;
      index_5320_.increment () ;
      enumerator_5320.gotoNextObject () ;
    }
  }
  result.appendString ("  //--- Notify application will terminate\n    /* NotificationCenter.default.addObserver (self,\n      selector:#selector(Preferences.applicationWillTerminateAction(_:)),\n      name:NSApplication.willTerminateNotification,\n      object:nil\n    ) */\n  //--- Extern functions\n") ;
  GALGAS_uint index_5716_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_5716 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5716.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_5716.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("init"))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("    self.") ;
        result.appendString (enumerator_5716.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5716_.increment () ;
      enumerator_5716.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("preferences.swift.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  //································································································\n\n  @IBOutlet private final var window : NSWindow\?\n  let OUTLET_WIDTH = 200.0\n  let OUTLET_HEIGHT = 22.0\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  //································································································\n  //    awakeFromNib\n  //································································································\n\n  override func awakeFromNib () {\n") ;
  result.appendString (extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 154)).stringValue ()) ;
  GALGAS_uint index_6440_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_6440 (in_OUTLET_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_6440.hasCurrentObject ()) {
      result.appendString ("    checkOutletConnection (self.") ;
      result.appendString (enumerator_6440.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", \"") ;
      result.appendString (enumerator_6440.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\", ") ;
      result.appendString (enumerator_6440.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString (".self, #file, #line)\n") ;
      index_6440_.increment () ;
      enumerator_6440.gotoNextObject () ;
    }
  }
  result.appendString ("  //--------------------------- Install bindings\n") ;
  GALGAS_uint index_6714_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_6714 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6714.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_6714.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.bind_") ;
      result.appendString (enumerator_6714.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GALGAS_uint index_6821_ (0) ;
      if (enumerator_6714.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_6821 (enumerator_6714.current_mBoundObjectList (HERE), EnumerationOrder::up) ;
        while (enumerator_6821.hasCurrentObject ()) {
          result.appendString (enumerator_6821.current_mBoundObjectString (HERE).stringValue ()) ;
          if (enumerator_6821.hasNextObject ()) {
            result.appendString (", ") ;
          }
          index_6821_.increment () ;
          enumerator_6821.gotoNextObject () ;
        }
      }
      result.appendString (enumerator_6714.current_mBindingOptionsString (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_6714_.increment () ;
      enumerator_6714.gotoNextObject () ;
    }
  }
  result.appendString ("  //--------------------------- Install multiple bindings\n") ;
  GALGAS_uint index_7052_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_7052 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7052.hasCurrentObject ()) {
      result.appendString ("    do{\n      let controller = MultipleBindingController_") ;
      result.appendString (enumerator_7052.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (\n        computeFunction: ") ;
      result.appendString (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_7052.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 173)).stringValue ()) ;
      result.appendString (",\n        outlet: self.") ;
      result.appendString (enumerator_7052.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\n      )\n      self.mController_") ;
      result.appendString (enumerator_7052.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_7052.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" = controller\n    }\n") ;
      index_7052_.increment () ;
      enumerator_7052.gotoNextObject () ;
    }
  }
  result.appendString ("  //--------------------------- Array controller\n") ;
  GALGAS_uint index_7523_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_7523 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7523.hasCurrentObject ()) {
      result.appendString ("    preferences_") ;
      result.appendString (enumerator_7523.current_mTableValueBindingControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_tableView (self.") ;
      result.appendString (enumerator_7523.current_mTableValueBindingOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_7523_.increment () ;
      enumerator_7523.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7751_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7751 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7751.hasCurrentObject ()) {
      result.appendString ("    preferences_") ;
      result.appendString (enumerator_7751.current_mArrayControllerControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_ebView (self.") ;
      result.appendString (enumerator_7751.current_mEBViewOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      index_7751_.increment () ;
      enumerator_7751.gotoNextObject () ;
    }
  }
  result.appendString ("  //--------------------------- Set targets / actions\n") ;
  GALGAS_uint index_7990_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_7990 (in_TARGET_5F_ACTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7990.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_7990.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.target = ") ;
      result.appendString (enumerator_7990.current_mTargetName (HERE).stringValue ()) ;
      result.appendString ("\n    self.") ;
      result.appendString (enumerator_7990.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.action = #selector (") ;
      result.appendString (enumerator_7990.current_mTargetTypeName (HERE).stringValue ()) ;
      result.appendString (".") ;
      result.appendString (enumerator_7990.current_mActionName (HERE).stringValue ()) ;
      result.appendString (" (_:))\n") ;
      index_7990_.increment () ;
      enumerator_7990.gotoNextObject () ;
    }
  }
  result.appendString ("  //--------------------------- Extern functions\n") ;
  GALGAS_uint index_8266_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_8266 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8266.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_8266.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("awakeFromNib"))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("    self.") ;
        result.appendString (enumerator_8266.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_8266_.increment () ;
      enumerator_8266.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n\n  //································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n") ;
  GALGAS_uint index_8651_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8651 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_8651.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_8651.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 208)).stringValue ()) ;
      index_8651_.increment () ;
      enumerator_8651.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  GALGAS_uint index_8747_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_8747 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, EnumerationOrder::up) ;
    while (enumerator_8747.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_8747.current_mProperty (HERE).ptr (), GALGAS_bool (true), GALGAS_bool (true), GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 213)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 213)).stringValue ()) ;
      index_8747_.increment () ;
      enumerator_8747.gotoNextObject () ;
    }
  }
  result.appendString ("\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@preferencesForGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                         const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_preferencesForGeneration temp_0 = this ;
  const GALGAS_preferencesForGeneration temp_1 = this ;
  const GALGAS_preferencesForGeneration temp_2 = this ;
  const GALGAS_preferencesForGeneration temp_3 = this ;
  const GALGAS_preferencesForGeneration temp_4 = this ;
  const GALGAS_preferencesForGeneration temp_5 = this ;
  const GALGAS_preferencesForGeneration temp_6 = this ;
  const GALGAS_preferencesForGeneration temp_7 = this ;
  const GALGAS_preferencesForGeneration temp_8 = this ;
  const GALGAS_preferencesForGeneration temp_9 = this ;
  const GALGAS_preferencesForGeneration temp_10 = this ;
  const GALGAS_preferencesForGeneration temp_11 = this ;
  GALGAS_string var_s_10612 = GALGAS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 257))) ;
  GALGAS_string var_fileName_11113 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 271)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 271)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11113, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 272)) ;
  }
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11113, var_s_10612, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 273)) ;
  }
  const GALGAS_preferencesForGeneration temp_12 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_11305 (temp_12.readProperty_mConfiguratorMap (), EnumerationOrder::up) ;
  while (enumerator_11305.hasCurrentObject ()) {
    GALGAS_string var_s_11357 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GALGAS_string ("Preferences"), enumerator_11305.current_lkey (HERE).readProperty_string (), enumerator_11305.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 280))) ;
    GALGAS_string var_header_11534 = GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 285)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 287)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 289)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 289)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 289)) ;
    GALGAS_string var_fileName_11876 = GALGAS_string ("configurator-Preferences-").add_operation (enumerator_11305.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 290)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 290)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11876, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 291)) ;
    }
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11876, GALGAS_string ("//"), var_header_11534, GALGAS_string ("\n\n"), var_s_11357, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 300)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 300)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 292)) ;
    }
    enumerator_11305.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const GALGAS_string constinArgument_inSourceFileDirectory,
                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                           const GALGAS_lstringlist constinArgument_inGraphvizList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("graphviz.ggs", 29)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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

void routine_graphvizRootEntityAnalysis_3F__3F__3F_ (const GALGAS_string constinArgument_inSourceFileDirectory,
                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                     const GALGAS_string constinArgument_inRootEntityName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  temp_0.enterElement (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  GALGAS_stringset var_reachableEntityNameSet_1841 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_1.enterElement (GALGAS_stringlist_2D_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GALGAS_stringlist var_exploreArray_1903 = temp_1 ;
  GALGAS_stringlist temp_2 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 44)) ;
  GALGAS_stringlist var_nodeList_1963 = temp_2 ;
  GALGAS_stringlist temp_3 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 45)) ;
  GALGAS_stringlist var_arrowList_1995 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).isValid ()) {
    uint32_t variant_2012 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).uintValue () ;
    bool loop_2012 = true ;
    while (loop_2012) {
      loop_2012 = GALGAS_bool (ComparisonKind::greaterThan, var_exploreArray_1903.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_2012) {
        loop_2012 = GALGAS_bool (ComparisonKind::greaterThan, var_exploreArray_1903.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_2012 && (0 == variant_2012)) {
        loop_2012 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 46)) ;
      }
      if (loop_2012) {
        variant_2012 -- ;
        GALGAS_string var_entityName_2130 ;
        {
        var_exploreArray_1903.setter_popLast (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GALGAS_string var_node_2150 = GALGAS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GALGAS_classKind var_entityKind_2291 ;
        GALGAS_propertyMap var_propertyMap_2321 ;
        GALGAS_actionMap joker_2334_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_2334_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_2130.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2291, var_propertyMap_2321, joker_2334_2, joker_2334_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GALGAS_string var_superEntityName_2384 ;
        GALGAS_bool joker_2401_3 ; // Joker input parameter
        GALGAS_bool joker_2401_2 ; // Joker input parameter
        GALGAS_bool joker_2401_1 ; // Joker input parameter
        var_entityKind_2291.method_entity (var_superEntityName_2384, joker_2401_3, joker_2401_2, joker_2401_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::notEqual, var_superEntityName_2384.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1841.getter_hasKey (var_superEntityName_2384 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_reachableEntityNameSet_1841.setter_insert (var_superEntityName_2384, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                }
                {
                var_exploreArray_1903.setter_append (var_superEntityName_2384, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
                }
              }
            }
            {
            var_arrowList_1995.setter_append (GALGAS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2384, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_2788 (var_propertyMap_2321, EnumerationOrder::up) ;
        while (enumerator_2788.hasCurrentObject ()) {
          switch (enumerator_2788.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_3056 = (const cEnumAssociatedValues_propertyKind_property *) (enumerator_2788.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_2856_type = extractPtr_3056->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2862_accessibility = extractPtr_3056->mAssociatedValue1 ;
              switch (extractedValue_2862_accessibility.enumValue ()) {
              case GALGAS_propertyAccessibility::kNotBuilt:
                break ;
              case GALGAS_propertyAccessibility::kEnum_stored:
                {
                  var_node_2150.plusAssign_operation(GALGAS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2856_type, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
                }
                break ;
              case GALGAS_propertyAccessibility::kEnum_transient:
                {
                }
                break ;
              case GALGAS_propertyAccessibility::kEnum_computed:
                {
                }
                break ;
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4512 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_2788.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3159_typeName = extractPtr_4512->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_3192_accessibility = extractPtr_4512->mAssociatedValue1 ;
              const GALGAS_toManyRelationshipOptionAST extractedValue_3210_optionKind = extractPtr_4512->mAssociatedValue3 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_3192_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  var_node_2150.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3210_optionKind.enumValue ()) {
                  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
                    {
                      enumGalgasBool test_7 = kBoolTrue ;
                      if (kBoolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_3159_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (kBoolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GALGAS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                      }
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
                    {
                      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_4121 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (extractedValue_3210_optionKind.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_3749_oppositeName = extractPtr_4121->mAssociatedValue0 ;
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_3159_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GALGAS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3749_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                      }
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
                    {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_3159_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GALGAS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3159_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_5706 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_2788.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4543_typeName = extractPtr_5706->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_4576_accessibility = extractPtr_5706->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_4594_opposite = extractPtr_5706->mAssociatedValue3 ;
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = extractedValue_4576_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_node_2150.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4594_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_4543_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1995.setter_append (GALGAS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                      }
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_5680 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (extractedValue_4594_opposite.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_5218_oppositeName = extractPtr_5680->mAssociatedValue0 ;
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1841.getter_hasKey (extractedValue_4543_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1841.setter_insert (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          }
                          {
                          var_exploreArray_1903.setter_append (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                          }
                        }
                      }
                      enumGalgasBool test_13 = kBoolTrue ;
                      if (kBoolTrue == test_13) {
                        test_13 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_2788.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5218_oppositeName.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_13) {
                          {
                          var_arrowList_1995.setter_append (GALGAS_string ("  ").add_operation (var_entityName_2130, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2788.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4543_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5218_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
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
          enumerator_2788.gotoNextObject () ;
        }
        var_node_2150.plusAssign_operation(GALGAS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        {
        var_nodeList_1963.setter_append (var_node_2150, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
        }
      }
    }
  }
  GALGAS_string var_s_5803 = GALGAS_string ("digraph G {\n") ;
  var_s_5803.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 126)) ;
  var_s_5803.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
  cEnumerator_stringlist enumerator_5924 (var_nodeList_1963, EnumerationOrder::up) ;
  while (enumerator_5924.hasCurrentObject ()) {
    var_s_5803.plusAssign_operation(enumerator_5924.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
    enumerator_5924.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_5981 (var_arrowList_1995, EnumerationOrder::up) ;
  while (enumerator_5981.hasCurrentObject ()) {
    var_s_5803.plusAssign_operation(enumerator_5981.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
    enumerator_5981.gotoNextObject () ;
  }
  var_s_5803.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 134)) ;
  GALGAS_string var_filePath_6053 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)) ;
  GALGAS_string var_temp_6139 = var_filePath_6053.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 136)) ;
  var_temp_6139.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 136)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (const GALGAS_string constinArgument_inSourceFileDirectory,
                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                           const GALGAS_string constinArgument_inRootEntityName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  temp_0.enterElement (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  GALGAS_stringset var_reachableEntityNameSet_6926 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.enterElement (GALGAS_stringlist_2D_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GALGAS_stringlist var_exploreArray_6988 = temp_1 ;
  GALGAS_stringlist temp_2 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 153)) ;
  GALGAS_stringlist var_nodeList_7048 = temp_2 ;
  GALGAS_stringlist temp_3 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 154)) ;
  GALGAS_stringlist var_arrowList_7080 = temp_3 ;
  GALGAS_entityStrongReferenceGraph var_entityStrongReferenceGraph_7129 = GALGAS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_7166 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_7166 = true ;
    while (loop_7166) {
      loop_7166 = GALGAS_bool (ComparisonKind::greaterThan, var_exploreArray_6988.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_7166) {
        loop_7166 = GALGAS_bool (ComparisonKind::greaterThan, var_exploreArray_6988.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_7166 && (0 == variant_7166)) {
        loop_7166 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_7166) {
        variant_7166 -- ;
        GALGAS_string var_entityName_7284 ;
        {
        var_exploreArray_6988.setter_popLast (var_entityName_7284, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        {
        var_nodeList_7048.setter_append (var_entityName_7284, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        }
        {
        var_entityStrongReferenceGraph_7129.setter_addNode (GALGAS_lstring::init_21__21_ (var_entityName_7284, GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 159)), inCompiler COMMA_HERE), var_entityName_7284, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GALGAS_classKind var_entityKind_7484 ;
        GALGAS_propertyMap var_propertyMap_7514 ;
        GALGAS_actionMap joker_7527_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_7527_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7284.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7484, var_propertyMap_7514, joker_7527_2, joker_7527_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GALGAS_string var_superEntityName_7577 ;
        GALGAS_bool joker_7594_3 ; // Joker input parameter
        GALGAS_bool joker_7594_2 ; // Joker input parameter
        GALGAS_bool joker_7594_1 ; // Joker input parameter
        var_entityKind_7484.method_entity (var_superEntityName_7577, joker_7594_3, joker_7594_2, joker_7594_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::notEqual, var_superEntityName_7577.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6926.getter_hasKey (var_superEntityName_7577 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_reachableEntityNameSet_6926.setter_insert (var_superEntityName_7577, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                }
                {
                var_exploreArray_6988.setter_append (var_superEntityName_7577, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
                }
              }
            }
            {
            var_arrowList_7080.setter_append (var_superEntityName_7577.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7284, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GALGAS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            }
            {
            var_entityStrongReferenceGraph_7129.setter_addEdge (GALGAS_lstring::init_21__21_ (var_superEntityName_7577, GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (var_entityName_7284, GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_8063 (var_propertyMap_7514, EnumerationOrder::up) ;
        while (enumerator_8063.hasCurrentObject ()) {
          switch (enumerator_8063.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8730 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_8063.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8237_typeName = extractPtr_8730->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8270_accessibility = extractPtr_8730->mAssociatedValue1 ;
              {
              var_arrowList_7080.setter_append (var_entityName_7284.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8237_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              }
              {
              var_entityStrongReferenceGraph_7129.setter_addEdge (GALGAS_lstring::init_21__21_ (var_entityName_7284, GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (extractedValue_8237_typeName.readProperty_string (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_8270_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6926.getter_hasKey (extractedValue_8237_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 179)).operator_not (SOURCE_FILE ("graphviz.ggs", 179)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6926.setter_insert (extractedValue_8237_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 180)) ;
                      }
                      {
                      var_exploreArray_6988.setter_append (extractedValue_8237_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 181)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_9654 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_8063.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8761_typeName = extractPtr_9654->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8794_accessibility = extractPtr_9654->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_8812_opposite = extractPtr_9654->mAssociatedValue3 ;
              const GALGAS_bool extractedValue_8822_weak = extractPtr_9654->mAssociatedValue4 ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = extractedValue_8822_weak.operator_not (SOURCE_FILE ("graphviz.ggs", 185)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  {
                  var_arrowList_7080.setter_append (var_entityName_7284.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (extractedValue_8761_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_7129.setter_addEdge (GALGAS_lstring::init_21__21_ (var_entityName_7284, GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (extractedValue_8761_typeName.readProperty_string (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 187)) ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = extractedValue_8794_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 189)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  switch (extractedValue_8812_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6926.getter_hasKey (extractedValue_8761_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 192)).operator_not (SOURCE_FILE ("graphviz.ggs", 192)).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6926.setter_insert (extractedValue_8761_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 193)) ;
                          }
                          {
                          var_exploreArray_6988.setter_append (extractedValue_8761_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 194)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6926.getter_hasKey (extractedValue_8761_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 198)).operator_not (SOURCE_FILE ("graphviz.ggs", 198)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6926.setter_insert (extractedValue_8761_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 199)) ;
                          }
                          {
                          var_exploreArray_6988.setter_append (extractedValue_8761_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 200)) ;
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
          enumerator_8063.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_string var_s_9704 = GALGAS_string ("digraph G {\n") ;
  var_s_9704.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
  var_s_9704.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
  cEnumerator_stringlist enumerator_9825 (var_nodeList_7048, EnumerationOrder::up) ;
  while (enumerator_9825.hasCurrentObject ()) {
    var_s_9704.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9825.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 212)) ;
    enumerator_9825.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_9889 (var_arrowList_7080, EnumerationOrder::up) ;
  while (enumerator_9889.hasCurrentObject ()) {
    var_s_9704.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9889.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 215)) ;
    enumerator_9889.gotoNextObject () ;
  }
  var_s_9704.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 217)) ;
  GALGAS_string var_filePath_9968 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)) ;
  GALGAS_string var_temp_10055 = var_filePath_9968.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_temp_10055.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  GALGAS_bool joker_10177 ; // Joker input parameter
  var_s_9704.method_writeToFileWhenDifferentContents (var_filePath_9968, joker_10177, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  var_filePath_9968 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
  GALGAS_string var_temp_32__10291 = var_entityStrongReferenceGraph_7129.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 223)) ;
  GALGAS_bool joker_10387 ; // Joker input parameter
  var_temp_32__10291.method_writeToFileWhenDifferentContents (var_filePath_9968, joker_10387, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 223)) ;
  GALGAS_stringlist var_undefinedNodeList_10429 = var_entityStrongReferenceGraph_7129.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 225)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_10429.getter_count (SOURCE_FILE ("graphviz.ggs", 226)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_string var_s_10543 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)).add_operation (GALGAS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
      cEnumerator_stringlist enumerator_10634 (var_undefinedNodeList_10429, EnumerationOrder::up) ;
      while (enumerator_10634.hasCurrentObject ()) {
        var_s_10543.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_10634.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
        enumerator_10634.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 231)), var_s_10543, fixItArray13  COMMA_SOURCE_FILE ("graphviz.ggs", 231)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (ComparisonKind::equal, var_undefinedNodeList_10429.getter_count (SOURCE_FILE ("graphviz.ggs", 234)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_lstringlist temp_15 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      temp_15.enterElement (GALGAS_lstringlist_2D_element::init_21_ (GALGAS_lstring::init_21__21_ (constinArgument_inRootEntityName, GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 236)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GALGAS_stringset temp_16 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GALGAS_lstringlist var_accessibleNodeList_10800 = var_entityStrongReferenceGraph_7129.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 235)) ;
      GALGAS_stringset var_accessibleNodeSet_10933 = GALGAS_stringset::class_func_setWithLStringList (var_accessibleNodeList_10800  COMMA_SOURCE_FILE ("graphviz.ggs", 237)) ;
      cEnumerator_stringlist enumerator_11013 (var_nodeList_7048, EnumerationOrder::up) ;
      while (enumerator_11013.hasCurrentObject ()) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10933.getter_hasKey (enumerator_11013.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 239)).operator_not (SOURCE_FILE ("graphviz.ggs", 239)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 240)), enumerator_11013.current_mValue (HERE).add_operation (GALGAS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 240)) ;
          }
        }
        enumerator_11013.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (ComparisonKind::equal, var_undefinedNodeList_10429.getter_count (SOURCE_FILE ("graphviz.ggs", 245)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_lstringlist var_unsortedNodeList_11349 ;
      GALGAS_stringlist joker_11327 ; // Joker input parameter
      var_entityStrongReferenceGraph_7129.method_circularities (joker_11327, var_unsortedNodeList_11349 COMMA_SOURCE_FILE ("graphviz.ggs", 246)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_11349.getter_count (SOURCE_FILE ("graphviz.ggs", 247)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_20) {
          GALGAS_string var_s_11416 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (GALGAS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (var_unsortedNodeList_11349.getter_count (SOURCE_FILE ("graphviz.ggs", 248)).getter_string (SOURCE_FILE ("graphviz.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)) ;
          var_s_11416.plusAssign_operation(GALGAS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 249)) ;
          cEnumerator_lstringlist enumerator_11559 (var_unsortedNodeList_11349, EnumerationOrder::up) ;
          while (enumerator_11559.hasCurrentObject ()) {
            var_s_11416.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_11559.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 251)) ;
            enumerator_11559.gotoNextObject () ;
          }
          TC_Array <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 253)), var_s_11416, fixItArray21  COMMA_SOURCE_FILE ("graphviz.ggs", 253)) ;
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

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GALGAS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 63)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_5 = this ;
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

GALGAS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_2 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_3 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_6 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_7 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_8 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_9 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_10 = this ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 239)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 237)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_hasRunAction_8881 ;
    GALGAS_bool var_handlesTableValueBinding_8906 ;
    GALGAS_bool var_hasEnabled_8943 ;
    GALGAS_bool var_hasHidden_8966 ;
    GALGAS_bool var_handlesGraphicControllerBinding_8988 ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GALGAS_lstring joker_8866 ; // Joker input parameter
    GALGAS_bool joker_9027_3 ; // Joker input parameter
    GALGAS_autoLayoutClassParameterList joker_9027_2 ; // Joker input parameter
    GALGAS_astAutoLayoutViewFunctionMap joker_9027_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8866, var_hasRunAction_8881, var_handlesTableValueBinding_8906, var_hasEnabled_8943, var_hasHidden_8966, var_handlesGraphicControllerBinding_8988, joker_9027_3, joker_9027_2, joker_9027_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 250)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8881 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 261)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8906 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 264)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8943 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 267)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8966 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        TC_Array <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 270)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8988 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 272)).boolEnum () ;
      if (kBoolTrue == test_28) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        TC_Array <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 273)) ;
      }
    }
    {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_32 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_33 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_34 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_35 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_36 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_37 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_38 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_39 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_40 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_41 = this ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8881 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8906 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8943 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8966 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8988 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 276)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                             const GALGAS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3888 (constinArgument_inBindingSpecificationListMap, EnumerationOrder::up) ;
  while (enumerator_3888.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList temp_0 = GALGAS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 98)) ;
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3989 = temp_0 ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4055 (enumerator_3888.current_mOutletClassBindingSpecificationModelList (HERE), EnumerationOrder::up) ;
    while (enumerator_4055.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_4055.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_enumConstantMap temp_2 = GALGAS_enumConstantMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)) ;
          GALGAS_enumFuncMap temp_3 = GALGAS_enumFuncMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)) ;
          var_outletBindingSpecificationModelList_3989.setter_append (GALGAS_typeKind::class_func_enumType (GALGAS_string::makeEmptyString (), temp_2, temp_3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)), enumerator_4055.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_classKind var_classKind_4468 ;
        GALGAS_propertyMap joker_4479_3 ; // Joker input parameter
        GALGAS_actionMap joker_4479_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4479_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4055.current_mModelTypeName (HERE), var_classKind_4468, joker_4479_3, joker_4479_2, joker_4479_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 106)) ;
        GALGAS_typeKind var_typeKind_4506 ;
        switch (var_classKind_4468.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4055.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 110)) ;
            var_typeKind_4506.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_4706 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4468.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_4677_kind = extractPtr_4706->mAssociatedValue0 ;
            var_typeKind_4506 = extractedValue_4677_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_4055.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4506.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_4055.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
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
    GALGAS_controllerBindingOptionDecoratedList temp_7 = GALGAS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5108 = temp_7 ;
    cEnumerator_controllerBindingOptionList enumerator_5172 (enumerator_3888.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
    while (enumerator_5172.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5292 ;
      GALGAS_propertyMap joker_5303_3 ; // Joker input parameter
      GALGAS_actionMap joker_5303_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5303_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5172.current_mOptionTypeName (HERE), var_classKind_5292, joker_5303_3, joker_5303_2, joker_5303_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 123)) ;
      GALGAS_typeKind var_typeKind_5328 ;
      switch (var_classKind_5292.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5172.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 127)) ;
          var_typeKind_5328.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5519 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5292.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_5492_kind = extractPtr_5519->mAssociatedValue0 ;
          var_typeKind_5328 = extractedValue_5492_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5172.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5328.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_5172.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
          var_typeKind_5328.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_5108.setter_append (var_typeKind_5328, enumerator_5172.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 135)) ;
      }
      enumerator_5172.gotoNextObject () ;
    }
    GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_5913 ;
    GALGAS_lstring var_outletSuperClassName_5941 ;
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
      GALGAS_autoLayoutViewBindingSpecificationMap temp_12 = GALGAS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 143)) ;
      var_bindingMap_5913 = temp_12 ;
      GALGAS_bool joker_6317_8 ; // Joker input parameter
      GALGAS_bool joker_6317_7 ; // Joker input parameter
      GALGAS_bool joker_6317_6 ; // Joker input parameter
      GALGAS_bool joker_6317_5 ; // Joker input parameter
      GALGAS_bool joker_6317_4 ; // Joker input parameter
      GALGAS_bool joker_6317_3 ; // Joker input parameter
      GALGAS_autoLayoutClassParameterList joker_6317_2 ; // Joker input parameter
      GALGAS_astAutoLayoutViewFunctionMap joker_6317_1 ; // Joker input parameter
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

void cPtr_astComputedHorizontalViewDeclaration::method_checkView (const GALGAS_string /* constinArgument_inViewName */,
                                                                  const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                  const GALGAS_bool constinArgument_inPreferences,
                                                                  const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                  const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                  const GALGAS_actionMap constinArgument_inActionMap,
                                                                  const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                  const GALGAS_classMap constinArgument_inClassMap,
                                                                  GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                  GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                  GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                  GALGAS_abstractViewGeneration & outArgument_outGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_29430 ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_29430, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 668)) ;
  GALGAS_autoLayoutViewInstructionGenerationList temp_1 = GALGAS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 684)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_29494 = temp_1 ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_2 = this ;
  cEnumerator_astViewInstructionList enumerator_29522 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_29522.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_29950 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_29522.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_29950, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 686)) ;
    {
    var_instructionList_29494.setter_append (var_generatedInstruction_29950, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 701)) ;
    }
    enumerator_29522.gotoNextObject () ;
  }
  const GALGAS_astComputedHorizontalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GALGAS_computedHorizontalViewGeneration::init_21__21__21_ (var_funcCallList_29430, var_instructionList_29494, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedVerticalViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::method_checkView (const GALGAS_string /* constinArgument_inViewName */,
                                                                const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                const GALGAS_bool constinArgument_inPreferences,
                                                                const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                const GALGAS_actionMap constinArgument_inActionMap,
                                                                const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                const GALGAS_classMap constinArgument_inClassMap,
                                                                GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                GALGAS_abstractViewGeneration & outArgument_outGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList temp_0 = GALGAS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 723)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_31447 = temp_0 ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_31954 ;
  const GALGAS_astComputedVerticalViewDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_31954, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 724)) ;
  const GALGAS_astComputedVerticalViewDeclaration temp_2 = this ;
  cEnumerator_astViewInstructionList enumerator_31978 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_31978.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_32405 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_31978.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_32405, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 741)) ;
    {
    var_instructionList_31447.setter_append (var_generatedInstruction_32405, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 756)) ;
    }
    enumerator_31978.gotoNextObject () ;
  }
  const GALGAS_astComputedVerticalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GALGAS_computedVerticalViewGeneration::init_21__21__21_ (var_funcCallList_31954, var_instructionList_31447, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSpaceViewInstruction generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GALGAS_bool /* constinArgument_inPreferences */,
                                                            const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                            const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GALGAS_classMap /* constinArgument_inClassMap */,
                                                            GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GALGAS_autoLayoutSpaceViewInstructionGeneration::init (inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSeparatorInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                       const GALGAS_bool /* constinArgument_inPreferences */,
                                                                       const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                       const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                       const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                       const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                                       const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                       const GALGAS_classMap /* constinArgument_inClassMap */,
                                                                       GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                       GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                       GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                       GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_astSeparatorInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutSeparatorInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astDividerInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                     const GALGAS_bool /* constinArgument_inPreferences */,
                                                                     const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                     const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                     const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                     const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                                     const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                     const GALGAS_classMap /* constinArgument_inClassMap */,
                                                                     GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                     GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                     GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                     GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_astDividerInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutDividerInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astLocalViewInstruction generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GALGAS_bool /* constinArgument_inPreferences */,
                                                            const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                            const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GALGAS_classMap /* constinArgument_inClassMap */,
                                                            GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_astLocalViewInstruction temp_0 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutLocalViewInstructionGeneration::init_21_ (temp_0.readProperty_mLocalView ().readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedViewInstruction generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                               const GALGAS_bool constinArgument_inPreferences,
                                                               const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                               const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                               const GALGAS_actionMap constinArgument_inActionMap,
                                                               const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                               const GALGAS_classMap constinArgument_inClassMap,
                                                               GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                               GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                               GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                               GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList var_formalParameterList_40398 ;
  GALGAS_astAutoLayoutViewFunctionMap var_functionMap_40429 ;
  const GALGAS_astComputedViewInstruction temp_0 = this ;
  GALGAS_lstring joker_40383_7 ; // Joker input parameter
  GALGAS_bool joker_40383_6 ; // Joker input parameter
  GALGAS_bool joker_40383_5 ; // Joker input parameter
  GALGAS_bool joker_40383_4 ; // Joker input parameter
  GALGAS_bool joker_40383_3 ; // Joker input parameter
  GALGAS_bool joker_40383_2 ; // Joker input parameter
  GALGAS_bool joker_40383_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_40383_7, joker_40383_6, joker_40383_5, joker_40383_4, joker_40383_3, joker_40383_2, joker_40383_1, var_formalParameterList_40398, var_functionMap_40429, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 870)) ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList temp_1 = GALGAS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 876)) ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList var_parameterList_40501 = temp_1 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_astComputedViewInstruction temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_formalParameterList_40398.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 877)).objectCompare (temp_3.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 877)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_astComputedViewInstruction temp_4 = this ;
      const GALGAS_astComputedViewInstruction temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_40398.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 879)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 879)).add_operation (GALGAS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 879)).add_operation (temp_5.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 879)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 879)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 879)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 879)), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 878)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_astComputedViewInstruction temp_7 = this ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_40765 (temp_7.readProperty_mParameterList (), EnumerationOrder::up) ;
    cEnumerator_autoLayoutClassParameterList enumerator_40809 (var_formalParameterList_40398, EnumerationOrder::up) ;
    while (enumerator_40765.hasCurrentObject () && enumerator_40809.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        GALGAS_lstring var_enumTypeName_40892 ;
        const bool optionalResult40872 = enumerator_40809.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_40892) ;
        if (!optionalResult40872) {
          test_8 = kBoolFalse ;
        }
        if (kBoolTrue == test_8) {
          GALGAS_lstring var_constantName_40937 ;
          const bool optionalResult40917 = enumerator_40765.current_mParameterType (HERE).optional_typeEnum (var_constantName_40937) ;
          if (!optionalResult40917) {
            test_8 = kBoolFalse ;
          }
          if (kBoolTrue == test_8) {
            GALGAS_classKind var_typeKind_41005 ;
            GALGAS_propertyMap joker_41015_3 ; // Joker input parameter
            GALGAS_actionMap joker_41015_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_41015_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_enumTypeName_40892, var_typeKind_41005, joker_41015_3, joker_41015_2, joker_41015_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)) ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              GALGAS_typeKind var_classKind_41063 ;
              const bool optionalResult41045 = var_typeKind_41005.optional_atomic (var_classKind_41063) ;
              if (!optionalResult41045) {
                test_9 = kBoolFalse ;
              }
              if (kBoolTrue == test_9) {
                GALGAS_string var_unused_0_41101 ;
                GALGAS_enumConstantMap var_constantMap_41121 ;
                GALGAS_enumFuncMap var_unused_0_41135 ;
                const bool optionalResult41090 = var_classKind_41063.optional_enumType (var_unused_0_41101, var_constantMap_41121, var_unused_0_41135) ;
                if (!optionalResult41090) {
                  test_9 = kBoolFalse ;
                }
                if (kBoolTrue == test_9) {
                  GALGAS_uint joker_41190 ; // Joker input parameter
                  var_constantMap_41121.method_searchKey (var_constantName_40937, joker_41190, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 885)) ;
                }
              }
            }
            if (kBoolFalse == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_enumTypeName_40892.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 887)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GALGAS_bool (ComparisonKind::notEqual, enumerator_40765.current_mParameterType (HERE).objectCompare (enumerator_40809.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_40765.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_40809.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)).add_operation (extensionGetter_string (enumerator_40765.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)) ;
          }
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, enumerator_40765.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_40809.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_40765.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the parameter name should be '").add_operation (enumerator_40809.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 893)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 893)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 893)) ;
        }
      }
      switch (enumerator_40765.current_mParameter (HERE).enumValue ()) {
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kNotBuilt:
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_viewFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * extractPtr_42345 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) (enumerator_40765.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_astAbstractViewInstructionDeclaration extractedValue_41601_instruction = extractPtr_42345->mAssociatedValue0 ;
          GALGAS_abstractViewInstructionGeneration var_viewInstruction_42123 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_41601_instruction.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_42123, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 897)) ;
          {
          var_parameterList_40501.setter_append (enumerator_40765.current_mParameterName (HERE).readProperty_string (), GALGAS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 912)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 912)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)) ;
          }
          {
          ioArgument_ioImplicitViewFunctionGenerationList.setter_append (var_viewInstruction_42123, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 913)) ;
          }
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_entity:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * extractPtr_42616 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) (enumerator_40765.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_42366_entityName = extractPtr_42616->mAssociatedValue0 ;
          GALGAS_classKind var_classKind_42427 ;
          GALGAS_propertyMap joker_42438_3 ; // Joker input parameter
          GALGAS_actionMap joker_42438_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_42438_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_42366_entityName, var_classKind_42427, joker_42438_3, joker_42438_2, joker_42438_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 915)) ;
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = var_classKind_42427.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 916)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 916)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_42366_entityName.readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 917)) ;
            }
          }
          {
          var_parameterList_40501.setter_append (enumerator_40765.current_mParameterName (HERE).readProperty_string (), extractedValue_42366_entityName.readProperty_string ().add_operation (GALGAS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 919)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 919)) ;
          }
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_string:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * extractPtr_42701 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) (enumerator_40765.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42637_stringValue = extractPtr_42701->mAssociatedValue0 ;
          {
          var_parameterList_40501.setter_append (enumerator_40765.current_mParameterName (HERE).readProperty_string (), extractedValue_42637_stringValue, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 921)) ;
          }
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_menuItem:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * extractPtr_44051 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) (enumerator_40765.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42724_title = extractPtr_44051->mAssociatedValue0 ;
          const GALGAS_runActionDescriptor extractedValue_42731_run = extractPtr_44051->mAssociatedValue1 ;
          const GALGAS_multipleBindingDescriptor extractedValue_42736_enabledBinding = extractPtr_44051->mAssociatedValue2 ;
          GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_43038 ;
          {
          routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__21_ (extractedValue_42731_run, GALGAS_bool (true), constinArgument_inPreferences, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 927)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_43038, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 923)) ;
          }
          GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_43374 ;
          {
          routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_42736_enabledBinding, GALGAS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_43374, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 933)) ;
          }
          GALGAS_string var_s_43421 = GALGAS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_42724_title.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 943)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 943)) ;
          switch (var_runBindingGeneration_43038.enumValue ()) {
          case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
            {
              var_s_43421.plusAssign_operation(GALGAS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 946)) ;
            }
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
            {
              const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_43760 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (var_runBindingGeneration_43038.unsafePointer ()) ;
              const GALGAS_string extractedValue_43613_targetName = extractPtr_43760->mAssociatedValue0 ;
              const GALGAS_string extractedValue_43625_actionName = extractPtr_43760->mAssociatedValue1 ;
              const GALGAS_string extractedValue_43637_runTargetName = extractPtr_43760->mAssociatedValue2 ;
              var_s_43421.plusAssign_operation(GALGAS_string (", target: ").add_operation (extractedValue_43613_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (GALGAS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (extractedValue_43637_runTargetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (extractedValue_43625_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)).add_operation (GALGAS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 948)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_43374.enumValue ()) {
          case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
            {
              var_s_43421.plusAssign_operation(GALGAS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 952)) ;
            }
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
            {
              const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_43966 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_43374.unsafePointer ()) ;
              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_43910_binding = extractPtr_43966->mAssociatedValue0 ;
              var_s_43421.plusAssign_operation(GALGAS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_43910_binding.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)) ;
            }
            break ;
          }
          var_s_43421.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 956)) ;
          {
          var_parameterList_40501.setter_append (enumerator_40765.current_mParameterName (HERE).readProperty_string (), var_s_43421, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 957)) ;
          }
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_enumFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * extractPtr_44665 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) (enumerator_40765.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_44074_enumTypeName = extractPtr_44665->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_44088_funcName = extractPtr_44665->mAssociatedValue1 ;
          GALGAS_classKind var_type_44166 ;
          GALGAS_propertyMap joker_44172_3 ; // Joker input parameter
          GALGAS_actionMap joker_44172_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_44172_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_44074_enumTypeName, var_type_44166, joker_44172_3, joker_44172_2, joker_44172_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 959)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = var_type_44166.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 960)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 960)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_44074_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 961)) ;
            }
          }
          if (kBoolFalse == test_17) {
            GALGAS_typeKind var_typeKind_44323 ;
            var_type_44166.method_atomic (var_typeKind_44323, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 963)) ;
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = var_typeKind_44323.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 964)).boolEnum () ;
              if (kBoolTrue == test_19) {
                GALGAS_enumFuncMap var_funcMap_44420 ;
                GALGAS_string joker_44402_2 ; // Joker input parameter
                GALGAS_enumConstantMap joker_44402_1 ; // Joker input parameter
                var_typeKind_44323.method_enumType (joker_44402_2, joker_44402_1, var_funcMap_44420, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 965)) ;
                GALGAS_enumFunAssociationSortedList joker_44470 ; // Joker input parameter
                var_funcMap_44420.method_searchKey (extractedValue_44088_funcName, joker_44470, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 966)) ;
              }
            }
            if (kBoolFalse == test_19) {
              TC_Array <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_44074_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 968)) ;
            }
          }
          {
          var_parameterList_40501.setter_append (enumerator_40765.current_mParameterName (HERE).readProperty_string (), extractedValue_44074_enumTypeName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)).add_operation (extractedValue_44088_funcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 971)) ;
          }
        }
        break ;
      }
      enumerator_40765.gotoNextObject () ;
      enumerator_40809.gotoNextObject () ;
    }
  }
  GALGAS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_45198 ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_45279 ;
  GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_45354 ;
  GALGAS_string var_inTableViewBindingGeneration_45393 ;
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_45482 ;
  {
  const GALGAS_astComputedViewInstruction temp_21 = this ;
  const GALGAS_astComputedViewInstruction temp_22 = this ;
  const GALGAS_astComputedViewInstruction temp_23 = this ;
  const GALGAS_astComputedViewInstruction temp_24 = this ;
  const GALGAS_astComputedViewInstruction temp_25 = this ;
  const GALGAS_astComputedViewInstruction temp_26 = this ;
  const GALGAS_astComputedViewInstruction temp_27 = this ;
  routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_21.readProperty_mAutoLayoutViewClassName (), temp_22.readProperty_mTableValueBinding (), temp_23.readProperty_mRunActionDescriptor (), temp_24.readProperty_mEnabledBindingDescriptor (), temp_25.readProperty_mHiddenBindingDescriptor (), temp_26.readProperty_mGraphicController (), temp_27.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_45198, var_multipleBindingGenerationList_45279, var_runBindingGeneration_45354, var_inTableViewBindingGeneration_45393, var_ebViewGraphicControllerBindingGeneration_45482, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 976)) ;
  }
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_45978 ;
  const GALGAS_astComputedViewInstruction temp_28 = this ;
  extensionMethod_checkViewFunctionCallList (temp_28.readProperty_mFunctionCallList (), var_functionMap_40429, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_45978, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1000)) ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    const GALGAS_astComputedViewInstruction temp_30 = this ;
    test_29 = GALGAS_bool (ComparisonKind::notEqual, temp_30.readProperty_mOutletName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_29) {
      {
      const GALGAS_astComputedViewInstruction temp_31 = this ;
      const GALGAS_astComputedViewInstruction temp_32 = this ;
      const GALGAS_astComputedViewInstruction temp_33 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_31.readProperty_mOutletName (), temp_32.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_33.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1018)) ;
      }
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GALGAS_astComputedViewInstruction temp_35 = this ;
    test_34 = GALGAS_bool (ComparisonKind::notEqual, temp_35.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_34) {
      {
      const GALGAS_astComputedViewInstruction temp_36 = this ;
      const GALGAS_astComputedViewInstruction temp_37 = this ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_36.readProperty_mConfiguratorName (), temp_37.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1022)) ;
      }
    }
  }
  const GALGAS_astComputedViewInstruction temp_38 = this ;
  const GALGAS_astComputedViewInstruction temp_39 = this ;
  const GALGAS_astComputedViewInstruction temp_40 = this ;
  const GALGAS_astComputedViewInstruction temp_41 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutComputedViewInstructionGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_38.readProperty_mAutoLayoutViewClassName (), var_parameterList_40501, var_funcCallList_45978, var_regularBindingsGenerationList_45198, var_multipleBindingGenerationList_45279, var_runBindingGeneration_45354, var_inTableViewBindingGeneration_45393, var_ebViewGraphicControllerBindingGeneration_45482, temp_39.readProperty_mConfiguratorName ().readProperty_string (), temp_40.readProperty_mOutletName ().readProperty_string (), temp_41.readProperty_mOutletIsArray (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding??????????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GALGAS_bool constinArgument_inPreferences,
                                                                                                                   const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                   const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                                   const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                                   const GALGAS_actionMap constinArgument_inActionMap,
                                                                                                                   const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                                                                   const GALGAS_lstring constinArgument_inTypeName,
                                                                                                                   const GALGAS_tableValueBinding constinArgument_inTableValueBinding,
                                                                                                                   const GALGAS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                                                   const GALGAS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                                   const GALGAS_multipleBindingDescriptor constinArgument_inHiddenBindingDescriptor,
                                                                                                                   const GALGAS_graphicController constinArgument_inGraphicController,
                                                                                                                   const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                                                                                                   GALGAS_autoLayoutRegularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                                                   GALGAS_autoLayoutMultipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                                                   GALGAS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                                                   GALGAS_string & outArgument_outTableViewBindingGeneration,
                                                                                                                   GALGAS_autoLayoutViewGraphicControllerBindingGeneration & outArgument_outEBViewGraphicControllerBindingGeneration,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGeneration.drop () ; // Release 'out' argument
  GALGAS_autoLayoutRegularBindingsGenerationList temp_0 = GALGAS_autoLayoutRegularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1065)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GALGAS_autoLayoutMultipleBindingGenerationList temp_1 = GALGAS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1066)) ;
  outArgument_outMultipleBindingGenerationList = temp_1 ;
  outArgument_outTableViewBindingGeneration = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_handlesRunAction_48113 ;
  GALGAS_bool var_handlesTableViewBinding_48146 ;
  GALGAS_bool var_handlesEnabledBinding_48186 ;
  GALGAS_bool var_handlesHiddenBinding_48224 ;
  GALGAS_bool var_handleGraphicControllerBinding_48261 ;
  GALGAS_lstring joker_48094 ; // Joker input parameter
  GALGAS_bool joker_48297_3 ; // Joker input parameter
  GALGAS_autoLayoutClassParameterList joker_48297_2 ; // Joker input parameter
  GALGAS_astAutoLayoutViewFunctionMap joker_48297_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_48094, var_handlesRunAction_48113, var_handlesTableViewBinding_48146, var_handlesEnabledBinding_48186, var_handlesHiddenBinding_48224, var_handleGraphicControllerBinding_48261, joker_48297_3, joker_48297_2, joker_48297_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1068)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1079)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GALGAS_graphicController::kNotBuilt:
    break ;
  case GALGAS_graphicController::kEnum_none:
    {
    }
    break ;
  case GALGAS_graphicController::kEnum_defined:
    {
      const cEnumAssociatedValues_graphicController_defined * extractPtr_50577 = (const cEnumAssociatedValues_graphicController_defined *) (constinArgument_inGraphicController.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_48451_controllerName = extractPtr_50577->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_48476_propertyName = extractPtr_50577->mAssociatedValue1 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_handleGraphicControllerBinding_48261.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1083)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1084)) ;
        }
      }
      if (kBoolFalse == test_2) {
        GALGAS_propertyKind var_kind_48744 ;
        GALGAS_actionMap joker_48758_2 ; // Joker input parameter
        GALGAS_bool joker_48758_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_48451_controllerName, var_kind_48744, joker_48758_2, joker_48758_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1086)) ;
        switch (var_kind_48744.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1093)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1097)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_50326 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_48744.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_49130_entityName = extractPtr_50326->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_49142_graphic = extractPtr_50326->mAssociatedValue1 ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (ComparisonKind::equal, extractedValue_48476_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = extractedValue_49142_graphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1100)).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    TC_Array <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_49130_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1101)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1101)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1101)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_7) {
              GALGAS_propertyMap var_observablePropertyMap_49465 ;
              GALGAS_classKind joker_49444 ; // Joker input parameter
              GALGAS_actionMap joker_49500_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_49500_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_49130_entityName, joker_49444, var_observablePropertyMap_49465, joker_49500_2, joker_49500_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1104)) ;
              GALGAS_propertyKind var_propertyKind_49578 ;
              GALGAS_actionMap joker_49592_2 ; // Joker input parameter
              GALGAS_bool joker_49592_1 ; // Joker input parameter
              var_observablePropertyMap_49465.method_searchKey (extractedValue_48476_propertyName, var_propertyKind_49578, joker_49592_2, joker_49592_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)) ;
              switch (var_propertyKind_49578.enumValue ()) {
              case GALGAS_propertyKind::kNotBuilt:
                break ;
              case GALGAS_propertyKind::kEnum_property:
                {
                  TC_Array <FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1113)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_toMany:
                {
                  const cEnumAssociatedValues_propertyKind_toMany * extractPtr_49951 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_49578.unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_49763_kEntityName = extractPtr_49951->mAssociatedValue0 ;
                  const GALGAS_bool extractedValue_49779_isGraphic = extractPtr_49951->mAssociatedValue2 ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = extractedValue_49779_isGraphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1115)).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      TC_Array <FixItDescription> fixItArray12 ;
                      inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_49763_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1116)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1116)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1116)) ;
                    }
                  }
                }
                break ;
              case GALGAS_propertyKind::kEnum_toOne:
                {
                  TC_Array <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1119)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_arrayController:
                {
                  TC_Array <FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1121)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_selectionController:
                {
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1123)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_48451_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1127)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (extractedValue_48451_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1129)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inTableValueBinding.enumValue ()) {
  case GALGAS_tableValueBinding::kNotBuilt:
    break ;
  case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
    {
    }
    break ;
  case GALGAS_tableValueBinding::kEnum_tableValueBinding:
    {
      const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_51509 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (constinArgument_inTableValueBinding.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_50696_controllerName = extractPtr_51509->mAssociatedValue0 ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_handlesTableViewBinding_48146.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1136)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1137)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1137)), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1137)) ;
        }
      }
      if (kBoolFalse == test_17) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_19) {
            GALGAS_propertyKind var_kind_50972 ;
            GALGAS_actionMap joker_50986_2 ; // Joker input parameter
            GALGAS_bool joker_50986_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_50696_controllerName, var_kind_50972, joker_50986_2, joker_50986_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1139)) ;
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = var_kind_50972.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1144)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1144)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_50696_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1145)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_50696_controllerName.readProperty_string () ;
          }
        }
        if (kBoolFalse == test_19) {
          GALGAS_propertyKind var_kind_51289 ;
          GALGAS_actionMap joker_51303_2 ; // Joker input parameter
          GALGAS_bool joker_51303_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50696_controllerName, var_kind_51289, joker_51303_2, joker_51303_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1149)) ;
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = var_kind_51289.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1154)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1154)).boolEnum () ;
            if (kBoolTrue == test_22) {
              TC_Array <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_50696_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1155)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_50696_controllerName.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__21_ (constinArgument_inRunActionDescriptor, var_handlesRunAction_48113, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1161)) ;
  }
  GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_52065 ;
  {
  routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_48186, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_52065, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1172)) ;
  }
  switch (var_enabledBindingGeneration_52065.enumValue ()) {
  case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
    {
      const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_52234 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_52065.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_52158_binding = extractPtr_52234->mAssociatedValue0 ;
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GALGAS_string ("enabled"), extractedValue_52158_binding, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1185)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inHiddenBindingDescriptor.enumValue ()) {
  case GALGAS_multipleBindingDescriptor::kNotBuilt:
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_binding:
    {
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_53047 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inHiddenBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_52369_expression = extractPtr_53047->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_52653 ;
      GALGAS_typeKind var_type_52692 ;
      GALGAS_location var_errorLocation_52719 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_52369_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_52653, var_type_52692, var_errorLocation_52719, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1191)) ;
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_type_52692.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1201)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1201)).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_52719, GALGAS_string ("expression is not boolean"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1202)) ;
        }
      }
      enumGalgasBool test_26 = kBoolTrue ;
      if (kBoolTrue == test_26) {
        test_26 = var_handlesHiddenBinding_48224.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1204)).boolEnum () ;
        if (kBoolTrue == test_26) {
          TC_Array <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (var_errorLocation_52719, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1205)) ;
        }
      }
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GALGAS_string ("hidden"), var_hiddenExpression_52653, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1207)) ;
      }
    }
    break ;
  }
  {
  GALGAS_string temp_28 ;
  const enumGalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_29) {
    temp_28 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_29) {
    temp_28 = GALGAS_string ("self.") ;
  }
  routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_28, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1213)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const GALGAS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                               const GALGAS_bool constinArgument_inHandlesEnabledBinding,
                                                                                                               const GALGAS_bool constinArgument_inPreferences,
                                                                                                               const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                               const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                               const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                               GALGAS_autolayoutEnabledBindingForGeneration & outArgument_outEnabledBindingGeneration,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnabledBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inEnabledBindingDescriptor.enumValue ()) {
  case GALGAS_multipleBindingDescriptor::kNotBuilt:
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
    {
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1240)) ;
    }
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_binding:
    {
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_54827 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inEnabledBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_54168_expression = extractPtr_54827->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_54452 ;
      GALGAS_typeKind var_type_54491 ;
      GALGAS_location var_errorLocation_54518 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54168_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_54452, var_type_54491, var_errorLocation_54518, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1242)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1252)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_54518, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1253)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_54491.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1255)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1255)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_54518, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1256)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::class_func_enabled (var_enableExpression_54452  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1258)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__21_ (const GALGAS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                          const GALGAS_bool constinArgument_inHandlesRunAction,
                                                                                          const GALGAS_bool constinArgument_inPreferences,
                                                                                          const GALGAS_lstring constinArgument_inTypeName,
                                                                                          const GALGAS_actionMap constinArgument_inActionMap,
                                                                                          const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                          const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                                          GALGAS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GALGAS_runActionDescriptor::kNotBuilt:
    break ;
  case GALGAS_runActionDescriptor::kEnum_noAction:
    {
      outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 1276)) ;
    }
    break ;
  case GALGAS_runActionDescriptor::kEnum_action:
    {
      const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_56319 = (const cEnumAssociatedValues_runActionDescriptor_action *) (constinArgument_inRunActionDescriptor.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_55436_target = extractPtr_56319->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_55453_action = extractPtr_56319->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1278)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1279)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1279)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1279)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, extractedValue_55436_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_55453_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1282)) ;
            outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::class_func_run (GALGAS_string ("self"), extractedValue_55453_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1283)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_actionMap var_controllerActionMap_55980 ;
          GALGAS_propertyKind joker_55952 ; // Joker input parameter
          GALGAS_bool joker_56009 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_55436_target, joker_55952, var_controllerActionMap_55980, joker_56009, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1289)) ;
          var_controllerActionMap_55980.method_searchKey (extractedValue_55453_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1295)) ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("preferences_") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::class_func_run (temp_3.add_operation (extractedValue_55436_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1297)), extractedValue_55453_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299)).add_operation (extractedValue_55436_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1299))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1296)) ;
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

void routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (const GALGAS_bool constinArgument_inPreferences,
                                                                                       const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                                                                       const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                       const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                                       const GALGAS_lstring constinArgument_inOutletTypeName,
                                                                                       const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                                                                       const GALGAS_string constinArgument_inSelfSwiftName,
                                                                                       GALGAS_autoLayoutRegularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_56934 (constinArgument_inRegularBindingList, EnumerationOrder::up) ;
  while (enumerator_56934.hasCurrentObject ()) {
    GALGAS_outletBindingModelList temp_0 = GALGAS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1320)) ;
    GALGAS_outletBindingModelList var_boundModelTypeList_57034 = temp_0 ;
    GALGAS_boundObjectList temp_1 = GALGAS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1321)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_57083 = temp_1 ;
    cEnumerator_observablePropertyList enumerator_57125 (enumerator_56934.current_mObservablePropertyList (HERE), EnumerationOrder::up) ;
    while (enumerator_57125.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_57399 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_57433 ;
      GALGAS_string var_defaultValueAsString_57506 ;
      GALGAS_propertyMap temp_2 ;
      const enumGalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = constinArgument_inPreferencesPropertyMap ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_57125.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_2, var_kind_57399, var_swiftTypeStringForTransientFunctionArgument_57433, var_defaultValueAsString_57506, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1323)) ;
      switch (var_kind_57399.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57125.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1334)), GALGAS_string ("a toMany property cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1334)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57125.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336)), GALGAS_string ("a toOne property cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57125.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1338)), GALGAS_string ("an array controller cannot be bound"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1338)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_57125.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1340)), GALGAS_string ("a selection controller cannot be bound"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1340)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_57083.setter_append (extensionGetter_modelStringForSelf (enumerator_57125.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)), var_kind_57399, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)) ;
      }
      {
      var_boundModelTypeList_57034.setter_append (var_kind_57399, extensionGetter_location (enumerator_57125.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)) ;
      }
      enumerator_57125.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList temp_8 = GALGAS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1346)) ;
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_58304 = temp_8 ;
    GALGAS_controllerBindingOptionDecoratedList temp_9 = GALGAS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1347)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_58391 = temp_9 ;
    GALGAS_lstring var_outletTypeName_58441 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_58483 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1350)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).isValid ()) {
      uint32_t variant_58504 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1350)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).uintValue () ;
      bool loop_58504 = true ;
      while (loop_58504) {
        loop_58504 = GALGAS_bool (ComparisonKind::notEqual, var_outletTypeName_58441.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_58483 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).isValid () ;
        if (loop_58504) {
          loop_58504 = GALGAS_bool (ComparisonKind::notEqual, var_outletTypeName_58441.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_58483 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).boolValue () ;
        }
        if (loop_58504 && (0 == variant_58504)) {
          loop_58504 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1350)) ;
        }
        if (loop_58504) {
          variant_58504 -- ;
          var_continues_58483 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_58746 ;
          GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_58781 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_58441, var_superOutletClassName_58746, var_bindingMap_58781, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1352)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_bindingMap_58781.getter_hasKey (enumerator_56934.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1357)).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_bindingMap_58781.method_searchKey (enumerator_56934.current_mBindingName (HERE), var_outletBindingSpecificationModelList_58304, var_controllerBindingOptionDecoratedList_58391, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1358)) ;
            }
          }
          if (kBoolFalse == test_10) {
            var_continues_58483 = GALGAS_bool (true) ;
            var_outletTypeName_58441 = var_superOutletClassName_58746 ;
          }
        }
      }
    }
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_continues_58483.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_56934.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1369)) ;
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, var_boundModelTypeList_57034.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1370)).objectCompare (var_outletBindingSpecificationModelList_58304.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1370)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_56934.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_58304.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1372)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1372)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1372)).add_operation (var_boundModelTypeList_57034.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1374)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1373)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1373)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1371)) ;
        }
      }
      if (kBoolFalse == test_13) {
        cEnumerator_outletBindingSpecificationModelList enumerator_59500 (var_outletBindingSpecificationModelList_58304, EnumerationOrder::up) ;
        cEnumerator_outletBindingModelList enumerator_59595 (var_boundModelTypeList_57034, EnumerationOrder::up) ;
        while (enumerator_59500.hasCurrentObject () && enumerator_59595.hasCurrentObject ()) {
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            GALGAS_bool test_16 = enumerator_59500.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_isTransient (enumerator_59595.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1377)) ;
            }
            test_15 = test_16.boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_59595.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1378)) ;
            }
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            GALGAS_bool test_19 = enumerator_59500.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1380)) ;
            if (kBoolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_isEnumType (enumerator_59595.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1380)) ;
            }
            test_18 = test_19.boolEnum () ;
            if (kBoolTrue == test_18) {
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_59500.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1381)).objectCompare (extensionGetter_swiftTypeName (enumerator_59595.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1381)))).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_59595.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_59500.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1382)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1382)), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1382)) ;
              }
            }
          }
          enumerator_59500.gotoNextObject () ;
          enumerator_59595.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_60166 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GALGAS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_58391.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1388)).objectCompare (enumerator_56934.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1388)))).boolEnum () ;
      if (kBoolTrue == test_22) {
        GALGAS_string var_s_60292 ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_58391.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1390)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            var_s_60292 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_23) {
          var_s_60292 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_60494 (var_controllerBindingOptionDecoratedList_58391, EnumerationOrder::up) ;
          while (enumerator_60494.hasCurrentObject ()) {
            var_s_60292.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_60494.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)).add_operation (extensionGetter_swiftTypeName (enumerator_60494.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)) ;
            enumerator_60494.gotoNextObject () ;
          }
        }
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_56934.current_mBindingName (HERE).readProperty_location (), var_s_60292, fixItArray24  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1398)) ;
      }
    }
    if (kBoolFalse == test_22) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_60719 (var_controllerBindingOptionDecoratedList_58391, EnumerationOrder::up) ;
      cEnumerator_bindingOptionList enumerator_60806 (enumerator_56934.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
      while (enumerator_60719.hasCurrentObject () && enumerator_60806.hasCurrentObject ()) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = GALGAS_bool (ComparisonKind::notEqual, enumerator_60719.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_60806.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_60806.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_60719.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)) ;
          }
        }
        GALGAS_string var_optionValueAsString_61198 ;
        GALGAS_typeKindList temp_27 = GALGAS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1405)) ;
        temp_27.enterElement (GALGAS_typeKindList_2D_element::init_21_ (enumerator_60719.current_mOptionType (HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1405)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_60806.current_mOptionValue (HERE).ptr (), temp_27, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_61198, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1404)) ;
        var_bindingOptionString_60166.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_60719.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)).add_operation (var_optionValueAsString_61198, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1409)) ;
        enumerator_60719.gotoNextObject () ;
        enumerator_60806.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (enumerator_56934.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_57083, var_bindingOptionString_60166, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1413)) ;
    }
    enumerator_56934.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHStackViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GALGAS_bool constinArgument_inPreferences,
                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GALGAS_actionMap constinArgument_inActionMap,
                                                                        const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GALGAS_classMap constinArgument_inClassMap,
                                                                        GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList temp_0 = GALGAS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1437)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_62634 = temp_0 ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_63141 ;
  const GALGAS_astHStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_63141, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList temp_2 = GALGAS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1454)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_63205 = temp_2 ;
  const GALGAS_astHStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_63895 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_3.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_63313_hiddenBindingExpression = extractPtr_63895->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_63623 ;
      GALGAS_typeKind var_type_63662 ;
      GALGAS_location var_errorLocation_63689 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_63313_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_63623, var_type_63662, var_errorLocation_63689, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1458)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_type_63662.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1468)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1468)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_63689, GALGAS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1469)) ;
        }
      }
      {
      var_multipleBindingGenerationList_63205.setter_append (GALGAS_string ("hidden"), var_hiddenExpression_63623, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1471)) ;
      }
    }
    break ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_6 = this ;
  cEnumerator_astViewInstructionList enumerator_63910 (temp_6.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_63910.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_64337 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_63910.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_64337, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1477)) ;
    {
    var_instructionList_62634.setter_append (var_generatedInstruction_64337, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1492)) ;
    }
    enumerator_63910.gotoNextObject () ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GALGAS_hStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_63141, var_instructionList_62634, var_multipleBindingGenerationList_63205, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVStackViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GALGAS_bool constinArgument_inPreferences,
                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GALGAS_actionMap constinArgument_inActionMap,
                                                                        const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GALGAS_classMap constinArgument_inClassMap,
                                                                        GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList temp_0 = GALGAS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1518)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_65713 = temp_0 ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_66220 ;
  const GALGAS_astVStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_66220, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1519)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList temp_2 = GALGAS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1535)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_66284 = temp_2 ;
  const GALGAS_astVStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_66954 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_3.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_66392_hiddenBindingExpression = extractPtr_66954->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66702 ;
      GALGAS_typeKind var_type_66741 ;
      GALGAS_location var_errorLocation_66768 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66392_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66702, var_type_66741, var_errorLocation_66768, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1539)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_type_66741.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1549)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1549)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_66768, GALGAS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1550)) ;
        }
      }
      {
      var_multipleBindingGenerationList_66284.setter_append (GALGAS_string ("hidden"), var_hiddenExpression_66702, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1552)) ;
      }
    }
    break ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_6 = this ;
  cEnumerator_astViewInstructionList enumerator_66969 (temp_6.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_66969.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_67396 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_66969.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67396, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1555)) ;
    {
    var_instructionList_65713.setter_append (var_generatedInstruction_67396, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1570)) ;
    }
    enumerator_66969.gotoNextObject () ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GALGAS_vStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_66220, var_instructionList_65713, var_multipleBindingGenerationList_66284, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedHorizontalViewGeneration::getter_generateViewBuilder (const GALGAS_bool constinArgument_inPreferences,
                                                                                 const GALGAS_string constinArgument_inViewName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)).add_operation (GALGAS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)) ;
  const GALGAS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)) ;
  const GALGAS_computedHorizontalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_75760 (temp_1.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_75760.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_75760.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)).add_operation (enumerator_75760.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)) ;
    enumerator_75760.gotoNextObject () ;
  }
  const GALGAS_computedHorizontalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_75885 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GALGAS_uint index_75880 (uint32_t (0)) ;
  while (enumerator_75885.hasCurrentObject ()) {
    GALGAS_string var_name_75942 = GALGAS_string ("view_").add_operation (index_75880.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1757)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1757)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_75885.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_75942, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1758)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1758)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = hStackView.appendView (").add_operation (var_name_75942, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1759)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1759)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1759)) ;
    enumerator_75885.gotoNextObject () ;
    index_75880.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1756)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1761)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1762)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedVerticalViewGeneration::getter_generateViewBuilder (const GALGAS_bool constinArgument_inPreferences,
                                                                               const GALGAS_string constinArgument_inViewName,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)).add_operation (GALGAS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let vStackView = AutoLayoutVerticalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)) ;
  const GALGAS_computedVerticalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)) ;
  const GALGAS_computedVerticalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_76728 (temp_1.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_76728.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_76728.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)).add_operation (enumerator_76728.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)) ;
    enumerator_76728.gotoNextObject () ;
  }
  const GALGAS_computedVerticalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_76853 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GALGAS_uint index_76848 (uint32_t (0)) ;
  while (enumerator_76853.hasCurrentObject ()) {
    GALGAS_string var_name_76910 = GALGAS_string ("view_").add_operation (index_76848.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1776)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1776)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_76853.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_76910, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1777)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1777)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = vStackView.appendView (").add_operation (var_name_76910, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1778)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1778)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1778)) ;
    enumerator_76853.gotoNextObject () ;
    index_76848.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1775)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1780)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1781)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                             const GALGAS_string constinArgument_inName,
                                                                                             const GALGAS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1797)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1797)).add_operation (GALGAS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1797)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                             const GALGAS_string constinArgument_inName,
                                                                                             const GALGAS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutSeparatorInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1807)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1807)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1807)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1809)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1809)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1809)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                           const GALGAS_string constinArgument_inName,
                                                                                           const GALGAS_string constinArgument_inIndentation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutDividerInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1820)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1822)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1822)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1822)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                             const GALGAS_string constinArgument_inName,
                                                                                             const GALGAS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1832)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool constinArgument_inPreferences,
                                                                                                const GALGAS_string constinArgument_inName,
                                                                                                const GALGAS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (GALGAS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_80198 (temp_1.readProperty_mParameterList (), EnumerationOrder::up) ;
  while (enumerator_80198.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_80198.current (HERE).readProperty_mParameterName ().add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)).add_operation (enumerator_80198.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)) ;
    if (enumerator_80198.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1846)) ;
    }
    enumerator_80198.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1848)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1849)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_80442 (temp_3.readProperty_mRegularBindingsGenerationList (), EnumerationOrder::up) ;
  while (enumerator_80442.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (enumerator_80442.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)) ;
    cEnumerator_boundObjectList enumerator_80592 (enumerator_80442.current_mBoundObjectList (HERE), EnumerationOrder::up) ;
    while (enumerator_80592.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_80592.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1853)) ;
      if (enumerator_80592.hasNextObject ()) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1854)) ;
      }
      enumerator_80592.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_80442.current_mBindingOptionsString (HERE).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1856)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1856)) ;
    enumerator_80442.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_80753 (temp_4.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_80753.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (enumerator_80753.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_80753.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)) ;
    enumerator_80753.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
    {
      const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_81263 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (temp_5.readProperty_mRunBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_80970_targetName = extractPtr_81263->mAssociatedValue0 ;
      const GALGAS_string extractedValue_80982_actionName = extractPtr_81263->mAssociatedValue1 ;
      const GALGAS_string extractedValue_80994_targetTypeName = extractPtr_81263->mAssociatedValue2 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (extractedValue_80970_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (extractedValue_80994_targetTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (extractedValue_80982_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)).add_operation (GALGAS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1866)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1867)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1867)) ;
    }
    break ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kNotBuilt:
    break ;
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kEnum_binding:
    {
      const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * extractPtr_81466 = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_81363_controllerName = extractPtr_81466->mAssociatedValue0 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (extractedValue_81363_controllerName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)) ;
    }
    break ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("preferences_") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string ("self.") ;
      }
      GALGAS_string var_prefix_81535 = temp_9 ;
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (var_prefix_81535, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (GALGAS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1876)) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GALGAS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (GALGAS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)).add_operation (GALGAS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1880)) ;
        }
      }
      if (kBoolFalse == test_14) {
        const GALGAS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)).add_operation (GALGAS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1882)) ;
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GALGAS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)).add_operation (GALGAS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1886)) ;
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

GALGAS_string cPtr_hStackViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool constinArgument_inPreferences,
                                                                                    const GALGAS_string constinArgument_inName,
                                                                                    const GALGAS_string constinArgument_inIndentation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)) ;
  const GALGAS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1897)) ;
  const GALGAS_hStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_82687 (temp_1.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_82687.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (enumerator_82687.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_82687.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)) ;
    enumerator_82687.gotoNextObject () ;
  }
  const GALGAS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_82859 (temp_2.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_82859.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (enumerator_82859.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (enumerator_82859.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)) ;
    enumerator_82859.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1904)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1904)) ;
  GALGAS_string var_indentation_83031 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1905)) ;
  const GALGAS_hStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_83073 (temp_3.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GALGAS_uint index_83068 (uint32_t (0)) ;
  while (enumerator_83073.hasCurrentObject ()) {
    GALGAS_string var_name_83131 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)).add_operation (index_83068.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1907)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_83073.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_83131, var_indentation_83031, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1908)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1908)) ;
    result_result.plusAssign_operation(var_indentation_83031.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (var_name_83131, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)) ;
    enumerator_83073.gotoNextObject () ;
    index_83068.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1906)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1911)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1911)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_vStackViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool constinArgument_inPreferences,
                                                                                    const GALGAS_string constinArgument_inName,
                                                                                    const GALGAS_string constinArgument_inIndentation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)) ;
  const GALGAS_vStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1921)) ;
  const GALGAS_vStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_83896 (temp_1.readProperty_mMultipleBindingGenerationList (), EnumerationOrder::up) ;
  while (enumerator_83896.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (enumerator_83896.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_83896.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)) ;
    enumerator_83896.gotoNextObject () ;
  }
  const GALGAS_vStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_84068 (temp_2.readProperty_mNewStackViewDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_84068.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (enumerator_84068.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (enumerator_84068.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)) ;
    enumerator_84068.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1928)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1928)) ;
  GALGAS_string var_indentation_84240 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1929)) ;
  const GALGAS_vStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_84282 (temp_3.readProperty_mInstructionList (), EnumerationOrder::up) ;
  GALGAS_uint index_84277 (uint32_t (0)) ;
  while (enumerator_84282.hasCurrentObject ()) {
    GALGAS_string var_name_84340 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1931)).add_operation (index_84277.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1931)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1931)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_84282.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_84340, var_indentation_84240, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1932)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1932)) ;
    result_result.plusAssign_operation(var_indentation_84240.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (var_name_84340, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1933)) ;
    enumerator_84282.gotoNextObject () ;
    index_84277.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1930)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1935)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_outletClassDeclarationAST temp_0 = this ;
  const GALGAS_outletClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 18)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_outletClassDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_outletClassDeclarationAST temp_4 = this ;
      const GALGAS_outletClassDeclarationAST temp_5 = this ;
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

GALGAS_lstring cPtr_outletClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_outletClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_outletClassDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_outletClassDeclarationAST temp_2 = this ;
      const GALGAS_outletClassDeclarationAST temp_3 = this ;
      const GALGAS_outletClassDeclarationAST temp_4 = this ;
      const GALGAS_outletClassDeclarationAST temp_5 = this ;
      const GALGAS_outletClassDeclarationAST temp_6 = this ;
      const GALGAS_outletClassDeclarationAST temp_7 = this ;
      const GALGAS_outletClassDeclarationAST temp_8 = this ;
      ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.ggs", 107)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 105)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_hasRunAction_3833 ;
    GALGAS_bool var_handlesTableValueBinding_3858 ;
    GALGAS_bool var_hasEnabled_3895 ;
    GALGAS_bool var_hasHidden_3918 ;
    GALGAS_bool var_handlesGraphicControllerBinding_3940 ;
    const GALGAS_outletClassDeclarationAST temp_9 = this ;
    GALGAS_lstring joker_3818 ; // Joker input parameter
    GALGAS_bool joker_3979 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3818, var_hasRunAction_3833, var_handlesTableValueBinding_3858, var_hasEnabled_3895, var_hasHidden_3918, var_handlesGraphicControllerBinding_3940, joker_3979, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 116)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3833 COMMA_SOURCE_FILE ("outlet-class.ggs", 126)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_outletClassDeclarationAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 127)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3858 COMMA_SOURCE_FILE ("outlet-class.ggs", 129)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_outletClassDeclarationAST temp_16 = this ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 130)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3895 COMMA_SOURCE_FILE ("outlet-class.ggs", 132)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_outletClassDeclarationAST temp_20 = this ;
        TC_Array <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 133)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GALGAS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3918 COMMA_SOURCE_FILE ("outlet-class.ggs", 135)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_outletClassDeclarationAST temp_24 = this ;
        TC_Array <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 136)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GALGAS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3940 COMMA_SOURCE_FILE ("outlet-class.ggs", 138)).boolEnum () ;
      if (kBoolTrue == test_26) {
        const GALGAS_outletClassDeclarationAST temp_28 = this ;
        TC_Array <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$graphicController binding already defined in superclass"), fixItArray29  COMMA_SOURCE_FILE ("outlet-class.ggs", 139)) ;
      }
    }
    {
    const GALGAS_outletClassDeclarationAST temp_30 = this ;
    const GALGAS_outletClassDeclarationAST temp_31 = this ;
    const GALGAS_outletClassDeclarationAST temp_32 = this ;
    const GALGAS_outletClassDeclarationAST temp_33 = this ;
    const GALGAS_outletClassDeclarationAST temp_34 = this ;
    const GALGAS_outletClassDeclarationAST temp_35 = this ;
    const GALGAS_outletClassDeclarationAST temp_36 = this ;
    const GALGAS_outletClassDeclarationAST temp_37 = this ;
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3833 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3858 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3895 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3918 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3940 COMMA_SOURCE_FILE ("outlet-class.ggs", 148)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 141)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                   const GALGAS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_outletClassBindingSpecificationList enumerator_4836 (constinArgument_inBindingSpecificationListMap, EnumerationOrder::up) ;
  while (enumerator_4836.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList temp_0 = GALGAS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 130)) ;
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4937 = temp_0 ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_5003 (enumerator_4836.current_mOutletClassBindingSpecificationModelList (HERE), EnumerationOrder::up) ;
    while (enumerator_5003.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_5003.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_enumConstantMap temp_2 = GALGAS_enumConstantMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)) ;
          GALGAS_enumFuncMap temp_3 = GALGAS_enumFuncMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)) ;
          var_outletBindingSpecificationModelList_4937.setter_append (GALGAS_typeKind::class_func_enumType (GALGAS_string::makeEmptyString (), temp_2, temp_3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)), enumerator_5003.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_classKind var_classKind_5416 ;
        GALGAS_propertyMap joker_5427_3 ; // Joker input parameter
        GALGAS_actionMap joker_5427_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5427_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5003.current_mModelTypeName (HERE), var_classKind_5416, joker_5427_3, joker_5427_2, joker_5427_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 138)) ;
        GALGAS_typeKind var_typeKind_5454 ;
        switch (var_classKind_5416.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_5003.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 142)) ;
            var_typeKind_5454.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5654 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5416.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5625_kind = extractPtr_5654->mAssociatedValue0 ;
            var_typeKind_5454 = extractedValue_5625_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_5003.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5454.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_5003.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
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
    GALGAS_controllerBindingOptionDecoratedList temp_7 = GALGAS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_6056 = temp_7 ;
    cEnumerator_controllerBindingOptionList enumerator_6120 (enumerator_4836.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
    while (enumerator_6120.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_6240 ;
      GALGAS_propertyMap joker_6251_3 ; // Joker input parameter
      GALGAS_actionMap joker_6251_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6251_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_6120.current_mOptionTypeName (HERE), var_classKind_6240, joker_6251_3, joker_6251_2, joker_6251_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 155)) ;
      GALGAS_typeKind var_typeKind_6276 ;
      switch (var_classKind_6240.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_6120.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 159)) ;
          var_typeKind_6276.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6467 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6240.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_6440_kind = extractPtr_6467->mAssociatedValue0 ;
          var_typeKind_6276 = extractedValue_6440_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_6120.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_6276.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_6120.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
          var_typeKind_6276.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_6056.setter_append (var_typeKind_6276, enumerator_6120.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 167)) ;
      }
      enumerator_6120.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6853 ;
    GALGAS_lstring var_outletSuperClassName_6881 ;
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
      GALGAS_outletBindingSpecificationMap temp_12 = GALGAS_outletBindingSpecificationMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 175)) ;
      var_bindingMap_6853 = temp_12 ;
      GALGAS_bool joker_7229_6 ; // Joker input parameter
      GALGAS_bool joker_7229_5 ; // Joker input parameter
      GALGAS_bool joker_7229_4 ; // Joker input parameter
      GALGAS_bool joker_7229_3 ; // Joker input parameter
      GALGAS_bool joker_7229_2 ; // Joker input parameter
      GALGAS_bool joker_7229_1 ; // Joker input parameter
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

void routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (const GALGAS_bool constinArgument_inPreferences,
                                                                                             const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                             const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GALGAS_outletDeclarationList constinArgument_inOutletDeclarationList,
                                                                                             const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                             const GALGAS_actionMap constinArgument_inActionMap,
                                                                                             const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                                             GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                                             GALGAS_regularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                             GALGAS_multipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                             GALGAS_actionBindingListForGeneration & outArgument_outTargetActionList,
                                                                                             GALGAS_decoratedOutletMap & outArgument_outletMap,
                                                                                             GALGAS_tableViewBindingGenerationList & outArgument_outTableViewBindingGenerationList,
                                                                                             GALGAS_ebViewGraphicControllerBindingGenerationList & outArgument_outEBViewGraphicControllerBindingGenerationList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outTargetActionList.drop () ; // Release 'out' argument
  outArgument_outletMap.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGenerationList.drop () ; // Release 'out' argument
  GALGAS_regularBindingsGenerationList temp_0 = GALGAS_regularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 203)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GALGAS_actionBindingListForGeneration temp_1 = GALGAS_actionBindingListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 204)) ;
  outArgument_outTargetActionList = temp_1 ;
  GALGAS_multipleBindingGenerationList temp_2 = GALGAS_multipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 205)) ;
  outArgument_outMultipleBindingGenerationList = temp_2 ;
  GALGAS_decoratedOutletMap temp_3 = GALGAS_decoratedOutletMap::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 206)) ;
  outArgument_outletMap = temp_3 ;
  GALGAS_tableViewBindingGenerationList temp_4 = GALGAS_tableViewBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 207)) ;
  outArgument_outTableViewBindingGenerationList = temp_4 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList temp_5 = GALGAS_ebViewGraphicControllerBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = temp_5 ;
  cEnumerator_outletDeclarationList enumerator_8379 (constinArgument_inOutletDeclarationList, EnumerationOrder::up) ;
  while (enumerator_8379.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8379.current_mOutletName (HERE), enumerator_8379.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 210)) ;
    }
    GALGAS_bool var_handlesRunAction_8620 ;
    GALGAS_bool var_handlesTableViewBinding_8655 ;
    GALGAS_bool var_handlesEnabledBinding_8697 ;
    GALGAS_bool var_handlesHiddenBinding_8737 ;
    GALGAS_bool var_handleGraphicControllerBinding_8776 ;
    GALGAS_bool var_outletClassIsUserDefined_8825 ;
    GALGAS_lstring joker_8599 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8379.current_mOutletTypeName (HERE), joker_8599, var_handlesRunAction_8620, var_handlesTableViewBinding_8655, var_handlesEnabledBinding_8697, var_handlesHiddenBinding_8737, var_handleGraphicControllerBinding_8776, var_outletClassIsUserDefined_8825, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 211)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_outletClassIsUserDefined_8825.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 221)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.setter_insert (enumerator_8379.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 222)) ;
        }
      }
    }
    switch (enumerator_8379.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_11365 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_8379.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_9092_controllerName = extractPtr_11365->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_9117_propertyName = extractPtr_11365->mAssociatedValue1 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_handleGraphicControllerBinding_8776.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 228)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_8379.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8379.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_propertyKind var_kind_9421 ;
          GALGAS_actionMap joker_9437_2 ; // Joker input parameter
          GALGAS_bool joker_9437_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_9092_controllerName, var_kind_9421, joker_9437_2, joker_9437_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 231)) ;
          switch (var_kind_9421.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 238)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 240)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 242)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_11077 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_9421.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_9827_entityName = extractPtr_11077->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_9839_graphic = extractPtr_11077->mAssociatedValue1 ;
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (ComparisonKind::equal, extractedValue_9117_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = extractedValue_9839_graphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 245)).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      TC_Array <FixItDescription> fixItArray14 ;
                      inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_9827_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 246)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_propertyMap var_observablePropertyMap_10180 ;
                GALGAS_classKind joker_10157 ; // Joker input parameter
                GALGAS_actionMap joker_10217_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_10217_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9827_entityName, joker_10157, var_observablePropertyMap_10180, joker_10217_2, joker_10217_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 249)) ;
                GALGAS_propertyKind var_propertyKind_10299 ;
                GALGAS_actionMap joker_10313_2 ; // Joker input parameter
                GALGAS_bool joker_10313_1 ; // Joker input parameter
                var_observablePropertyMap_10180.method_searchKey (extractedValue_9117_propertyName, var_propertyKind_10299, joker_10313_2, joker_10313_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 255)) ;
                switch (var_propertyKind_10299.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 258)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10686 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_10299.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_10492_kEntityName = extractPtr_10686->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_10508_isGraphic = extractPtr_10686->mAssociatedValue2 ;
                    enumGalgasBool test_16 = kBoolTrue ;
                    if (kBoolTrue == test_16) {
                      test_16 = extractedValue_10508_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 260)).boolEnum () ;
                      if (kBoolTrue == test_16) {
                        TC_Array <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_10492_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 261)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 261)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 261)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 264)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <FixItDescription> fixItArray19 ;
                    inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 266)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <FixItDescription> fixItArray20 ;
                    inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 268)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_9092_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
            }
            break ;
          }
          {
          outArgument_outEBViewGraphicControllerBindingGenerationList.setter_append (enumerator_8379.current_mOutletName (HERE).readProperty_string (), extractedValue_9092_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 274)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8379.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_12112 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_8379.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11510_controllerName = extractPtr_12112->mAssociatedValue0 ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_handlesTableViewBinding_8655.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 284)).boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_8379.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8379.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 285)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 285)), fixItArray23  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 285)) ;
          }
        }
        if (kBoolFalse == test_22) {
          GALGAS_propertyKind var_kind_11808 ;
          GALGAS_actionMap joker_11824_2 ; // Joker input parameter
          GALGAS_bool joker_11824_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11510_controllerName, var_kind_11808, joker_11824_2, joker_11824_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 287)) ;
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            test_24 = var_kind_11808.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 292)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 292)).boolEnum () ;
            if (kBoolTrue == test_24) {
              TC_Array <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_11510_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray25  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 293)) ;
            }
          }
          {
          outArgument_outTableViewBindingGenerationList.setter_append (enumerator_8379.current_mOutletName (HERE).readProperty_string (), extractedValue_11510_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 295)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8379.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_13120 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_8379.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12215_target = extractPtr_13120->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_12232_action = extractPtr_13120->mAssociatedValue1 ;
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = var_handlesRunAction_8620.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 305)).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_8379.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8379.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 306)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 306)), fixItArray27  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 306)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GALGAS_bool (ComparisonKind::equal, extractedValue_12215_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12232_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 308)) ;
              {
              outArgument_outTargetActionList.setter_append (enumerator_8379.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("self"), extractedValue_12232_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 309)) ;
              }
            }
          }
          if (kBoolFalse == test_28) {
            GALGAS_actionMap var_controllerActionMap_12767 ;
            GALGAS_propertyKind joker_12737 ; // Joker input parameter
            GALGAS_bool joker_12798 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12215_target, joker_12737, var_controllerActionMap_12767, joker_12798, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 316)) ;
            var_controllerActionMap_12767.method_searchKey (extractedValue_12232_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 322)) ;
            {
            GALGAS_string temp_29 ;
            const enumGalgasBool test_30 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_30) {
              temp_29 = GALGAS_string ("preferences_") ;
            }else if (kBoolFalse == test_30) {
              temp_29 = GALGAS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.setter_append (enumerator_8379.current_mOutletName (HERE).readProperty_string (), temp_29.add_operation (extractedValue_12215_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 325)), extractedValue_12232_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)).add_operation (extractedValue_12215_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 327)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 323)) ;
            }
          }
        }
      }
      break ;
    }
    switch (enumerator_8379.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14032 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8379.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13275_expression = extractPtr_14032->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13573 ;
        GALGAS_typeKind var_type_13614 ;
        GALGAS_location var_errorLocation_13643 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13275_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13573, var_type_13614, var_errorLocation_13643, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 335)) ;
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesEnabledBinding_8697.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 345)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_13643, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 346)) ;
          }
        }
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          test_33 = var_type_13614.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 348)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 348)).boolEnum () ;
          if (kBoolTrue == test_33) {
            TC_Array <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (var_errorLocation_13643, GALGAS_string ("expression is not boolean"), fixItArray34  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 349)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8379.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("enabled"), var_enableExpression_13573, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 351)) ;
        }
      }
      break ;
    }
    switch (enumerator_8379.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14937 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8379.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_14183_expression = extractPtr_14937->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14481 ;
        GALGAS_typeKind var_type_14522 ;
        GALGAS_location var_errorLocation_14551 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_14183_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14481, var_type_14522, var_errorLocation_14551, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 361)) ;
        enumGalgasBool test_35 = kBoolTrue ;
        if (kBoolTrue == test_35) {
          test_35 = var_type_14522.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 371)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 371)).boolEnum () ;
          if (kBoolTrue == test_35) {
            TC_Array <FixItDescription> fixItArray36 ;
            inCompiler->emitSemanticError (var_errorLocation_14551, GALGAS_string ("expression is not boolean"), fixItArray36  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 372)) ;
          }
        }
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_handlesHiddenBinding_8737.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 374)).boolEnum () ;
          if (kBoolTrue == test_37) {
            TC_Array <FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticError (var_errorLocation_14551, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray38  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 375)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8379.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_14481, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 377)) ;
        }
      }
      break ;
    }
    {
    GALGAS_string temp_39 ;
    const enumGalgasBool test_40 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_40) {
      temp_39 = GALGAS_string ("preferences_") ;
    }else if (kBoolFalse == test_40) {
      temp_39 = GALGAS_string ("self.") ;
    }
    routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8379.current_mOutletTypeName (HERE), enumerator_8379.current_mOutletName (HERE).readProperty_string (), enumerator_8379.current_mRegularBindingList (HERE), temp_39, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 384)) ;
    }
    enumerator_8379.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                                                        const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                        const GALGAS_lstring constinArgument_inOutletTypeName,
                                                                        const GALGAS_string constinArgument_inOutletName,
                                                                        const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                                                        const GALGAS_string constinArgument_inSelfSwiftName,
                                                                        GALGAS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_15942 (constinArgument_inRegularBindingList, EnumerationOrder::up) ;
  while (enumerator_15942.hasCurrentObject ()) {
    GALGAS_outletBindingModelList temp_0 = GALGAS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 413)) ;
    GALGAS_outletBindingModelList var_boundModelTypeList_16042 = temp_0 ;
    GALGAS_boundObjectList temp_1 = GALGAS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 414)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_16091 = temp_1 ;
    cEnumerator_observablePropertyList enumerator_16133 (enumerator_15942.current_mObservablePropertyList (HERE), EnumerationOrder::up) ;
    while (enumerator_16133.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_16351 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_16385 ;
      GALGAS_string var_defaultValueAsString_16458 ;
      extensionMethod_analyzeObservableProperty (enumerator_16133.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16351, var_swiftTypeStringForTransientFunctionArgument_16385, var_defaultValueAsString_16458, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 416)) ;
      switch (var_kind_16351.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16133.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 427)), GALGAS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 427)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16133.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 429)), GALGAS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 429)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16133.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)), GALGAS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_16133.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)), GALGAS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_16091.setter_append (extensionGetter_modelStringForSelf (enumerator_16133.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 436)), var_kind_16351, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 435)) ;
      }
      {
      var_boundModelTypeList_16042.setter_append (var_kind_16351, extensionGetter_location (enumerator_16133.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)) ;
      }
      enumerator_16133.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList temp_6 = GALGAS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 442)) ;
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17280 = temp_6 ;
    GALGAS_controllerBindingOptionDecoratedList temp_7 = GALGAS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 443)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17367 = temp_7 ;
    GALGAS_lstring var_outletTypeName_17417 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_17459 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 446)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).isValid ()) {
      uint32_t variant_17480 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 446)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).uintValue () ;
      bool loop_17480 = true ;
      while (loop_17480) {
        loop_17480 = GALGAS_bool (ComparisonKind::notEqual, var_outletTypeName_17417.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17459 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).isValid () ;
        if (loop_17480) {
          loop_17480 = GALGAS_bool (ComparisonKind::notEqual, var_outletTypeName_17417.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17459 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 446)).boolValue () ;
        }
        if (loop_17480 && (0 == variant_17480)) {
          loop_17480 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 446)) ;
        }
        if (loop_17480) {
          variant_17480 -- ;
          var_continues_17459 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_17712 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_17778 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17417, var_superOutletClassName_17712, var_bindingMap_17778, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 448)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_bindingMap_17778.getter_hasKey (enumerator_15942.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_bindingMap_17778.method_searchKey (enumerator_15942.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17280, var_controllerBindingOptionDecoratedList_17367, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 454)) ;
            }
          }
          if (kBoolFalse == test_8) {
            var_continues_17459 = GALGAS_bool (true) ;
            var_outletTypeName_17417 = var_superOutletClassName_17712 ;
          }
        }
      }
    }
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_continues_17459.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15942.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 465)) ;
      }
    }
    if (kBoolFalse == test_9) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (ComparisonKind::notEqual, var_boundModelTypeList_16042.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 466)).objectCompare (var_outletBindingSpecificationModelList_17280.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 466)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_15942.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17280.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 468)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 468)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 468)).add_operation (var_boundModelTypeList_16042.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 470)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 469)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 469)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 470)), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 467)) ;
        }
      }
      if (kBoolFalse == test_11) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18497 (var_outletBindingSpecificationModelList_17280, EnumerationOrder::up) ;
        cEnumerator_outletBindingModelList enumerator_18592 (var_boundModelTypeList_16042, EnumerationOrder::up) ;
        while (enumerator_18497.hasCurrentObject () && enumerator_18592.hasCurrentObject ()) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            GALGAS_bool test_14 = enumerator_18497.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_14.boolEnum ()) {
              test_14 = extensionGetter_isTransient (enumerator_18592.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 473)) ;
            }
            test_13 = test_14.boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_18592.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 474)) ;
            }
          }
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            GALGAS_bool test_17 = enumerator_18497.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = extensionGetter_isEnumType (enumerator_18592.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            }
            test_16 = test_17.boolEnum () ;
            if (kBoolTrue == test_16) {
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_18497.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 477)).objectCompare (extensionGetter_swiftTypeName (enumerator_18592.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 477)))).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (enumerator_18592.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18497.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 478)) ;
              }
            }
          }
          enumerator_18497.gotoNextObject () ;
          enumerator_18592.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_19163 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_17367.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 484)).objectCompare (enumerator_15942.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("outlet-declaration.ggs", 484)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        GALGAS_string var_s_19289 ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = GALGAS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_17367.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 486)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_21) {
            var_s_19289 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_21) {
          var_s_19289 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19491 (var_controllerBindingOptionDecoratedList_17367, EnumerationOrder::up) ;
          while (enumerator_19491.hasCurrentObject ()) {
            var_s_19289.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_19491.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (extensionGetter_swiftTypeName (enumerator_19491.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)) ;
            enumerator_19491.gotoNextObject () ;
          }
        }
        TC_Array <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15942.current_mBindingName (HERE).readProperty_location (), var_s_19289, fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 494)) ;
      }
    }
    if (kBoolFalse == test_20) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19716 (var_controllerBindingOptionDecoratedList_17367, EnumerationOrder::up) ;
      cEnumerator_bindingOptionList enumerator_19813 (enumerator_15942.current_mBindingOptionList (HERE), EnumerationOrder::up) ;
      while (enumerator_19716.hasCurrentObject () && enumerator_19813.hasCurrentObject ()) {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (ComparisonKind::notEqual, enumerator_19716.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19813.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_23) {
            TC_Array <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_19813.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_19716.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 499)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 499)), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 499)) ;
          }
        }
        GALGAS_string var_optionValueAsString_20205 ;
        GALGAS_typeKindList temp_25 = GALGAS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 502)) ;
        temp_25.enterElement (GALGAS_typeKindList_2D_element::init_21_ (enumerator_19716.current_mOptionType (HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 502)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19813.current_mOptionValue (HERE).ptr (), temp_25, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_20205, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 501)) ;
        var_bindingOptionString_19163.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_19716.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)).add_operation (var_optionValueAsString_20205, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 506)) ;
        enumerator_19716.gotoNextObject () ;
        enumerator_19813.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (constinArgument_inOutletName, enumerator_15942.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_16091, var_bindingOptionString_19163, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 510)) ;
    }
    enumerator_15942.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_768 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_768, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 17)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_768, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.ggs", 18)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_768, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.ggs", 19)) ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1042 (temp_6.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_1042.hasCurrentObject ()) {
    switch (enumerator_1042.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1310 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1126_propertyName = extractPtr_1310->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)).add_operation (extractedValue_1126_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)), extractedValue_1126_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1534 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1347_propertyName = extractPtr_1534->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)).add_operation (extractedValue_1347_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)), extractedValue_1347_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1772 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1573_relationshipName = extractPtr_1772->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)).add_operation (extractedValue_1573_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)), extractedValue_1573_relationshipName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1999 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1803_relationshipName = extractPtr_1999->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)).add_operation (extractedValue_1803_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)), extractedValue_1803_relationshipName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2182 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2061_propertyName = extractPtr_2182->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)).add_operation (extractedValue_2061_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)), extractedValue_2061_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2350 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2226_propertyName = extractPtr_2350->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)).add_operation (extractedValue_2226_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)), extractedValue_2226_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2513 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2389_propertyName = extractPtr_2513->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)).add_operation (extractedValue_2389_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)), extractedValue_2389_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2677 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2553_propertyName = extractPtr_2677->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)).add_operation (extractedValue_2553_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)), extractedValue_2553_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2836 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2715_propertyName = extractPtr_2836->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)).add_operation (extractedValue_2715_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)), extractedValue_2715_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2988 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2871_propertyName = extractPtr_2988->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (extractedValue_2871_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)), extractedValue_2871_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3153 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3033_propertyName = extractPtr_3153->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (extractedValue_3033_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)), extractedValue_3033_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3346 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3197_controllerName = extractPtr_3346->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3220_propertyName = extractPtr_3346->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)).add_operation (extractedValue_3197_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)), extractedValue_3197_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3578 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3399_controllerName = extractPtr_3578->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3422_propertyName = extractPtr_3578->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3443_secondaryPropertyName = extractPtr_3578->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)).add_operation (extractedValue_3399_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)), extractedValue_3399_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3806 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3627_controllerName = extractPtr_3806->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3650_propertyName = extractPtr_3806->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3671_secondaryPropertyName = extractPtr_3806->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)).add_operation (extractedValue_3627_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)), extractedValue_3627_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_4002 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3853_controllerName = extractPtr_4002->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3876_propertyName = extractPtr_4002->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)).add_operation (extractedValue_3853_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)), extractedValue_3853_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 60)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_signatureProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4291 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4144_superEntityName = extractPtr_4291->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4170_propertyName = extractPtr_4291->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (extractedValue_4144_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)).add_operation (extractedValue_4170_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)), extractedValue_4170_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4492 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4342_superEntityName = extractPtr_4492->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4368_propertyName = extractPtr_4492->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::init_21__21_ (extractedValue_4342_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)).add_operation (extractedValue_4368_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)), extractedValue_4368_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 67)) ;
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

GALGAS_lstring cPtr_computedPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 75)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 75)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_6602 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 130)) ;
  if (nullptr != objectArray_6602) {
    macroValidSharedObject (objectArray_6602, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_6770 ;
    const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_6781_3 ; // Joker input parameter
    GALGAS_actionMap joker_6781_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6781_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6770, joker_6781_3, joker_6781_2, joker_6781_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 133)) ;
    switch (var_classKind_6770.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_computedPropertyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.ggs", 136)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7090 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6770.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_6921_kind = extractPtr_7090->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
        GALGAS_actionMap temp_5 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 141)) ;
        objectArray_6602->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GALGAS_propertyKind::class_func_property (extractedValue_6921_kind, GALGAS_propertyAccessibility::class_func_computed (SOURCE_FILE ("computed-property.ggs", 140))  COMMA_SOURCE_FILE ("computed-property.ggs", 140)), temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 138)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_computedPropertyDeclarationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("computed-property.ggs", 145)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("computed-property.ggs", 147)) ;
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

void cPtr_computedPropertyDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classKind var_classKind_7836 ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_7847_3 ; // Joker input parameter
  GALGAS_actionMap joker_7847_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_7847_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7836, joker_7847_3, joker_7847_2, joker_7847_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 161)) ;
  GALGAS_typeKind var_typeKind_7884 ;
  switch (var_classKind_7836.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 166)) ;
      var_typeKind_7884.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8069 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7836.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8046_kind = extractPtr_8069->mAssociatedValue0 ;
      var_typeKind_7884 = extractedValue_8046_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 170)) ;
      var_typeKind_7884.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 172)) ;
      var_typeKind_7884.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8351 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_propertyMap temp_9 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 177)) ;
      var_rootProperties_8351 = temp_9 ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_10 = this ;
    GALGAS_classKind joker_8506 ; // Joker input parameter
    GALGAS_actionMap joker_8527_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8527_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mRootEntityName (), joker_8506, var_rootProperties_8351, joker_8527_2, joker_8527_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 179)) ;
  }
  GALGAS_classKind var_currentClassKind_8631 ;
  GALGAS_propertyMap var_properties_8654 ;
  const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
  GALGAS_actionMap joker_8666_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8666_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_11.readProperty_mClassName (), var_currentClassKind_8631, var_properties_8654, joker_8666_2, joker_8666_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 182)) ;
  GALGAS_transientDependencyListForGeneration temp_12 = GALGAS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 184)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_8746 = temp_12 ;
  const GALGAS_computedPropertyDeclarationAST temp_13 = this ;
  cEnumerator_observablePropertyList enumerator_8771 (temp_13.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_8771.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_8960 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_8995 ;
    GALGAS_string var_defaultValueAsString_9059 ;
    extensionMethod_analyzeObservableProperty (enumerator_8771.current_mObservableProperty (HERE), var_rootProperties_8351, ioArgument_ioSemanticContext, var_properties_8654, var_dependencyKind_8960, var_swiftTypeStringForTransientFunctionArgument_8995, var_defaultValueAsString_9059, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 186)) ;
    switch (var_dependencyKind_8960.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8771.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 199)), GALGAS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("computed-property.ggs", 199)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8771.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 201)), GALGAS_string ("only an atomic property can be observed"), fixItArray15  COMMA_SOURCE_FILE ("computed-property.ggs", 201)) ;
      }
      break ;
    }
    {
    var_dependencies_8746.setter_append (enumerator_8771.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8771.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 205)), var_swiftTypeStringForTransientFunctionArgument_8995, var_defaultValueAsString_9059, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 203)) ;
    }
    enumerator_8771.gotoNextObject () ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_16 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GALGAS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7884, GALGAS_string ("computed"), var_dependencies_8746, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 210)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_19 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GALGAS_computeRoutineGeneration::init_21__21__21__21_ (temp_18.readProperty_mClassName ().readProperty_string (), temp_19.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7884, var_dependencies_8746, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 218)) ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
  cMapElement_classMap * objectArray_9996 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_20.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 225)) ;
  if (nullptr != objectArray_9996) {
    macroValidSharedObject (objectArray_9996, cMapElement_classMap) ;
    GALGAS_bool var_generate_10098 ;
    switch (var_currentClassKind_8631.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10098 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10098 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10098 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10495 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8631.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10284_graphic = extractPtr_10495->mAssociatedValue1 ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = extractedValue_10284_graphic.boolEnum () ;
          if (kBoolTrue == test_21) {
            const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
            const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
            var_generate_10098 = GALGAS_bool (ComparisonKind::notEqual, temp_22.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (ComparisonKind::notEqual, temp_23.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 238)) ;
          }
        }
        if (kBoolFalse == test_21) {
          var_generate_10098 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    {
    const GALGAS_computedPropertyDeclarationAST temp_24 = this ;
    const GALGAS_computedPropertyDeclarationAST temp_25 = this ;
    objectArray_9996->mProperty_mPropertyGenerationList.setter_append (GALGAS_computedPropertyGeneration::init_21__21__21__21__21_ (temp_24.readProperty_mComputedPropertyName ().readProperty_string (), temp_25.readProperty_mClassName ().readProperty_string (), var_typeKind_7884, var_dependencies_8746, var_generate_10098, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 243)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 274)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 274)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 274)) ;
  const GALGAS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 275)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 276)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 276)) ;
  const GALGAS_computedPropertyGeneration temp_1 = this ;
  const GALGAS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 277)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 289)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 289)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 289)) ;
  const GALGAS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 290)) ;
  const GALGAS_computedPropertyGeneration temp_1 = this ;
  const GALGAS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (GALGAS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 291)) ;
  const GALGAS_computedPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 292)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 293)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 294)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 295)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 296)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 297)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 298)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 299)) ;
  const GALGAS_computedPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 300)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 300)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 300)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 301)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 302)) ;
  const GALGAS_computedPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 303)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 303)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 304)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 305)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 306)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 319)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 325)) ;
  const GALGAS_computedPropertyGeneration temp_6 = this ;
  const GALGAS_computedPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 327)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 333)) ;
  const GALGAS_computedPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 334)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 334)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 339)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                               const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                               const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computedPropertyGeneration temp_1 = this ;
    const GALGAS_computedPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 348)).operator_not (SOURCE_FILE ("computed-property.ggs", 348)) COMMA_SOURCE_FILE ("computed-property.ggs", 348)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 350)) ;
          const GALGAS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
          const GALGAS_computedPropertyGeneration temp_5 = this ;
          const GALGAS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 353)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 354)) ;
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 355)) ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 357)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 359)) ;
        const GALGAS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 360)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 361)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 361)) ;
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 362)) ;
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

GALGAS_string cPtr_computedPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_16831 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_computedPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 372)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_computedPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_16958 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)) ;
      const GALGAS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16958.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 376)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 377)) ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          const GALGAS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 379)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 380)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 381)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 383)) ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        const GALGAS_computedPropertyGeneration temp_13 = this ;
        const GALGAS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 386)) ;
      const GALGAS_computedPropertyGeneration temp_15 = this ;
      const GALGAS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GALGAS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 387)) ;
      const GALGAS_computedPropertyGeneration temp_17 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17964 (temp_17.readProperty_mDependencyList (), EnumerationOrder::up) ;
      while (enumerator_17964.hasCurrentObject ()) {
        GALGAS_string var_s_18004 = extensionGetter_generateAddObserverCall (enumerator_17964.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 389)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (ComparisonKind::notEqual, var_s_18004.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_18004, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (var_prefix_16831, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 391)) ;
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

void cPtr_computeRoutineGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                         const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computeRoutineGeneration temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 414)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_computeRoutineGeneration temp_2 = this ;
      const GALGAS_computeRoutineGeneration temp_3 = this ;
      const GALGAS_computeRoutineGeneration temp_4 = this ;
      GALGAS_string var_s_19068 = GALGAS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 415))) ;
      const GALGAS_computeRoutineGeneration temp_5 = this ;
      const GALGAS_computeRoutineGeneration temp_6 = this ;
      GALGAS_string var_fileName_19232 = GALGAS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_19232, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)) ;
      }
      GALGAS_string var_header_19362 = GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 422)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)) ;
      var_header_19362.plusAssign_operation(GALGAS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 423)) ;
      var_header_19362.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 424)) ;
      var_header_19362.plusAssign_operation(GALGAS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 425)) ;
      var_header_19362.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 426)) ;
      GALGAS_string var_generatedZone_33__19732 = GALGAS_string ("  }\n\n") ;
      var_generatedZone_33__19732.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 428)) ;
      var_generatedZone_33__19732.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 429)) ;
      var_generatedZone_33__19732.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 430)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19232, GALGAS_string ("//"), var_header_19362, GALGAS_string ("\n\n"), var_s_19068, GALGAS_string ("\n"), var_generatedZone_33__19732, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)) ;
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

GALGAS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (Compiler * inCompiler,
                                                                                           const GALGAS_string & in_OWNER_5F_NAME,
                                                                                           const GALGAS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                           const GALGAS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//································································································\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  //································································································\n\n  func compute_") ;
  result.appendString (in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue ()) ;
  result.appendString ("_property (_ inValue : ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (") {\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_transientDeclarationAST temp_0 = this ;
  const GALGAS_transientDeclarationAST temp_1 = this ;
  const GALGAS_transientDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_750 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_750, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 17)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_750, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.ggs", 18)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_750, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.ggs", 19)) ;
  }
  const GALGAS_transientDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1003 (temp_6.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_1003.hasCurrentObject ()) {
    switch (enumerator_1003.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1271 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1087_propertyName = extractPtr_1271->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_transientDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)).add_operation (extractedValue_1087_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)), extractedValue_1087_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1495 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1308_propertyName = extractPtr_1495->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_transientDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)).add_operation (extractedValue_1308_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)), extractedValue_1308_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1733 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1534_relationshipName = extractPtr_1733->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_transientDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)).add_operation (extractedValue_1534_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)), extractedValue_1534_relationshipName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1960 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1764_relationshipName = extractPtr_1960->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_transientDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)).add_operation (extractedValue_1764_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)), extractedValue_1764_relationshipName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2143 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2022_propertyName = extractPtr_2143->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)).add_operation (extractedValue_2022_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)), extractedValue_2022_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2311 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2187_propertyName = extractPtr_2311->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)).add_operation (extractedValue_2187_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)), extractedValue_2187_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2474 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2350_propertyName = extractPtr_2474->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)).add_operation (extractedValue_2350_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)), extractedValue_2350_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2638 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2514_propertyName = extractPtr_2638->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)).add_operation (extractedValue_2514_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)), extractedValue_2514_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2797 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2676_propertyName = extractPtr_2797->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)).add_operation (extractedValue_2676_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)), extractedValue_2676_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2949 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2832_propertyName = extractPtr_2949->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (extractedValue_2832_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)), extractedValue_2832_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3114 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2994_propertyName = extractPtr_3114->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (extractedValue_2994_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)), extractedValue_2994_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3307 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3158_controllerName = extractPtr_3307->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3181_propertyName = extractPtr_3307->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)).add_operation (extractedValue_3158_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)), extractedValue_3158_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3539 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3360_controllerName = extractPtr_3539->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3383_propertyName = extractPtr_3539->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3404_secondaryPropertyName = extractPtr_3539->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)).add_operation (extractedValue_3360_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)), extractedValue_3360_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3767 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3588_controllerName = extractPtr_3767->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3611_propertyName = extractPtr_3767->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3632_secondaryPropertyName = extractPtr_3767->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)).add_operation (extractedValue_3588_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)), extractedValue_3588_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3963 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3814_controllerName = extractPtr_3963->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3837_propertyName = extractPtr_3963->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)).add_operation (extractedValue_3814_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)), extractedValue_3814_controllerName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 60)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_signatureProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4252 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4105_superEntityName = extractPtr_4252->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4131_propertyName = extractPtr_4252->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (extractedValue_4105_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)).add_operation (extractedValue_4131_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)), extractedValue_4131_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4453 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4303_superEntityName = extractPtr_4453->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4329_propertyName = extractPtr_4453->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::init_21__21_ (extractedValue_4303_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)).add_operation (extractedValue_4329_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)), extractedValue_4329_propertyName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 67)) ;
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

GALGAS_lstring cPtr_transientDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_transientDeclarationAST temp_0 = this ;
  const GALGAS_transientDeclarationAST temp_1 = this ;
  const GALGAS_transientDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 75)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 75)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_transientDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_7158 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 153)) ;
  if (nullptr != objectArray_7158) {
    macroValidSharedObject (objectArray_7158, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7319 ;
    const GALGAS_transientDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_7330_3 ; // Joker input parameter
    GALGAS_actionMap joker_7330_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7330_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7319, joker_7330_3, joker_7330_2, joker_7330_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 156)) ;
    switch (var_classKind_7319.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_transientDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.ggs", 159)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7686 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7319.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7463_kind = extractPtr_7686->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_4 = this ;
        const GALGAS_transientDeclarationAST temp_5 = this ;
        GALGAS_actionMap temp_6 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 164)) ;
        const GALGAS_transientDeclarationAST temp_7 = this ;
        objectArray_7158->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GALGAS_propertyKind::class_func_property (extractedValue_7463_kind, GALGAS_propertyAccessibility::class_func_transient (GALGAS_bool (ComparisonKind::equal, temp_5.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 163)).objectCompare (GALGAS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 163))  COMMA_SOURCE_FILE ("transient-property.ggs", 163)), temp_6, temp_7.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 161)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_transientDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray9  COMMA_SOURCE_FILE ("transient-property.ggs", 168)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_transientDeclarationAST temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray11  COMMA_SOURCE_FILE ("transient-property.ggs", 170)) ;
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

void cPtr_transientDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                              GALGAS_generationStruct & ioArgument_ioGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classKind var_classKind_8404 ;
  const GALGAS_transientDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_8415_3 ; // Joker input parameter
  GALGAS_actionMap joker_8415_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8415_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8404, joker_8415_3, joker_8415_2, joker_8415_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 183)) ;
  GALGAS_typeKind var_typeKind_8452 ;
  switch (var_classKind_8404.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_transientDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 188)) ;
      var_typeKind_8452.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8630 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8404.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8607_kind = extractPtr_8630->mAssociatedValue0 ;
      var_typeKind_8452 = extractedValue_8607_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_transientDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8452.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_transientDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 194)) ;
      var_typeKind_8452.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8898 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_transientDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_propertyMap temp_9 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 199)) ;
      var_rootProperties_8898 = temp_9 ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_transientDeclarationAST temp_10 = this ;
    GALGAS_classKind joker_9053 ; // Joker input parameter
    GALGAS_actionMap joker_9074_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_9074_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mRootEntityName (), joker_9053, var_rootProperties_8898, joker_9074_2, joker_9074_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 201)) ;
  }
  GALGAS_classKind var_currentClassKind_9178 ;
  GALGAS_propertyMap var_properties_9201 ;
  const GALGAS_transientDeclarationAST temp_11 = this ;
  GALGAS_actionMap joker_9213_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9213_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_11.readProperty_mClassName (), var_currentClassKind_9178, var_properties_9201, joker_9213_2, joker_9213_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 204)) ;
  GALGAS_transientDependencyListForGeneration temp_12 = GALGAS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9293 = temp_12 ;
  const GALGAS_transientDeclarationAST temp_13 = this ;
  cEnumerator_observablePropertyList enumerator_9318 (temp_13.readProperty_mDependencyList (), EnumerationOrder::up) ;
  while (enumerator_9318.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9507 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9542 ;
    GALGAS_string var_defaultValueAsString_9606 ;
    extensionMethod_analyzeObservableProperty (enumerator_9318.current_mObservableProperty (HERE), var_rootProperties_8898, ioArgument_ioSemanticContext, var_properties_9201, var_dependencyKind_9507, var_swiftTypeStringForTransientFunctionArgument_9542, var_defaultValueAsString_9606, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 208)) ;
    switch (var_dependencyKind_9507.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9318.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 222)), GALGAS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("transient-property.ggs", 222)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9318.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 224)), GALGAS_string ("only an atomic property can be observed"), fixItArray15  COMMA_SOURCE_FILE ("transient-property.ggs", 224)) ;
      }
      break ;
    }
    {
    var_dependencies_9293.setter_append (enumerator_9318.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9318.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 228)), var_swiftTypeStringForTransientFunctionArgument_9542, var_defaultValueAsString_9606, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 226)) ;
    }
    enumerator_9318.gotoNextObject () ;
  }
  {
  const GALGAS_transientDeclarationAST temp_16 = this ;
  const GALGAS_transientDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GALGAS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mTransientName ().readProperty_string (), var_typeKind_8452, GALGAS_string ("transient"), var_dependencies_9293, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 233)) ;
  }
  const GALGAS_transientDeclarationAST temp_18 = this ;
  cMapElement_classMap * objectArray_10432 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 241)) ;
  if (nullptr != objectArray_10432) {
    macroValidSharedObject (objectArray_10432, cMapElement_classMap) ;
    GALGAS_bool var_generate_10534 ;
    switch (var_currentClassKind_9178.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10534 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10534 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10534 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10917 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_9178.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10720_graphic = extractPtr_10917->mAssociatedValue1 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10720_graphic.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_transientDeclarationAST temp_20 = this ;
            const GALGAS_transientDeclarationAST temp_21 = this ;
            var_generate_10534 = GALGAS_bool (ComparisonKind::notEqual, temp_20.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (ComparisonKind::notEqual, temp_21.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 254)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10534 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    {
    const GALGAS_transientDeclarationAST temp_22 = this ;
    const GALGAS_transientDeclarationAST temp_23 = this ;
    objectArray_10432->mProperty_mPropertyGenerationList.setter_append (GALGAS_transientPropertyGeneration::init_21__21__21__21__21_ (temp_22.readProperty_mTransientName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_8452, var_dependencies_9293, var_generate_10534, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 259)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 290)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 290)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 290)) ;
  const GALGAS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 291)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 292)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 292)) ;
  const GALGAS_transientPropertyGeneration temp_1 = this ;
  const GALGAS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (GALGAS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 293)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 305)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 305)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 305)) ;
  const GALGAS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 306)) ;
  const GALGAS_transientPropertyGeneration temp_1 = this ;
  const GALGAS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (GALGAS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 307)) ;
  const GALGAS_transientPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 315)) ;
  const GALGAS_transientPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 316)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 316)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 316)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 318)) ;
  const GALGAS_transientPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 319)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 319)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 339)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 342)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                                const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientPropertyGeneration temp_1 = this ;
    const GALGAS_transientPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.ggs", 353)).operator_not (SOURCE_FILE ("transient-property.ggs", 353)) COMMA_SOURCE_FILE ("transient-property.ggs", 353)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 355)) ;
          const GALGAS_transientPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 357)) ;
          const GALGAS_transientPropertyGeneration temp_5 = this ;
          const GALGAS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GALGAS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 360)) ;
        const GALGAS_transientPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 361)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 362)) ;
        const GALGAS_transientPropertyGeneration temp_8 = this ;
        const GALGAS_transientPropertyGeneration temp_9 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GALGAS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 363)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 364)) ;
        const GALGAS_transientPropertyGeneration temp_10 = this ;
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (extensionGetter_swiftTypeName (temp_11.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 365)) ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 366)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 367)) ;
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

GALGAS_string cPtr_transientPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_16513 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 377)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_transientPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_16640 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 378)) ;
      const GALGAS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 379)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16640.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16513, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 381)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 382)) ;
          const GALGAS_transientPropertyGeneration temp_8 = this ;
          const GALGAS_transientPropertyGeneration temp_9 = this ;
          const GALGAS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 383)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 384)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 385)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16513, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 388)) ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        const GALGAS_transientPropertyGeneration temp_13 = this ;
        const GALGAS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 389)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 391)) ;
      const GALGAS_transientPropertyGeneration temp_15 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17483 (temp_15.readProperty_mDependencyList (), EnumerationOrder::up) ;
      while (enumerator_17483.hasCurrentObject ()) {
        GALGAS_string var_s_17523 = extensionGetter_generateAddObserverCall (enumerator_17483.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (ComparisonKind::notEqual, var_s_17523.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17523, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (var_prefix_16513, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 395)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 395)) ;
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

void cPtr_transientRoutineGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                           const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                           GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientRoutineGeneration temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 603)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_transientRoutineGeneration temp_2 = this ;
      const GALGAS_transientRoutineGeneration temp_3 = this ;
      const GALGAS_transientRoutineGeneration temp_4 = this ;
      const GALGAS_transientRoutineGeneration temp_5 = this ;
      const GALGAS_transientRoutineGeneration temp_6 = this ;
      GALGAS_string var_s_28624 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 604))) ;
      GALGAS_string var_header_28851 = GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 611)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 613)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)).add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 615)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 615)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 615)) ;
      const GALGAS_transientRoutineGeneration temp_7 = this ;
      const GALGAS_transientRoutineGeneration temp_8 = this ;
      const GALGAS_transientRoutineGeneration temp_9 = this ;
      GALGAS_string var_fileName_29192 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_29192, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 617)) ;
      }
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29192, GALGAS_string ("//"), var_header_28851, GALGAS_string ("\n\n"), var_s_28624, GALGAS_string ("\n"), GALGAS_string ("}\n\n//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 626)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 626)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 626)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 618)) ;
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

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (Compiler * inCompiler,
                                                                                     const GALGAS_string & in_OWNER_5F_NAME,
                                                                                     const GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const GALGAS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                     const GALGAS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
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
  GALGAS_uint index_279_ (0) ;
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  const GALGAS_proxyDeclarationAST temp_1 = this ;
  const GALGAS_proxyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_906 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_906, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 24)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_906, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.ggs", 25)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_906, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.ggs", 26)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_proxyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  const GALGAS_proxyDeclarationAST temp_1 = this ;
  const GALGAS_proxyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                          GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_3261 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 88)) ;
  if (nullptr != objectArray_3261) {
    macroValidSharedObject (objectArray_3261, cMapElement_classMap) ;
    GALGAS_classKind var_proxyKind_3418 ;
    const GALGAS_proxyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_3429_3 ; // Joker input parameter
    GALGAS_actionMap joker_3429_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3429_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3418, joker_3429_3, joker_3429_2, joker_3429_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 91)) ;
    switch (var_proxyKind_3418.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_proxyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 94)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_3976 = (const cEnumAssociatedValues_classKind_entity *) (var_proxyKind_3418.unsafePointer ()) ;
        const GALGAS_bool extractedValue_3566_isGraphic = extractPtr_3976->mAssociatedValue1 ;
        const GALGAS_proxyDeclarationAST temp_4 = this ;
        switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
        case GALGAS_proxyKind::kNotBuilt:
          break ;
        case GALGAS_proxyKind::kEnum_toManyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_5 = this ;
            GALGAS_propertyKind var_k_3648 = GALGAS_propertyKind::class_func_toMany (temp_5.readProperty_mProxyTypeName (), GALGAS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 100)), extractedValue_3566_isGraphic, GALGAS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("proxy.ggs", 102))  COMMA_SOURCE_FILE ("proxy.ggs", 98)) ;
            {
            const GALGAS_proxyDeclarationAST temp_6 = this ;
            GALGAS_actionMap temp_7 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 104)) ;
            objectArray_3261->mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3648, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 104)) ;
            }
          }
          break ;
        case GALGAS_proxyKind::kEnum_propertyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_8 = this ;
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (temp_8.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("this type should be an entity"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 106)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_proxyDeclarationAST temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray11  COMMA_SOURCE_FILE ("proxy.ggs", 109)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4205 = (const cEnumAssociatedValues_classKind_atomic *) (var_proxyKind_3418.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_4089_type = extractPtr_4205->mAssociatedValue0 ;
        {
        const GALGAS_proxyDeclarationAST temp_12 = this ;
        GALGAS_actionMap temp_13 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 111)) ;
        objectArray_3261->mProperty_mPropertyMap.setter_insertKey (temp_12.readProperty_mProxyName (), GALGAS_propertyKind::class_func_property (extractedValue_4089_type, GALGAS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 111))  COMMA_SOURCE_FILE ("proxy.ggs", 111)), temp_13, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 111)) ;
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

void cPtr_proxyDeclarationAST::method_secondAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4534 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 120)) ;
  if (nullptr != objectArray_4534) {
    macroValidSharedObject (objectArray_4534, cMapElement_classMap) ;
    GALGAS_propertyKind var_relationshipKind_4684 ;
    const GALGAS_proxyDeclarationAST temp_1 = this ;
    GALGAS_actionMap joker_4702_2 ; // Joker input parameter
    GALGAS_bool joker_4702_1 ; // Joker input parameter
    objectArray_4534->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4684, joker_4702_2, joker_4702_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 123)) ;
    switch (var_relationshipKind_4684.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const GALGAS_proxyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 126)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        const GALGAS_proxyDeclarationAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.ggs", 128)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        const GALGAS_proxyDeclarationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.ggs", 130)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const GALGAS_proxyDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 132)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        const cEnumAssociatedValues_propertyKind_toOne * extractPtr_7238 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_relationshipKind_4684.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_5194_toOneTypeName = extractPtr_7238->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_5284 ;
        GALGAS_classKind joker_5275 ; // Joker input parameter
        GALGAS_actionMap joker_5297_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5297_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5194_toOneTypeName, joker_5275, var_propertyMap_5284, joker_5297_2, joker_5297_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 134)) ;
        GALGAS_propertyKind var_propertyKind_5356 ;
        const GALGAS_proxyDeclarationAST temp_10 = this ;
        GALGAS_actionMap joker_5370_2 ; // Joker input parameter
        GALGAS_bool joker_5370_1 ; // Joker input parameter
        var_propertyMap_5284.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5356, joker_5370_2, joker_5370_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 135)) ;
        switch (var_propertyKind_5356.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const cEnumAssociatedValues_propertyKind_property * extractPtr_5821 = (const cEnumAssociatedValues_propertyKind_property *) (var_propertyKind_5356.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5422_propertyType = extractPtr_5821->mAssociatedValue0 ;
            {
            const GALGAS_proxyDeclarationAST temp_11 = this ;
            const GALGAS_proxyDeclarationAST temp_12 = this ;
            const GALGAS_proxyDeclarationAST temp_13 = this ;
            const GALGAS_proxyDeclarationAST temp_14 = this ;
            objectArray_4534->mProperty_mPropertyGenerationList.setter_append (GALGAS_atomicProxyGeneration::init_21__21__21__21__21_ (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5422_propertyType, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 138)) ;
            }
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_proxyDeclarationAST temp_16 = this ;
              test_15 = GALGAS_bool (ComparisonKind::notEqual, temp_16.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.ggs", 146)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_proxyDeclarationAST temp_17 = this ;
                TC_Array <FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.ggs", 147)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6389 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_5356.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_5844_toManyTypeName = extractPtr_6389->mAssociatedValue0 ;
            GALGAS_classKind joker_5929_4 ; // Joker input parameter
            GALGAS_propertyMap joker_5929_3 ; // Joker input parameter
            GALGAS_actionMap joker_5929_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_5929_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5844_toManyTypeName, joker_5929_4, joker_5929_3, joker_5929_2, joker_5929_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 150)) ;
            {
            const GALGAS_proxyDeclarationAST temp_19 = this ;
            const GALGAS_proxyDeclarationAST temp_20 = this ;
            const GALGAS_proxyDeclarationAST temp_21 = this ;
            const GALGAS_proxyDeclarationAST temp_22 = this ;
            objectArray_4534->mProperty_mPropertyGenerationList.setter_append (GALGAS_toManyProxyGeneration::init_21__21__21__21__21_ (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5844_toManyTypeName.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 151)) ;
            }
            {
            ioArgument_ioGeneration.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.setter_insert (extractedValue_5844_toManyTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 159)) ;
            }
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              const GALGAS_proxyDeclarationAST temp_24 = this ;
              test_23 = GALGAS_bool (ComparisonKind::notEqual, temp_24.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.ggs", 160)))).boolEnum () ;
              if (kBoolTrue == test_23) {
                const GALGAS_proxyDeclarationAST temp_25 = this ;
                TC_Array <FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.ggs", 161)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_proxyDeclarationAST temp_27 = this ;
            switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_28 = this ;
                TC_Array <FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.ggs", 166)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_30 = this ;
                TC_Array <FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.ggs", 168)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_proxyDeclarationAST temp_32 = this ;
            switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_33 = this ;
                TC_Array <FixItDescription> fixItArray34 ;
                inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.ggs", 173)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_35 = this ;
                TC_Array <FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.ggs", 175)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_proxyDeclarationAST temp_37 = this ;
            switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_38 = this ;
                TC_Array <FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.ggs", 180)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_40 = this ;
                TC_Array <FixItDescription> fixItArray41 ;
                inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.ggs", 182)) ;
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

GALGAS_string cPtr_toManyProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 209)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)) ;
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 211)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 212)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                          const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 234)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)) ;
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 235)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 236)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)).add_operation (GALGAS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 237)) ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  // var ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GALGAS_string ("_boundObjectDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 238)) ;
  const GALGAS_toManyProxyGeneration temp_3 = this ;
  const GALGAS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (temp_4.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 240)) ;
  const GALGAS_toManyProxyGeneration temp_5 = this ;
  const GALGAS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)).add_operation (temp_6.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 242)) ;
  const GALGAS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      switch self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 243)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 247)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 248)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 250)) ;
  const GALGAS_toManyProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 251)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 251)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 252)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 253)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 260)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 261)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (GALGAS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 262)) ;
  result_result.plusAssign_operation(GALGAS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 263)) ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 264)) ;
  const GALGAS_toManyProxyGeneration temp_3 = this ;
  const GALGAS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)).add_operation (GALGAS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 265)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 265)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 266)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 267)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 268)) ;
  const GALGAS_toManyProxyGeneration temp_5 = this ;
  const GALGAS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (GALGAS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (GALGAS_string ("_StartsBeingObserved (by: controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 269)) ;
  const GALGAS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 270)).add_operation (GALGAS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 270)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 271)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 295)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 296)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 297)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 297)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 310)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (GALGAS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 311)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 312)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 312)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 319)) ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 322)) ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 323)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 323)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 339)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 342)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 343)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 344)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 345)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  const GALGAS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 347)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 347)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 348)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 349)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 350)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 351)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 352)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 353)) ;
  const GALGAS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 354)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 354)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 355)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 356)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 357)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 358)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 359)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                          const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 369)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 370)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 371)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 372)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 373)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 374)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 375)) ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 376)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 376)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 377)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 378)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 379)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 380)).add_operation (GALGAS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 380)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 380)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 381)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 382)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 383)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 390)) ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)).add_operation (GALGAS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 391)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 392)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 392)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 392)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 393)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 394)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 395)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 396)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 397)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 398)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 399)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 400)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 401)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 402)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 403)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 404)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 405)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 406)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 407)) ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 408)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  const GALGAS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 409)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 410)) ;
  const GALGAS_atomicProxyGeneration temp_8 = this ;
  const GALGAS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 411)) ;
  const GALGAS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GALGAS_string ("_property.startsBeingObserved (by: self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 412)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 412)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 412)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_1086 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1086, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1086, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 27)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1086, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 28)) ;
  }
  const GALGAS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1086, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 29)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 35)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 35)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4992 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 126)) ;
  if (nullptr != objectArray_4992) {
    macroValidSharedObject (objectArray_4992, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_5152 ;
    const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_5163_3 ; // Joker input parameter
    GALGAS_actionMap joker_5163_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5163_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_5152, joker_5163_3, joker_5163_2, joker_5163_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 129)) ;
    GALGAS_propertyMap var_preferencesPropertyMap_5277 ;
    GALGAS_classKind joker_5262 ; // Joker input parameter
    GALGAS_actionMap joker_5307_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5307_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 131)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.ggs", 131)), inCompiler COMMA_HERE), joker_5262, var_preferencesPropertyMap_5277, joker_5307_2, joker_5307_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 130)) ;
    switch (var_classKind_5152.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 138)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_6090 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5152.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_5444_kind = extractPtr_6090->mAssociatedValue0 ;
        {
        const GALGAS_atomicPropertyDeclarationAST temp_4 = this ;
        GALGAS_actionMap temp_5 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)) ;
        objectArray_4992->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GALGAS_propertyKind::class_func_property (extractedValue_5444_kind, GALGAS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.ggs", 140))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)), temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 140)) ;
        }
        GALGAS_string var_swiftDefaultValueAsString_5699 ;
        const GALGAS_atomicPropertyDeclarationAST temp_6 = this ;
        GALGAS_typeKindList temp_7 = GALGAS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142)) ;
        temp_7.enterElement (GALGAS_typeKindList_2D_element::init_21_ (extractedValue_5444_kind, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), temp_7, var_preferencesPropertyMap_5277, var_swiftDefaultValueAsString_5699, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 142)) ;
        {
        const GALGAS_atomicPropertyDeclarationAST temp_8 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_9 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_10 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_11 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_12 = this ;
        objectArray_4992->mProperty_mPropertyGenerationList.setter_append (GALGAS_atomicPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_8.readProperty_mPropertyName ().readProperty_string (), temp_9.readProperty_mGenerateResetMethod (), temp_10.readProperty_mGenerateDirectRead (), temp_11.readProperty_mGenerateDirectAccess (), extractedValue_5444_kind, GALGAS_bool (false), var_swiftDefaultValueAsString_5699, GALGAS_bool (ComparisonKind::equal, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 152)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 144)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_13 = this ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray14  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 156)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_15 = this ;
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 158)) ;
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

GALGAS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)).add_operation (GALGAS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)) ;
  const GALGAS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 205)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 206)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 211)) ;
  const GALGAS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 213)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 214)) ;
  const GALGAS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 216)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 217)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 219)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 220)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 222)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 223)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 224)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 225)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 226)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 231)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 232)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 233)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 234)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 235)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)) ;
  const GALGAS_atomicPropertyGeneration temp_6 = this ;
  const GALGAS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)) ;
  const GALGAS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                             const GALGAS_bool constinArgument_inGenerationDirectAccess,
                                                                             const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)) ;
      const GALGAS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)) ;
      const GALGAS_atomicPropertyGeneration temp_3 = this ;
      const GALGAS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)).add_operation (GALGAS_string ("_property = EBPreferenceProperty <"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)) ;
      const GALGAS_atomicPropertyGeneration temp_5 = this ;
      const GALGAS_atomicPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GALGAS_string ("> (defaultValue: ").add_operation (temp_5.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)).add_operation (GALGAS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)).add_operation (GALGAS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)) ;
    const GALGAS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  //   Atomic property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)) ;
    const GALGAS_atomicPropertyGeneration temp_8 = this ;
    const GALGAS_atomicPropertyGeneration temp_9 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)).add_operation (GALGAS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_atomicPropertyGeneration temp_11 = this ;
      test_10 = temp_11.readProperty_mGenerateResetMethod ().boolEnum () ;
      if (kBoolTrue == test_10) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)) ;
        const GALGAS_atomicPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final func reset_").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)).add_operation (GALGAS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)) ;
        const GALGAS_atomicPropertyGeneration temp_13 = this ;
        const GALGAS_atomicPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)).add_operation (GALGAS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)).add_operation (temp_14.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)) ;
      }
    }
    GALGAS_bool test_15 = constinArgument_inGenerationDirectAccess ;
    if (kBoolTrue != test_15.boolEnum ()) {
      const GALGAS_atomicPropertyGeneration temp_16 = this ;
      test_15 = temp_16.readProperty_mGenerateDirectRead () ;
    }
    GALGAS_bool test_17 = test_15 ;
    if (kBoolTrue != test_17.boolEnum ()) {
      const GALGAS_atomicPropertyGeneration temp_18 = this ;
      test_17 = temp_18.readProperty_mGenerateDirectAccess () ;
    }
    GALGAS_bool var_generateAccess_12301 = test_17 ;
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_generateAccess_12301.boolEnum () ;
      if (kBoolTrue == test_19) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)) ;
        const GALGAS_atomicPropertyGeneration temp_20 = this ;
        const GALGAS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_20.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (extensionGetter_swiftTypeName (temp_21.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)) ;
        const GALGAS_atomicPropertyGeneration temp_22 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GALGAS_atomicPropertyGeneration temp_24 = this ;
          test_23 = temp_24.readProperty_mGenerateDirectAccess ().boolEnum () ;
          if (kBoolTrue == test_23) {
            const GALGAS_atomicPropertyGeneration temp_25 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_25.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)) ;
          }
        }
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 286)) ;
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

GALGAS_string cPtr_atomicPropertyGeneration::getter_initCode (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("    self.").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)).add_operation (GALGAS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)).add_operation (extensionGetter_swiftTypeName (temp_1.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 294)) ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string (" (defaultValue: ").add_operation (temp_2.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)).add_operation (GALGAS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)) ;
  const GALGAS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(temp_3.readProperty_mPropertyName ().add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  const GALGAS_toOneRelationshipAST temp_1 = this ;
  const GALGAS_toOneRelationshipAST temp_2 = this ;
  GALGAS_lstring var_node_1034 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1034, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 25)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1034, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 26)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1034, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 27)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOneRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toOneRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  const GALGAS_toOneRelationshipAST temp_1 = this ;
  const GALGAS_toOneRelationshipAST temp_2 = this ;
  result_result = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 33)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_4137 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 104)) ;
  if (nullptr != objectArray_4137) {
    macroValidSharedObject (objectArray_4137, cMapElement_classMap) ;
    {
    const GALGAS_toOneRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToOneClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 107)) ;
    }
    GALGAS_classKind var_classKind_4385 ;
    const GALGAS_toOneRelationshipAST temp_2 = this ;
    GALGAS_propertyMap joker_4396_3 ; // Joker input parameter
    GALGAS_actionMap joker_4396_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4396_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4385, joker_4396_3, joker_4396_2, joker_4396_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 108)) ;
    switch (var_classKind_4385.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toOneRelationshipAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 111)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toOneRelationshipAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 113)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toOneRelationshipAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 115)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_5241 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4385.unsafePointer ()) ;
        const GALGAS_bool extractedValue_4718_graphic = extractPtr_5241->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_4730_handleOpposite = extractPtr_5241->mAssociatedValue3 ;
        const GALGAS_toOneRelationshipAST temp_9 = this ;
        const GALGAS_toOneRelationshipAST temp_10 = this ;
        const GALGAS_toOneRelationshipAST temp_11 = this ;
        GALGAS_propertyKind var_kind_4758 = GALGAS_propertyKind::class_func_toOne (temp_9.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 119)), extractedValue_4718_graphic, temp_10.readProperty_mOpposite (), temp_11.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 117)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          const GALGAS_toOneRelationshipAST temp_13 = this ;
          test_12 = GALGAS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOpposite ().objectCompare (GALGAS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.ggs", 124)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            test_12 = extractedValue_4730_handleOpposite.operator_not (SOURCE_FILE ("to-one-relationship.ggs", 124)).boolEnum () ;
            if (kBoolTrue == test_12) {
              const GALGAS_toOneRelationshipAST temp_14 = this ;
              const GALGAS_toOneRelationshipAST temp_15 = this ;
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_15.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 125)).add_operation (GALGAS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 125)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 125)) ;
            }
          }
        }
        {
        const GALGAS_toOneRelationshipAST temp_17 = this ;
        GALGAS_actionMap temp_18 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 127)) ;
        objectArray_4137->mProperty_mPropertyMap.setter_insertKey (temp_17.readProperty_mToOneRelationshipName (), var_kind_4758, temp_18, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 127)) ;
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

void cPtr_toOneRelationshipAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_5577 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 136)) ;
  if (nullptr != objectArray_5577) {
    macroValidSharedObject (objectArray_5577, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_5742 ;
    GALGAS_propertyMap var_destinationEntityPropertyMap_5758 ;
    const GALGAS_toOneRelationshipAST temp_1 = this ;
    GALGAS_actionMap joker_5788_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5788_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5742, var_destinationEntityPropertyMap_5758, joker_5788_2, joker_5788_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 139)) ;
    switch (var_classKind_5742.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_6434 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_5742.unsafePointer ()) ;
        const GALGAS_bool extractedValue_5897_graphic = extractPtr_6434->mAssociatedValue1 ;
        const GALGAS_toOneRelationshipAST temp_2 = this ;
        const GALGAS_toOneRelationshipAST temp_3 = this ;
        const GALGAS_toOneRelationshipAST temp_4 = this ;
        GALGAS_propertyKind var_kind_5922 = GALGAS_propertyKind::class_func_toOne (temp_2.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-one-relationship.ggs", 147)), extractedValue_5897_graphic, temp_3.readProperty_mOpposite (), temp_4.readProperty_mWeak ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 145)) ;
        {
        const GALGAS_toOneRelationshipAST temp_5 = this ;
        const GALGAS_toOneRelationshipAST temp_6 = this ;
        const GALGAS_toOneRelationshipAST temp_7 = this ;
        const GALGAS_toOneRelationshipAST temp_8 = this ;
        const GALGAS_toOneRelationshipAST temp_9 = this ;
        objectArray_5577->mProperty_mPropertyGenerationList.setter_append (GALGAS_toOnePropertyGeneration::init_21__21__21__21__21__21__21_ (temp_5.readProperty_mToOneRelationshipName ().readProperty_string (), temp_6.readProperty_mClassName ().readProperty_string (), var_kind_5922, temp_7.readProperty_mOpposite (), var_destinationEntityPropertyMap_5758, temp_8.readProperty_mUsedForSignature (), temp_9.readProperty_mWeak ().operator_not (SOURCE_FILE ("to-one-relationship.ggs", 159)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 153)) ;
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

GALGAS_string cPtr_toOnePropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                            const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                            const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)) ;
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  const GALGAS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)).add_operation (GALGAS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_3.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)) ;
  const GALGAS_toOnePropertyGeneration temp_4 = this ;
  const GALGAS_toOnePropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string (", strongRef: ").add_operation (temp_4.readProperty_mStrongRef ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GALGAS_string (", key: \""), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)).add_operation (GALGAS_string ("\")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)) ;
  const GALGAS_toOnePropertyGeneration temp_6 = this ;
  const GALGAS_toOnePropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 200)) ;
  const GALGAS_toOnePropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)).add_operation (GALGAS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 201)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 202)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 203)) ;
  const GALGAS_toOnePropertyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)).add_operation (GALGAS_string ("_property.propval !== newValue {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 204)) ;
  const GALGAS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        if self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)).add_operation (GALGAS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 205)) ;
  const GALGAS_toOnePropertyGeneration temp_11 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)).add_operation (GALGAS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 206)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("        if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 208)) ;
  const GALGAS_toOnePropertyGeneration temp_12 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 211)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)) ;
  const GALGAS_toOnePropertyGeneration temp_13 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)).add_operation (GALGAS_string ("_none = EBTransientProperty <Bool> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOpposite ().enumValue ()) {
  case GALGAS_toOneOppositeRelationship::kNotBuilt:
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * extractPtr_10354 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) (temp_0.readProperty_mOpposite ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9743_oppositeName = extractPtr_10354->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_1 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GALGAS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (extractedValue_9743_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 229)) ;
      const GALGAS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)).add_operation (GALGAS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 230)) ;
      const GALGAS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 231)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9743_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)).add_operation (GALGAS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 232)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9743_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)).add_operation (GALGAS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 233)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 234)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_none:
    {
      const GALGAS_toOnePropertyGeneration temp_4 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)) ;
      const GALGAS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)).add_operation (GALGAS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_11146 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (temp_0.readProperty_mOpposite ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10563_oppositeName = extractPtr_11146->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_6 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GALGAS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (extractedValue_10563_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)) ;
      const GALGAS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)).add_operation (GALGAS_string ("_property.undoManager = inUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)) ;
      const GALGAS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_10563_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_10563_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)) ;
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

GALGAS_string cPtr_toOnePropertyGeneration::getter_setupRelationshipFromDictionaryCode (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 251)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 252)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let possibleEntity = readEntityFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 253)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        relationshipName: \"").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 254)) ;
  result_result.plusAssign_operation(GALGAS_string ("        dictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)) ;
  result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: inManagedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)) ;
  const GALGAS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if let entity = possibleEntity as\? ").add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)).add_operation (GALGAS_string ("_property.setProp (entity)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 259)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 261)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 288)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    if let object = self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)) ;
  result_result.plusAssign_operation(GALGAS_string ("      ioObjectArray.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 291)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  const GALGAS_toManyRelationshipAST temp_1 = this ;
  const GALGAS_toManyRelationshipAST temp_2 = this ;
  GALGAS_lstring var_node_1101 = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1101, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 27)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1101, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 28)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1101, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 29)) ;
  }
  const GALGAS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_1575 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_6.readProperty_mOption ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_1395_masterPropertyName = extractPtr_1575->mAssociatedValue0 ;
      const GALGAS_toManyRelationshipAST temp_7 = this ;
      GALGAS_lstring var_dependanceNode_1425 = GALGAS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)).add_operation (extractedValue_1395_masterPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)), extractedValue_1395_masterPropertyName.readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1101, var_dependanceNode_1425 COMMA_SOURCE_FILE ("to-many-relationship.ggs", 33)) ;
      }
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
    {
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
    {
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toManyRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  const GALGAS_toManyRelationshipAST temp_1 = this ;
  const GALGAS_toManyRelationshipAST temp_2 = this ;
  result_result = GALGAS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                            GALGAS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_5524 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 139)) ;
  if (nullptr != objectArray_5524) {
    macroValidSharedObject (objectArray_5524, cMapElement_classMap) ;
    {
    const GALGAS_toManyRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 142)) ;
    }
    GALGAS_classKind var_classKind_5773 ;
    const GALGAS_toManyRelationshipAST temp_2 = this ;
    GALGAS_propertyMap joker_5784_3 ; // Joker input parameter
    GALGAS_actionMap joker_5784_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5784_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_5773, joker_5784_3, joker_5784_2, joker_5784_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 143)) ;
    switch (var_classKind_5773.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toManyRelationshipAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 146)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toManyRelationshipAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 148)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toManyRelationshipAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 150)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_7913 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_5773.unsafePointer ()) ;
        const GALGAS_bool extractedValue_6106_graphic = extractPtr_7913->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_6118_handleOpposite = extractPtr_7913->mAssociatedValue3 ;
        const GALGAS_toManyRelationshipAST temp_9 = this ;
        const GALGAS_toManyRelationshipAST temp_10 = this ;
        GALGAS_propertyKind var_kind_6146 = GALGAS_propertyKind::class_func_toMany (temp_9.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-many-relationship.ggs", 154)), extractedValue_6106_graphic, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 152)) ;
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = extractedValue_6118_handleOpposite.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 158)).boolEnum () ;
          if (kBoolTrue == test_11) {
            const GALGAS_toManyRelationshipAST temp_12 = this ;
            GALGAS_lstring var_unused_0_6400 ;
            const bool optionalResult6373 = temp_12.readProperty_mOption ().optional_hasOpposite (var_unused_0_6400) ;
            if (!optionalResult6373) {
              test_11 = kBoolFalse ;
            }
            if (kBoolTrue == test_11) {
              const GALGAS_toManyRelationshipAST temp_13 = this ;
              const GALGAS_toManyRelationshipAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mToManyRelationshipName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_14.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)).add_operation (GALGAS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)), fixItArray15  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)) ;
            }
          }
        }
        {
        const GALGAS_toManyRelationshipAST temp_16 = this ;
        GALGAS_actionMap temp_17 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 161)) ;
        objectArray_5524->mProperty_mPropertyMap.setter_insertKey (temp_16.readProperty_mToManyRelationshipName (), var_kind_6146, temp_17, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 161)) ;
        }
        const GALGAS_toManyRelationshipAST temp_18 = this ;
        GALGAS_bool var_inPrefs_6681 = GALGAS_bool (ComparisonKind::equal, temp_18.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 163)))) ;
        GALGAS_toManyRelationshipOptionGeneration var_optionForGeneration_6798 ;
        const GALGAS_toManyRelationshipAST temp_19 = this ;
        switch (temp_19.readProperty_mOption ().enumValue ()) {
        case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_7160 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_19.readProperty_mOption ().unsafePointer ()) ;
            const GALGAS_lstring extractedValue_6870_masterPropertyName = extractPtr_7160->mAssociatedValue0 ;
            GALGAS_propertyKind var_masterPropertyKind_6949 ;
            GALGAS_actionMap joker_6969_2 ; // Joker input parameter
            GALGAS_bool joker_6969_1 ; // Joker input parameter
            objectArray_5524->mProperty_mPropertyMap.method_searchKey (extractedValue_6870_masterPropertyName, var_masterPropertyKind_6949, joker_6969_2, joker_6969_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 168)) ;
            var_optionForGeneration_6798 = GALGAS_toManyRelationshipOptionGeneration::class_func_hasDependance (extractedValue_6870_masterPropertyName.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_6949, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 171))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 169)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_7280 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (temp_19.readProperty_mOption ().unsafePointer ()) ;
            const GALGAS_lstring extractedValue_7186_oppositeName = extractPtr_7280->mAssociatedValue0 ;
            var_optionForGeneration_6798 = GALGAS_toManyRelationshipOptionGeneration::class_func_hasOpposite (extractedValue_7186_oppositeName.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 174)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_none:
          {
            var_optionForGeneration_6798 = GALGAS_toManyRelationshipOptionGeneration::class_func_none (SOURCE_FILE ("to-many-relationship.ggs", 176)) ;
          }
          break ;
        }
        {
        const GALGAS_toManyRelationshipAST temp_20 = this ;
        const GALGAS_toManyRelationshipAST temp_21 = this ;
        const GALGAS_toManyRelationshipAST temp_22 = this ;
        const GALGAS_toManyRelationshipAST temp_23 = this ;
        const GALGAS_toManyRelationshipAST temp_24 = this ;
        objectArray_5524->mProperty_mPropertyGenerationList.setter_append (GALGAS_toManyPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mToManyRelationshipName ().readProperty_string (), temp_21.readProperty_mGenerateDirectAccess (), temp_22.readProperty_mGenerateDirectRead (), var_kind_6146, var_optionForGeneration_6798, var_inPrefs_6681, temp_23.readProperty_mCustomStore (), temp_24.readProperty_mUsedForSignature (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 179)) ;
        }
        {
        const GALGAS_toManyRelationshipAST temp_25 = this ;
        ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (temp_25.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 190)) ;
        }
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = var_inPrefs_6681.boolEnum () ;
          if (kBoolTrue == test_26) {
            {
            const GALGAS_toManyRelationshipAST temp_27 = this ;
            ioArgument_ioGeneration.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.setter_insert (temp_27.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 192)) ;
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

GALGAS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                             const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                             const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 229)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)) ;
      const GALGAS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)) ;
      GALGAS_string var_masterPropertyTypeName_9702 ;
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      GALGAS_string joker_9663_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_hasDependance (joker_9663_1, var_masterPropertyTypeName_9702, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)) ;
      const GALGAS_toManyPropertyGeneration temp_4 = this ;
      const GALGAS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)).add_operation (GALGAS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)).add_operation (GALGAS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)).add_operation (var_masterPropertyTypeName_9702, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = this ;
      const GALGAS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)) ;
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 239)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 239)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 240)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 240)) ;
        }
      }
      result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 242)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (kBoolTrue == test_12) {
        result_result = GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 244)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 244)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 244)) ;
        const GALGAS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)) ;
        result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)) ;
        const GALGAS_toManyPropertyGeneration temp_15 = this ;
        const GALGAS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)).add_operation (GALGAS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)) ;
        const GALGAS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssign_operation(GALGAS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (GALGAS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)) ;
      }
    }
    if (kBoolFalse == test_12) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 250)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 250)) ;
      const GALGAS_toManyPropertyGeneration temp_18 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)) ;
      const GALGAS_toManyPropertyGeneration temp_19 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)).add_operation (GALGAS_string ("_property = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        const GALGAS_toManyPropertyGeneration temp_21 = this ;
        test_20 = temp_21.readProperty_mCustomStore ().boolEnum () ;
        if (kBoolTrue == test_20) {
          const GALGAS_toManyPropertyGeneration temp_22 = this ;
          result_result.plusAssign_operation(GALGAS_string ("Custom_").add_operation (extensionGetter_swiftTypeName (temp_22.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 255)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 255)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 255)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 255)) ;
        }
      }
      const GALGAS_toManyPropertyGeneration temp_23 = this ;
      result_result.plusAssign_operation(GALGAS_string ("StoredArrayOf_").add_operation (extensionGetter_swiftTypeName (temp_23.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 257)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 257)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 257)) ;
      const GALGAS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_24.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)).add_operation (GALGAS_string (", key: "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)) ;
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        const GALGAS_toManyPropertyGeneration temp_26 = this ;
        test_25 = temp_26.readProperty_mCustomStore ().boolEnum () ;
        if (kBoolTrue == test_25) {
          const GALGAS_toManyPropertyGeneration temp_27 = this ;
          const GALGAS_toManyPropertyGeneration temp_28 = this ;
          result_result.plusAssign_operation(GALGAS_string ("KEY_FOR_").add_operation (extensionGetter_swiftTypeName (temp_27.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)).add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)) ;
        }
      }
      if (kBoolFalse == test_25) {
        const GALGAS_toManyPropertyGeneration temp_29 = this ;
        result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 262)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 262)) ;
      }
      result_result.plusAssign_operation(GALGAS_string (")\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 264)) ;
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        const GALGAS_toManyPropertyGeneration temp_31 = this ;
        GALGAS_bool test_32 = temp_31.readProperty_mGenerateDirectAccess () ;
        if (kBoolTrue != test_32.boolEnum ()) {
          const GALGAS_toManyPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_mGenerateDirectRead () ;
        }
        test_30 = test_32.boolEnum () ;
        if (kBoolTrue == test_30) {
          result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)) ;
          const GALGAS_toManyPropertyGeneration temp_34 = this ;
          const GALGAS_toManyPropertyGeneration temp_35 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (extensionGetter_swiftTypeName (temp_35.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)) ;
          const GALGAS_toManyPropertyGeneration temp_36 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_36.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)) ;
          enumGalgasBool test_37 = kBoolTrue ;
          if (kBoolTrue == test_37) {
            const GALGAS_toManyPropertyGeneration temp_38 = this ;
            test_37 = temp_38.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 269)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 269)).boolEnum () ;
            if (kBoolTrue == test_37) {
              const GALGAS_toManyPropertyGeneration temp_39 = this ;
              test_37 = temp_39.readProperty_mGenerateDirectAccess ().boolEnum () ;
              if (kBoolTrue == test_37) {
                const GALGAS_toManyPropertyGeneration temp_40 = this ;
                result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_40.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 270)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 270)) ;
              }
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 272)) ;
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

GALGAS_string cPtr_toManyPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyPropertyGeneration temp_0 = this ;
  const GALGAS_toManyPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 286)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 286)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 286)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 286)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_12958 = temp_0 ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("self.undoManager") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("inUndoManager") ;
  }
  GALGAS_string var_undoManager_13027 = temp_2 ;
  const GALGAS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_none:
    {
      const GALGAS_toManyPropertyGeneration temp_5 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 296)).add_operation (GALGAS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 296)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_12958, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (GALGAS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (var_undoManager_13027, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * extractPtr_13968 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) (temp_4.readProperty_mOption ().unsafePointer ()) ;
      const GALGAS_string extractedValue_13399_oppositeName = extractPtr_13968->mAssociatedValue0 ;
      const GALGAS_toManyPropertyGeneration temp_7 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)).add_operation (GALGAS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)) ;
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_12958, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GALGAS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (var_undoManager_13027, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_12958, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13399_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13399_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)) ;
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

GALGAS_string cPtr_toManyPropertyGeneration::getter_setupRelationshipFromDictionaryCode (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 313)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mCustomStore ().boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_toManyPropertyGeneration temp_4 = this ;
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 316)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 316)) ;
        const GALGAS_toManyPropertyGeneration temp_5 = this ;
        const GALGAS_toManyPropertyGeneration temp_6 = this ;
        const GALGAS_toManyPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (GALGAS_string ("_property.setProp (EBReferenceArray (customRead_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (GALGAS_string (" (fromDictionary: inDictionary, with: self.undoManager)))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)) ;
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 319)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 319)) ;
      result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 320)) ;
      result_result.plusAssign_operation(GALGAS_string ("      let array = readEntityArrayFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 321)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GALGAS_string ("        inRelationshipName: \"").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 322)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 322)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 322)) ;
      result_result.plusAssign_operation(GALGAS_string ("        inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 323)) ;
      result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: inManagedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 324)) ;
      const GALGAS_toManyPropertyGeneration temp_10 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      ) as! [").add_operation (extensionGetter_swiftTypeName (temp_10.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)) ;
      const GALGAS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)).add_operation (GALGAS_string ("_property.setProp (EBReferenceArray (array))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 327)) ;
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

GALGAS_string cPtr_toManyPropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mCustomStore ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_toManyPropertyGeneration temp_2 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 353)).add_operation (GALGAS_string (" (custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 353)) ;
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    /* for managedObject in self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)).add_operation (GALGAS_string ("_property.propval.values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)) ;
      result_result.plusAssign_operation(GALGAS_string ("      ioObjectArray.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)) ;
      result_result.plusAssign_operation(GALGAS_string ("    } */\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 356)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_4 = this ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 358)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 358)) ;
    const GALGAS_toManyPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 359)).add_operation (GALGAS_string (".values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 359)) ;
    result_result.plusAssign_operation(GALGAS_string ("      ioObjectArray.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 360)) ;
    result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 361)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration resetToManyRelationships'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_resetToManyRelationships (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 368)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_2 = this ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 371)) ;
    const GALGAS_toManyPropertyGeneration temp_3 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 372)).add_operation (GALGAS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 372)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 372)) ;
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

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (Compiler * /* inCompiler */,
                                                                            const GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs_3F__3F__26_ (const GALGAS_string constinArgument_inOutputDirectory,
                                                         const GALGAS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_validationStubRoutineListForGeneration enumerator_1320 (constinArgument_inValidationStubRoutineListForGeneration, EnumerationOrder::up) ;
  while (enumerator_1320.hasCurrentObject ()) {
    GALGAS_string var_s_1391 = GALGAS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1320.current_mObjectTypeName (HERE), enumerator_1320.current_mModelName (HERE), enumerator_1320.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 33))) ;
    GALGAS_string var_fileName_1526 = GALGAS_string ("validation-").add_operation (enumerator_1320.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (enumerator_1320.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_1526, inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 39)) ;
    }
    GALGAS_string var_defaultUserZone_32__1650 = GALGAS_string ("    var result : EBValidationResult <").add_operation (enumerator_1320.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GALGAS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GALGAS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GALGAS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 42)).add_operation (GALGAS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 43)).add_operation (GALGAS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 44)).add_operation (GALGAS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 45)).add_operation (GALGAS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 46)).add_operation (GALGAS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 47)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1526, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_s_1391, var_defaultUserZone_32__1650, GALGAS_string ("  }\n},\n\n//---------------------------------------------------------------------------------------------------------------------*\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 49)) ;
    }
    enumerator_1320.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildActionMap_3F__21_ (const GALGAS_lstringlist constinArgument_inActionDeclarationList,
                                     GALGAS_actionMap & outArgument_outActionMap,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActionMap.drop () ; // Release 'out' argument
  GALGAS_actionMap temp_0 = GALGAS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 46)) ;
  outArgument_outActionMap = temp_0 ;
  cEnumerator_lstringlist enumerator_1945 (constinArgument_inActionDeclarationList, EnumerationOrder::up) ;
  while (enumerator_1945.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1945.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 48)) ;
    }
    enumerator_1945.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@actionFileGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                     const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                     GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_actionFileGeneration temp_0 = this ;
  const GALGAS_actionFileGeneration temp_1 = this ;
  GALGAS_string var_s_2738 = GALGAS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.readProperty_mClassName (), temp_1.readProperty_mActionName () COMMA_SOURCE_FILE ("run-action.ggs", 67))) ;
  const GALGAS_actionFileGeneration temp_2 = this ;
  const GALGAS_actionFileGeneration temp_3 = this ;
  GALGAS_string var_fileName_2850 = GALGAS_string ("action-").add_operation (temp_2.readProperty_mClassName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (temp_3.readProperty_mActionName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_2850, inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 72)) ;
  }
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2850, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_s_2738, GALGAS_string ("    ENTER USER CODE HERE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::class_func_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("run-action.ggs", 81)), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 73)) ;
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

GALGAS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (Compiler * /* inCompiler */,
                                                                             const GALGAS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                             const GALGAS_string & in_ACTION_5F_NAME
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//——————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension ") ;
  result.appendString (in_EXTENDED_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  @objc func ") ;
  result.appendString (in_ACTION_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inSender : NSObject\?) {\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                              const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                              const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                              const GALGAS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                              const GALGAS_propertyMap /* constinArgument_inPreferencesObservablePropertyMap */,
                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GALGAS_typeKind & outArgument_outType,
                                                                                              GALGAS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GALGAS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GALGAS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.ggs", 274)) ;
  const GALGAS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyKind var_kind_13154 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_13184 ;
  GALGAS_string var_defaultValueAsString_13253 ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GALGAS_propertyMap temp_1 ;
  const enumGalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (kBoolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_13154, var_swiftTypeStringForTransientFunctionArgument_13184, var_defaultValueAsString_13253, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 290)) ;
  switch (var_kind_13154.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_13334 = (const cEnumAssociatedValues_propertyKind_property *) (var_kind_13154.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_13309_type = extractPtr_13334->mAssociatedValue0 ;
      outArgument_outType = extractedValue_13309_type ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)), GALGAS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)), GALGAS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)), GALGAS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)), GALGAS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string ("self.") ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 311)), inCompiler COMMA_HERE) ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                                 const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GALGAS_typeKind & outArgument_outType,
                                                                                                 GALGAS_location & outArgument_outErrorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14921 ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14921, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 328)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 338)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 338)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 339)) ;
    }
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_14921, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                             const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GALGAS_typeKind & outArgument_outType,
                                                                                             GALGAS_location & outArgument_outErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16039 ;
  GALGAS_typeKind var_outLeftType_16064 ;
  GALGAS_location var_outLeftLocation_16086 ;
  const GALGAS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16039, var_outLeftType_16064, var_outLeftLocation_16086, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 356)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_16064.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 366)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 366)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16086, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 367)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_16507 ;
  GALGAS_typeKind var_outRightType_16533 ;
  GALGAS_location var_outRightLocation_16556 ;
  const GALGAS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_16507, var_outRightType_16533, var_outRightLocation_16556, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 369)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_16533.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 379)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 379)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_16556, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 380)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 382)) ;
  outArgument_outErrorLocation = var_outRightLocation_16556 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16039, var_rightExpression_16507, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                              const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GALGAS_typeKind & outArgument_outType,
                                                                                              GALGAS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_17728 ;
  GALGAS_typeKind var_outLeftType_17753 ;
  GALGAS_location var_outLeftLocation_17775 ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_17728, var_outLeftType_17753, var_outLeftLocation_17775, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 399)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_17753.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 409)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 409)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_17775, GALGAS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 410)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18196 ;
  GALGAS_typeKind var_outRightType_18222 ;
  GALGAS_location var_outRightLocation_18245 ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_18196, var_outRightType_18222, var_outRightLocation_18245, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 412)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_18222.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 422)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 422)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_18245, GALGAS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 423)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 425)) ;
  outArgument_outErrorLocation = var_outRightLocation_18245 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_17728, var_rightExpression_18196, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GALGAS_bool constinArgument_inPreferences,
                                                                                              const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GALGAS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GALGAS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GALGAS_typeKind & outArgument_outType,
                                                                                              GALGAS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_19418 ;
  GALGAS_typeKind var_outLeftType_19443 ;
  GALGAS_location var_outLeftLocation_19465 ;
  const GALGAS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_19418, var_outLeftType_19443, var_outLeftLocation_19465, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 442)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_19443.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 452)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 452)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_19465, GALGAS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 453)) ;
    }
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19887 ;
  GALGAS_typeKind var_outRightType_19913 ;
  GALGAS_location var_outRightLocation_19936 ;
  const GALGAS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19887, var_outRightType_19913, var_outRightLocation_19936, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 455)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_19913.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 465)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 465)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19936, GALGAS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 466)) ;
    }
  }
  outArgument_outType = GALGAS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 468)) ;
  outArgument_outErrorLocation = var_outRightLocation_19936 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_19418, var_rightExpression_19887, inCompiler COMMA_HERE) ;
}
